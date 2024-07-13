// Gcd and lcm
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a = 18, b = 12;
	int gcd = 1;
	for(int i = 1; i <= a; i++)
	{
		if(a % i == 0 && b % i == 0) gcd = i;
	}
	
	cout << gcd << "  " << (a * b) / gcd;
}
