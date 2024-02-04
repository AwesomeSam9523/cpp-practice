/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node *mergeSortHelper(Node *start, Node *end);

Node *mergeSortedLL(Node *head1, Node *head2)
{
    if (head1 == NULL) {
		return head2;
	}

	if (head2 == NULL) {
		return head1;
	}

	Node *mergeHead = NULL;
	Node *mergeTail = NULL;

	while (true) {
		if (head1 == NULL || head2 == NULL) {
			if (head1 == NULL) {
				mergeTail -> next = head2;
			} else {
				mergeTail -> next = head1;
			}
			break;
		}

		Node* smallerNode = head1 -> data > head2 -> data ? head2 : head1;
		if (mergeHead == NULL) {
			mergeHead = smallerNode;
			mergeTail = smallerNode;
		} else {
			mergeTail -> next = smallerNode;
			mergeTail = smallerNode;
		}

		if (smallerNode == head1) {
			head1 = head1 -> next;
		} else {
			head2 = head2 -> next;
		}
	}

	return mergeHead;
}

Node *mergeSort(Node *head)
{
    if (head == NULL) {
        return head;
    }

    Node *end = head;
    while (true) {
        if (end == NULL)
            break;
        if (end -> next == NULL)
            break;
        
        end = end -> next;
    }

    return mergeSortHelper(head, end);
}

Node *mergeSortHelper(Node *start, Node *end)
{   
    if (start == end)
        return start;
    
    Node *slow = start;
    Node *fast = start;
    Node *splitNode = new Node(start -> data);
    Node *splitNodeHead = splitNode;

    while (true) {
        if (fast == end) {
            break;
        }
        if (fast -> next == end) {
            break;
        }

        slow = slow -> next;
        splitNode -> next = new Node(slow -> data);
        splitNode = splitNode -> next;
        fast = fast -> next -> next;
    }
    
    // now slow is the mid point
    Node* head1 = mergeSortHelper(splitNodeHead, splitNode);
    Node* head2 =  mergeSortHelper(slow -> next, end);
    // print(start);
    Node* merged = mergeSortedLL(head1, head2);
    // cout << "merged: ";
    // print(merged);
    return merged;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

int main()
{
	int t;
	t = 1;

	while (t--)
	{
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}