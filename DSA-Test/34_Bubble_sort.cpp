//Bubble sort algorithm

#include<iostream>
using namespace std;
int main(){
	int array[] = { 93,3,0,22,54,9,4,5,3,3};
	int size = sizeof(array) / sizeof(array[0]);
	
	for(int i = 0; i<size; i++){
		for(int j = 0; j<size; j++){
			if(array[j] > array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i<size; i++){
		cout << array[i] << " ";
	}
}
