//reverse the binary bit

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x = 12;
	long sum = 0;
	int i = 31;
	
	while(x != 0)
	{
		int rem = x & 1;
		if(rem == 1)
		{
			sum = sum+ pow(2,i);
		}
		x = x>>1;
		i--;
	}
	
	cout << abs(sum);
}
