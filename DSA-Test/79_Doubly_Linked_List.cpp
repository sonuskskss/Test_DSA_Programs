// Doubly linked list;

#include <iostream>
using namespace std;


class Node
{
	public:
		
		int data;
		Node *prev;
		Node *next;
		
		//Constructor
		Node(int value)
		{
			data = value;
			prev = NULL;
			next = NULL;
		}
};


void insertAtHead(Node * & head, Node * &tail, int data)
{
	if(head == NULL)
	{
		Node *temp = new Node(data);
		head = temp;
		tail = temp;
		return;
	}
	
	Node *temp = new Node(data);
	
	temp -> next = head;
	head -> prev = temp;
	head = temp; 
}

void insertAtTail(Node * &head, Node * &tail, int data)
{
	if(tail == NULL)
	{
		Node *temp = new Node(data);
		head = temp;
		tail = temp;
		return;
	}
	
	Node *temp = new Node(data);
	
	tail -> next = temp;
	temp -> prev = tail;
	tail = temp;
}


void insertAtPosition(Node * &head, Node * &tail, int position, int data)
{
	if(position == 1)
	{
		insertAtHead(head, tail, data);
		return;
	}
	
	int count = 1;
	Node *temp = head;
	while(count < position - 1)
	{
		temp = temp -> next;
		count++;
	}
	
	if(temp -> next == NULL)
	{
		Node *newNode = new Node(data);
		temp -> next = newNode;
		newNode -> prev = temp;
		tail = temp;
		return;
	}
	
	Node *newNode = new Node(data);
	
	newNode -> next = temp -> next;
	newNode -> prev = temp;
	temp -> next -> prev = newNode;
	temp -> next = newNode;
}


void deleteAtHead(Node * &head)
{
	if(head -> next == NULL)
	{
		head = NULL;
		return;
	}
	
	Node *temp = head -> next;
	head -> next -> prev = NULL;
	head -> next = NULL;
	head = temp;
}



void deleteAtTail(Node * &head, Node * &tail)
{
	Node *temp = head;
	
	if(temp -> next == NULL)
	{
		head = NULL;
		tail = NULL;
		return;
	}
	
	while(temp -> next -> next != NULL)
	{
		temp = temp -> next;
	}
	
	temp -> next -> prev = NULL;
	temp -> next = NULL; 
	tail = temp;
}




void print(Node *head)
{
	while(head != NULL)
	{
		cout << head -> data << " ";
		head = head -> next;
	}
	cout << endl;
}

int main()
{
 	Node *head = NULL;
	Node *tail = NULL;
//	Node *head = new Node(50);
//	Node *tail = head;
//	insertAtHead(head, tail, 40);
//	print(head);
//	
//	insertAtTail(head, tail, 60);
//	print(head);
	
	insertAtTail(head, tail, 5);
	print(head);
	
	insertAtHead(head, tail, 4);
	print(head);
	
    insertAtHead(head, tail, 3);
	print(head);
	
	insertAtHead(head, tail, 2);
	print(head);
	
	insertAtHead(head, tail, 1);
	print(head);
	
	deleteAtHead(head);
	print(head);
	
	
	
	deleteAtTail(head, tail);
	print(head);
	
	deleteAtTail(head, tail);
	print(head);
	
	deleteAtTail(head, tail);
	print(head);
	
////	deleteAtTail(head, tail);
////	print(head);
//	
	
	
}
