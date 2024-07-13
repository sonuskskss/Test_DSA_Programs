// Deletion of linked list

#include <iostream>
#include <stdlib.h>
using namespace std;

class Node
{
	public:
		
	int value;
	Node *next;
	
	Node(int data)
	{
		value = data;
		next = NULL;
	}
};

void insertAtHead(Node * &head, int data)
{
	Node *temp = new Node(data);
	temp -> next = head;
	head = temp;
}


void print(Node * &head)
{
	Node *temp = head;
	
	while(temp != NULL)
	{
		cout << temp -> value << " ";
		temp = temp -> next;
	}
}

void deleteNode(Node * &head, int position)
{
	if(position == 1)
	{
		Node *temp = head;
		head = head -> next;
		free(temp);
	}
	else
	{
		Node *pre = NULL;
		Node *curr = head;
		int count = 1;
		
		while(count < position)
		{
			pre = curr;
			curr = curr -> next;
			count++;
		}
		
		pre -> next = curr -> next;
		free(curr);
	}
}

int main()
{
	
	Node *head = new Node(100);
	insertAtHead(head, 50);
	insertAtHead(head, 25);
	insertAtHead(head, 10);
	insertAtHead(head, 5);
	insertAtHead(head, 2);
	insertAtHead(head, 1);
	
//	deleteAtHead(head);
//	deleteAtHead(head);
//	deleteAtHead(head);
//	deleteAtHead(head);
    print(head);
    cout << endl;
    
    deleteNode(head, 5);
	print(head);
	
}








