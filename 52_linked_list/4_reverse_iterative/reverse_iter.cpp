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

Node *reverseLinkedList(Node *head)
{
    if (head == NULL)
        return head;
    
    if (head -> next == NULL)
        return head;
    
    Node *prev = NULL;
    Node *curr = head;
    Node *next = head -> next;

    while (curr != NULL) {
        curr -> next = prev;

        prev = curr;
        curr = next;
        if (next != NULL)
            next = next -> next;
        
    }

    return prev;
}

int main()
{
	int t;
    t = 1;
	// cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedList(head);
		print(head);
	}

	return 0;
}