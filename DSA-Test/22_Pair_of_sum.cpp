//Pair of sum

#include <iostream>
using namespace std;

int main()
{
	int array[] = {0,1,1,0,2,3,4,3,6};
	int size = sizeof(array) / sizeof(array[0]);
	int sum = 3;
	
	for(int i = 0; i<size; i++)
	{
		for(int j = i+1; j<size; j++)
		{
			if(array[i] + array[j] == sum)
			{
				cout<<array[i] <<" "<<array[j]<<endl;
			}
		}
	}
}
