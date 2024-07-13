//Reverse the array
#include<iostream>
using namespace std;
int main()
{
	int array[] = {1,2,3,4,5,6,7,8,9,10,11};
	int size = sizeof(array) / sizeof(array[0]);
	
	int i = 0, j = size-1;
	
	while(i<j){
		swap(array[i], array[j]);
		//int temp = array[i];
		//array[i] = array[j];
		//array[j] = temp;
		i++;
		j--;
	}
	
	for(int i = 0; i<size; i++){
		cout << array[i] << " ";
	}
}
