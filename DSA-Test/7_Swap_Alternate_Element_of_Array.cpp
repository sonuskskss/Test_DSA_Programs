//Swap alternate elements of an array

#include <iostream>
using namespace std;

int main(){
	
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
//	int start = 0, end = 10-1;
	
	for(int i = 0; i<9; i+=2){
		int temp = array[i];
		array[i] = array[i+1];
		array[i+1] = temp;
	
	}
	
	for(int i = 0; i<10; i++){
		cout<<array[i]<<" ";
	}
}
