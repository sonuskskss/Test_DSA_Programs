//Maximum and minimum element in array

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int array[] = {2,-8,55,32,444,33};
//	int size = sizeof(array) / sizeof(array[0]);
//	int max = INT_MIN;
//	
//	for(int i = 0; i<size; i++){
//		if(array[i] > max){
//		max = array[i];
//	}
//	}
//	
//	cout<<"The maximum element is: "<<max;
//	
//	return 0;
//}




//Minimum element 

#include <iostream>
using namespace std;

int main()
{
	
	int array[] = {3,66,8,2,0,2,-3};
	int size  = sizeof(array) / sizeof(array[0]);
	int min = INT_MAX;
	
	for(int i = 0; i<size; i++){
		
		if(array[i] < min)
		min = array[i];
	}
	
	cout<<"The minum element is: "<<min;
}










