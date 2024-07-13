// Stack using linked list

#include <iostream>
#include <stdlib.h>
using namespace std;

class Stack
{
	public:
		int data;
		int siz = 0;
		Stack *next;
		
		Stack(int num)
		{
			data = num;
			siz = 1;
			next = NULL;
		}
};

void push(Stack * &top, int data)
{
//	if(top == NULL)
//	{
//	Stack *temp = new Stack(data);
//	top -> siz = 1;
//	temp -> next = top;
//	top = temp;
//	return;
//	}
	Stack *temp = new Stack(data);
	top -> siz = top -> siz + 1;
	temp -> next = top;
	top = temp;
}

void pop(Stack * &top)
{
	if(top == NULL)
	{
		cout << "Stack underFlow" << endl;
		return;
	}
	
	Stack *temp = top;
	top -> siz = top -> siz--;
	top = top -> next;
	free(temp);
}

int peek(Stack * &top)
{
	if(top == NULL)
	{
		cout << "Stack is NULL" << endl;
		return -1;
	}
	
	return top -> data;
}

bool isEmpty(Stack * &top)
{
	if(top == NULL) return 1;
	
	return 0;
}

int sizz(Stack * &top)
{
	if(top == NULL) return 0;
	
	return top -> siz;
}
//int size(Stack *top)
//{
//	if(top == NULL) return 0;
//	
//	return top -> size;
//}

int main()
{
	Stack *top = new Stack(4);
	cout << sizz(top) << endl;
	//if(top != NULL) cout << top -> data << endl;
	
	push(top, 10);
	cout << top -> data << endl;
	push(top, 20);
	cout << top -> data << endl;
	push(top, 30);
	cout << "Size is: " << sizz(top) << endl;
	cout << top -> data << endl;
	
	cout << isEmpty(top) << endl;
	cout << "----------------------------------" << endl;
	
	pop(top);
	cout << top -> data << endl;
	pop(top);
	cout << isEmpty(top) << endl;
	cout << top -> data << endl;
	cout << "-----------------------------" << endl;
	
	cout << peek(top) << endl;
	pop(top);
	cout << peek(top) << endl;
	
	cout << isEmpty(top) << endl;

	
	
	
	
	
	
	
	
	
	
	
	
}
