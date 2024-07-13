//Unique element in Array

#include <iostream>
using namespace std;

int main()
{
	int array[] = {1};
	int size = sizeof(array) / sizeof(array[0]);
	int unique = 0;
	
	for(int i = 0; i<size; i++)
	{
		unique = unique ^ array[i];
	}
	
	cout<<"The unique element in this array is: "<<unique;
}
