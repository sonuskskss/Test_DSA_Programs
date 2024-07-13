#include <iostream>
using namespace std;

int count = 1;
void fun(int n)
{
	if(n == 1) return;
	count++;
	if(n % 2 == 0) n = n / 2;
	else n = 3 * n + 1;
	
	fun(n);
}
int main()
{
	fun(0);
	cout << count;
	
	return 0;
}
