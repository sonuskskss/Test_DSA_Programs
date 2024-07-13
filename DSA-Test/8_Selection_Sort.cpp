//Selection sort

#include <iostream>
using namespace std;

int main()
{
	int array[5] = {-92,-4,0,55,33};
	int n =5;
	
	for (int i = 0; i<n-1; i++){
		int minindex = i;
		
		for (int j = i+1; j<n; j++){
			
			if (array[j] < array[minindex])
			minindex = j;
		}
		swap(array[minindex], array[i]);
	}
	
	for (int i = 0; i<n; i++){
		cout<<array[i]<<" ";
	}
}
