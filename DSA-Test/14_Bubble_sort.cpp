//bubble sort

#include <iostream>
using namespace std;

int main()
{
	int array[5] = {44,2,55,-9};
	
	for(int i = 0; i<5; i++){
		
		for(int j = 0; j<5-1; j++){
			
			if(array[j] > array[j+1]){
				swap(array[j], array[j+1]);
			}
		}
	}
	
	for(int i =0; i<5; i++){
		cout<<array[i]<<" ";
	}
}
