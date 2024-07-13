/* Find power of any number

like  4 to the power 3 = 64
like 3 to the power 4 = 81

*/

#include<iostream>
using namespace std;
int main()
{
	int n, power;
	cout << "Enter n" << endl;
	cin >> n;
	cout << "Enter power number" << endl;
	cin >> power;
	int poweris = 1;
	
	for(int i = 1; i<= power; i++)
	{
		poweris = poweris*n;
	}
	
	cout << poweris;
 } 
 
 
 
