//Move zero

#include <iostream>
using namespace std;

int main(){
	
	int array[10]  = {0,1,2,0,0,5,0,33,0,99};
	int s =0;
	 
	 for(int i =0; i<10; i++){
	 	if(array[i] ==0){
	 		swap(s,array[i]);
	 		s++;
		 }
		 s++;
	 }
	 
	 for(int i =0; i<10; i++){
	 	cout<<array[i]<<" ";
	 }
}
