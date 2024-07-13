//Swap Two element of array with given index

#include <iostream>
using namespace std;

int main(){
	
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int start_ind, end_ind;
	cout<<"Enter the index that you want to swap";
	cout<<endl;
	cin>>start_ind>>end_ind;
	
	int temp = array[start_ind];
	array[start_ind] = array[end_ind];
	array[end_ind] = temp;
	
	for(int i =0; i<10; i++){
		cout<<array[i]<<" ";
	}
}
