// Queue using linked list

#include <iostream>
using namespace std;

class LinkedList
{
	public:
		
		int data;
		int size = 0;
		LinkedList *next;
		
		LinkedList(int value)
		{
			data = value;
			size = 1;
			next = NULL;
		}
};


void push(LinkedList * &head, LinkedList * &tail, int data)
{
	if(head == NULL)
	{
		LinkedList *temp = new LinkedList(data);
		head = temp;
		tail = temp;
		return;
	}
	
	LinkedList *temp = new LinkedList(data);
	temp -> size = temp -> size + tail -> size;
	tail -> next = temp;
	tail = temp;
	tail -> size = tail -> size++;
}

void pop(LinkedList * &head)
{
	if(head == NULL) 
	{
		cout << "Queue is null" << endl;
		return;
	}
	
	head = head -> next;
}


int top(LinkedList * &head)
{
	if(head == NULL) return -1;
	return head -> data;
}

bool isEmpty(LinkedList * &head)
{
	if(head == NULL) return 1;
	return 0;
}

//int size(LinkedList * &head)
//{
//	int count = 0;
//	LinkedList *temp = head;
//	while(temp != NULL)
//	{
//		count++;
//		temp = temp -> next;
//	}
//	
//	return count;
//}

int main()
{
	LinkedList *head = new LinkedList(10);
	LinkedList *tail = head;
	cout << "Size: " << tail -> size << endl;
	
	//cout << size(head) << endl;
	cout << head -> data << "  " << head -> next << endl;
	cout << isEmpty(head) << endl;
	cout << top(head) << endl;
	cout << "-------------------------------------------" << endl;
	
	cout << "size is: " << tail -> size << endl;
	//cout << "The size is: " << size(head) << endl;
	push(head, tail, 20);
	
	cout << "size is: " << tail -> size << endl;
	push(head, tail, 30);
	
	
	cout << "size is: " << tail -> size << endl;
	//cout << " The size is: " << size(head) << endl;
	cout << top(head) << endl;
	pop(head);
	cout << top(head) << endl;
	pop(head);
	cout << top(head) << endl;
	pop(head);
	cout << top(head) << endl;
}




























