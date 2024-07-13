#include <iostream>
using namespace std;

int main(){
	
	int i = 2, temp = 0, n;
	cout << "Enter a positive number: \n";
	cin >> n;
	
	if(n <=1){
		temp = 1;
	}else{
		while(i < n){
			
			if(n % i == 0){
				temp = 1;
				break;
			}i++;
		}
	}
	
	
	if(temp == 0){
		cout << "The number is prime";
	}else{
		cout << "The number is not prime";
	}
}
