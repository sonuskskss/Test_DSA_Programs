//Find unique elemtnt in an arrya
#include<iostream>
using namespace std;
int main()
{
	int unique = 0;
	int array[7] = { 1,3,66,8,3,1,66};
	for(int i = 0; i<7; i++){
		unique = unique^array[i]; 
	}
	
	cout << "The unique element is: " << unique;
}
