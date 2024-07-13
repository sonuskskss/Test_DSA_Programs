// Check palindrome number

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number\n";
	cin >> n;
	int sum = 0;
	int temp = n;
	
	while(n!=0)
	{
		int rem = n%10;
		sum =  (sum*10)+rem;
		n = n/10;
	}
	
	if(temp == sum) cout << "The number " << sum << " is palindrome";
	else cout << "The number " << sum << " is not palindrome"; 

}
