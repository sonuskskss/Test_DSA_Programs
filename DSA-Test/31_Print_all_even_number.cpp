//Print all even number till n

//#include<iostream>
//using namespace std;
//
//int main(){
//	
//	int n;
//	cout << "enter any number \n";
//	cin >> n;
//	int i = 2;
//	int sum = 0;
//	
//	while(i <= n){
//		sum = sum+i;
//		i +=2;
//	}
//	
//	
//	cout << "The sum of all even number is: " << sum;
//}






#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout << "enter any number \n";
	cin >> n;
	int i = 1;
	int sum = 0;
	
	while(i <= n){
		
		if(i % 2 == 0) sum = sum + i;
		i++;
	}
	
	
	cout << "The sum of all even number is: " << sum;
}













