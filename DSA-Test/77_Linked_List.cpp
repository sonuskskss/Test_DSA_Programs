// Linked list

#include <iostream>
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
	// create new node
	Node *temp = new Node(data);
	
	// add new node to the head
	temp -> next = head;
	head = temp;
}



void insertAtTail(Node * &tail, int data)
{
	Node *tem = new Node(data);
	tail -> next = tem;
	tail = tem;
}



void insertAtPosition(Node * &head, Node * &tail, int position, int data)
{
	Node *temp = head;
	int current = 1;
	
	if(position == 1)
	{
		insertAtHead(head, data);
		return;
	}
	
	while(current < position - 1)
	{
		temp = temp -> next;
		current++;
	}
	
	
	if(temp -> next == NULL)
	{
		insertAtTail(tail, data);
		return;
	}
	
	Node *newNode = new Node(data);
	newNode -> next = temp -> next;
	temp -> next = newNode;
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


int main()
{
	
	
	Node *head = NULL;
	Node *tail = head;
	insertAtHead(head, 20);
	

	


	
	
}












