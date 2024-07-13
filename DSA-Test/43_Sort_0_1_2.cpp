// sort 0,1 and 2

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	
	int arr[] = {0,1,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int low = 0, mid = 0, high = n-1;
	
	for(int j = 0; j<n; j++)
	{
		if(arr[mid] == 0)
		{
			swap(arr[mid], arr[low]);
			mid++;
			low++;
		}
		else if(arr[mid] == 1) mid++;
		
		else
		{
			swap(arr[mid], arr[high]);
			high--;
		}
	
	}
	
	
	vector<int> ans;
	
	ans.push_back(12);
	ans.push_back(17);
	ans.push_back(1);
	ans.push_back(55);
	ans.push_back(100);
	sort(ans.begin(), ans.end());
	
	 
	for(int i = 0; i<ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
}
