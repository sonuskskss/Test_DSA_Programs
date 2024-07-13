// Range sum query

#include <iostream>
using namespace std;
int main()
{
	int n, q;
	cin >> n >> q;
	int arr1[n], arr2[n];
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> arr1[i];
		sum = sum + arr1[i];
		arr2[i] = sum;
	}
	
	for(int i = 0; i < q; i++)
	{
		int l, r;
		cin >> l >> r;
		if(l == 1) cout << arr2[r - 1] << endl;
		else
		{
			
		int sum1 = arr2[r - 1] - arr2[l  - 2];
		cout << sum1 << endl;
			
		}
	}
}
