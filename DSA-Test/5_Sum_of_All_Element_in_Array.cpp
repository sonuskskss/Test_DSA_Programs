#include <iostream>
using namespace std;

int main()
{
	
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	
	for(int i = 0; i<10; i++){
		sum = sum + array[i];
	}
	
	cout<<"The sum of all elements of array is: "<<sum;
	
	string name;
	cin>>name;
	cout<<endl<<name;
	return 0;
}
