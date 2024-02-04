#include <iostream>

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

using namespace std;

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

Node *reverseLinkedListRec(Node *head)
{
    if (head == NULL)
		return head;
    
    if (head -> next == NULL)
        return head;

	Node *tail = head;
	Node *tailBefore = head;
	while (true) {
        if (tailBefore -> next == NULL) break;
		if (tailBefore -> next -> next == NULL) break;
		tailBefore = tailBefore -> next;
	}
	tail = tailBefore -> next;
	Node *newhead = new Node(tail -> data);
	tailBefore -> next = NULL;
	Node *nextNode = reverseLinkedListRec(head);
	newhead -> next = nextNode;
	return newhead;
}

int main()
{
	int t;
    t = 1;
	// cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListRec(head);
		print(head);
	}

	return 0;
}