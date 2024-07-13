//Reverse the array

#include <iostream>
using namespace std;

int main(){
	int array[10] = {1,2,3,45,6,7,8,9,10};
	int start = 0, end = 10-1;
	
	while(start<end){
		int temp = array[start];
	    array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
		
	}
	
	for(int i =0; i<10; i++){
		cout<<array[i]<<" ";
	}
}
