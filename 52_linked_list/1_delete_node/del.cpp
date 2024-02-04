#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
#include<algorithm>
// #include<bits/stdc++.h>
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

// #include "solution.h"

Node *deleteNode(Node *head, int pos)
{
    // 3 4 5 2 6 1 9
	if (head == NULL)
		return head;
	Node *temp = head;
	while (temp != NULL && --pos) {
		temp = temp -> next;
	}
	cout << temp -> data << endl;
	// address of next to next element
	if (temp -> next != NULL)
		temp -> next = (temp -> next) -> next;
	cout << temp -> data << endl;
	return head;
}

class Runner
{
    int pos;
    Node *head = NULL;
public:
    
    void takeInput()
    {
        int data;
        cin >> data;
        Node *tail = NULL;
        while (data != -1)
        {
            Node *newNode = new Node(data);
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
            cin >> data;
        }
		cin >> pos;
    }
    Node * copyll(Node *chead)
    {
        if(chead == NULL)return NULL;
        Node *nhead= NULL;

        Node *tail = NULL;
        while (chead != NULL)
        {
            Node *newNode = new Node(chead->data);
            if (nhead == NULL)
            {
                nhead = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
            chead=chead->next;
        }
        return nhead;
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
    void execute()
    {
        Node *copyhead = copyll(head);
        copyhead = deleteNode(copyhead, pos);
        while(copyhead!=NULL)
        {
            Node* temp=copyhead;
            copyhead=copyhead->next;
            delete temp;
        }
    }
    void executeAndPrintOutput()
    {
        Node *copyhead = copyll(head);
        copyhead = deleteNode(copyhead, pos);
		print(copyhead);
        while(copyhead!=NULL)
        {
            Node* temp=copyhead;
            copyhead=copyhead->next;
            delete temp;
        }
    }
};


int main()
{   
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();   
    return 0;
}