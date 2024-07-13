//check giveb number is prime or not.

#include<iostream>
using namespace std;

int main(){
	int num;
	
	cout<< "Enter a number: \n";
    cin >> num;
    int i = 2;
    int temp = 0;
    
    if(num == 0 || num == 1){
    	temp = 1;
	}
	else {
		while(i < num){
			if(num % i == 0){
				temp = 1;
				
			}
			i++;
		}
	}
	
	
	
	if(temp == 0) {
	cout << "Prime number\n";
	}
	
	else {
	cout << "Not a prime number\n";
      }
	
}
