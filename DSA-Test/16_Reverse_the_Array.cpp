//Revers an Array

#include <iostream>
using namespace std;

int main()

{
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	int s = 0, e = 9;
	
	for(int i =0; i<10; i++){
		swap(array[s], array[e]);
		s++;
		e--;
	}
	
	for(int i = 0; i<10; i++){
		cout<<array[i]<<" ";
	}
}
