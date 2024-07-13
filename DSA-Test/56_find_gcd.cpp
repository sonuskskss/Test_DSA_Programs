//find GCD of A and B

#include <iostream>
using namespace std;
int main()
{
	short a, b, gcd = 1;
	cin >> a >> b;
	
//	for(short i = 1; i <= a; i++)
//	{
//		if(a % i == 0 && b % i == 0) gcd = i;
//	}
//	cout << gcd;
//	



     short i = 1;
     do
     {
     	if(a % i == 0 && b % i == 0) gcd = i;
     	i++;
	 } while(i <= a);
	 
	 cout << gcd;
}
