// Stack using Array

#include <iostream>
using namespace std;

class Stack
{
	public:
		
	int size;
	int *arr;
	int top;
	
	Stack(int s)
	{
		size = s;
		arr = new int(size);
		top = -1;
	}
	
	void push(int n)
	{
		if(top < size - 1)
		{
			top++;
			arr[top] = n;
			return;
		}
		
		cout << "Stack is overFlow" << endl;
		
		return;
	}
	
	void pop()
	{
		if(top != -1)
		{
			top--;
			return;
		}
		
		cout << "Stack is underFlow" << endl;
		
		return;
	}
	
	
	
    int peak()
    {
    	if(top == -1)
    	{
    		cout << "Stack is empty" << endl;
    		return -1;
		}
		
		return arr[top];
	}
	
	bool isEmpty()
	{
		if(top == -1) return true;
		
		return false;
	}
	
	
};

// This is for testin porpus
//int test() 
//{
//	return 1;
//}

int main()
{
	Stack st(5);
	
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	
	cout << st.isEmpty() << endl;
	cout << st.peak() << endl;
	
	st.pop();
	cout << st.peak() << endl;
	st.pop();
	cout << st.peak() << endl;
	cout << st.isEmpty() << endl;
	
	st.pop();
	cout << st.peak();
	
	st.pop();
	cout << st.peak() << endl;
	
	
}
