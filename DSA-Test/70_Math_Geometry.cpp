#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;


int main()
{
	int n = 28;
	
	for(int i = 2; i <= n; i++)
	{
		if(n % i == 0)
		{
			int x = i, temp = 0;
			for(int j = 2; j <= sqrt(x); j++)
			{
				if(x % j == 0)
				{
					temp = 1;
					break;
				}
			}
			
			if(temp == 0) cout << i << " ";
		}
	}
}
