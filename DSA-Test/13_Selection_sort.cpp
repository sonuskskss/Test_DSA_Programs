//Selection sort

#include <iostream>
using namespace std;

int main()
{
	int array[5] = {2,1,-55,0,222};
	
	for(int i = 0; i<5; i++){
		
		int minindex = i;
		
		for(int j = i+1; j<5; j++){
			
			if(array[j] < array[minindex])
			{
				minindex = j;
			}
		}
		swap(array[minindex], array[i]);
	}
	
	for(int i = 0; i<5; i++){
		cout<<array[i]<<" ";
	}
}
