//Merge two sorted array

#include <iostream>
using namespace std;

int main()
{
	int array1[5] = {1,2,3,4,5}, array2[5] = {1,4,4,55,77}, array3[10];
	int i = 0, j = 0, k = 0;
	
	
	while(i<5 && j<5){
		
		if(array1[i]<array2[j]){
		 
		 array3[k] = array1[i];
		 i++;
		 k++;
		}else{
		 
		 array3[k] = array2[j];
		 j++;
		 k++;
		}
	}
	
	while(i<5){
		array3[k] = array1[i];
		i++;
		k++;
	}
	
	while(j<5){
		
		array3[k] = array2[j];
		j++;
		k++;
	}
	
	
	for(int i = 0; i<10; i++){
		cout<<array3[i] << " ";
	}
}
