//Triplet of sum in array

#include <iostream>
using namespace std;

int main(){
	int array[10] = {0,1,2,3,1,2,0,1,1,0};
	int sum =3;
	
	for(int i =0; i<10; i++){
		
		for(int j = i+1; i<10; j++){
			
			for(int k =j+1; k<10; k++){
				
				if(array[i] + array[j] + array[k] == sum){
			cout<<array[i]<<" "<<array[j]<<" "<<array[k]<<endl;
				}
			}
		}
	}
}
