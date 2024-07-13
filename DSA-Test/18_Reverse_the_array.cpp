//Reverse the array

#include <iostream>
using namespace std;

int main()
{
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(array) / sizeof(array[0]);
	int start = 0, end = size-1;
	
	for(int i = 0; i<size-1; i++)
	{
		swap(array[start], array[end]);
		start++;
		end--;
	}
	
	for(int i = 0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
}
