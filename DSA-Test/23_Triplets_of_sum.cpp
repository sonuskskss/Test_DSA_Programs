//Triplet of sum

#include <iostream>
using namespace std;

int main()
{
	int array[] = {1,2,3,4,5,6,7,8,2,3,5,7,4,23,3,2,2,1,0,0};
	int size = sizeof(array) / sizeof(array[0]);
	int sum = 6;
	
	for(int i = 0; i<size; i++)
	{
		for(int j = i+1; j<size; j++)
		{
			for(int k = j+1; k<size; k++)
			{
				if(array[i] + array[j] + array[k] == sum){
					cout<<array[i]<<" "<<array[j]<<" "<<array[k]<<endl;
				}
			}
		}
	}
}
