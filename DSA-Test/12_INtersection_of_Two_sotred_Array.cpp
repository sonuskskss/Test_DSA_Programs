//Intersection of two sorted array

#include <iostream>
using namespace std;

int main()
{
	int array1[5] = {1,2,3,4,5}, array2[5] = { 0, 1,3,5,33};
	int i = 0, j = 0;
	while(i<5 && j<5){
		
		if(array1[i] == array2[j]){
			cout<<array1[i]<<" "<<endl;	
			i++; j++;	
	}else if(array1[i] < array2[j]){
		i++;
	}else j++;
	
}


}
