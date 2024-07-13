//Pair of Sum in array

#include <iostream>
using namespace std;

int main(){
	int array[10] = {1,2,3,4,5,0,7,2,9,10};
	int sum = 4;
	
	for(int i =0; i<10; i++){
		
		for(int j = i+1; j<10; j++){
			if(array[i] + array[j] == sum){
				cout<<array[i]<<" " <<array[j]<<endl;
			}
		}
	}
}
