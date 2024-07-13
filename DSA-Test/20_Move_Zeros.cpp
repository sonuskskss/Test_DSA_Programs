//Move Zeros

#include <iostream>
using namespace std;

int main()
{
	int array[] = {1,2,0,4,4,0,0,-5,8,0};
	int size = sizeof(array) / sizeof(array[0]);
	int start = 0;
	for(int i = 0; i<size; i++)
	{
		if(array[i] != 0){
			swap(array[start], array[i]);
			start++;
		}
	}
	
	for(int i = 0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
}
