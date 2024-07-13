//Bubble sort

#include <iostream>
using namespace std;

int main()
{
	int array[] = {22,5,0,-1,44,22,2,67};
	int size = sizeof(array) / sizeof(array[0]);
	
	for(int i = 0; i<size; i++){
		for(int j = 0; j<size; j++){
			if(array[i] < array[i+1]){
				swap(array[j], array[j+1]);
			}
		}
	}
	
	
	for(int i = 0; i<size; i++){
		cout<<array[i]<<" ";
	}
	cout<<"Good morning Mr. Dipak Rajput";
}
