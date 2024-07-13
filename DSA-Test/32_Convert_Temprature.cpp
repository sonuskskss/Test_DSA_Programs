//// Convert temprature fahrenheit into celcius.
//
//#include<iostream>
//using namespace std;
//
//int main(){
//	float f;
//	cout << "enter tempreture in fahrenheit:\n";
//	cin >> f;
//	
//	float celsius = (f - 32) * 5/9;
//	cout << "Tempreture in celsius is: " << celsius;
//	
//}




// Convert temprature celcius into fahrenheit.

#include<iostream>
using namespace std;

int main(){
	float c;
	cout << "enter tempreture in celsius:\n";
	cin >> c;
	
	float fahrenheit = (c * 9/5) + 32;
	cout << "Tempreture in celsius is: " << fahrenheit;
	
}









