//Find maximum number in array
// https://movierulzhd.rocks
# include<iostream>
using namespace std;

int main(){
	cout<<"Good morning Dipak Don ";
	int array[10] {1,2,5,2,6,8,9,4,-44,9};
	int max = INT_MIN;
	
	for(int i =0; i<10; i++){
		if(max < array[i])
		max = array[i];
	}
	
	cout<<endl<<"The maximum number is: "<<max;
	return 0;
}


//
////Find minimun number in array
//# include<iostream>
//using namespace std;
//
//int main(){
//	cout<<"Good morning Dipak Don";
//	int array[10] {1,2,5,2,6,8,9,4,-44,9};
//	int min = INT_MAX;
//	
//	for(int i =0; i<10; i++){
//		if(min > array[i]){
//			min = array[i];
//		}
//	}
//	
//	cout<<endl<<"The minimum number is: "<<min;
//
//
//	return 0;
//}
