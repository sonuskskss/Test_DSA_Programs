// Storage class
#include <iostream>
using namespace std;
//extern int a;
int main()
{
	extern int b;
	static int i;
	cout << i;
}
