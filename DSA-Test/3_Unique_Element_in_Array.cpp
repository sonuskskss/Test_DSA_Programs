//Find unique element in array

#include <iostream>
using namespace std;

int main(){
	
	int array[9] = {1,2,3,4,4,3,2,1,10};
	int cor = 0;
	
	for(int i = 0; i<9; i++){
		cor = cor ^ array[i];
	}
	cout<<"The unique element is: "<<cor;
}
