// print all divisor of N.

#include <iostream>
using namespace std;
int main()
{
	short n;
	cin >> n;
	
//	for(short i = 1; i <= n; i++)
//	{
//		if(n % i == 0) cout << i << endl;
//	}



//    short i = 1;
//    while(i <= n)
//    {
//    	if(n % i == 0) cout << i << endl;
//    	i++;
//	}



     short i = 1;
     do
	 {
	 	if(n % i == 0)
	 	{
	 		cout << i << endl;
		 }
		 i++;
	 } while(i <= n);
}
