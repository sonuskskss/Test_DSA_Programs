//String in c++

#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
//	//string s = "Dipak \nRajput";
//	//cout << s;
//	
//	string name = "Dipak ";
//	string cast = "rajput";
//	string full_name = name+cast;
//	cout << full_name;

int arr[5] = {4,5,1,2,1};
//sort(arr, arr+5);
for(int i = 0;  i < 5; i++)
{
//	cout << arr[i] << " ";
}
//cout << accumulate(arr, arr+5,0);
//cout << count(arr, arr+5, 1);
//int *it = find(arr, arr+5,2);
//cout << *it;
int *it = min_element(arr, arr+5) ;
cout << *it;

int count = std::count(std::begin(arr), std::end(arr), 2);
}
