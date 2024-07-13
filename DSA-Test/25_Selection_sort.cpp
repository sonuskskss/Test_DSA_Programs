//Selection sort

#include <iostream>
using namespace std;

int main()
{
	int array[] = {2,-8,4,45,111,43,0,66,-88,0,4};
	int size = sizeof(array) / sizeof(array[0]);
	
	for(int i = 0; i<size-1; i++){
		int minindex = i;
		
		for(int j = i+1; j<size; j++)
		{
			if(array[minindex] > array[j]){
				minindex = j;
			}
		}
		
		swap(array[minindex], array[i]);
	}
	
	for(int i = 0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
}
