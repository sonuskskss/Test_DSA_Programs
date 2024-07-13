// superior element in array (leader in array)

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[4] = {5,4,3};
	vector<int> ans;
	
	for(int i = 0; i < 3; i++)
	{
		int temp  = 0;
		for(int j = i + 1; j < 3; j++)
		{
			if(arr[i] <= arr[j]) temp = 1;
		}
		
		if(temp == 0)
		{
			ans.push_back(arr[i]);
		}
	}
	

	//ans.push_back(2);
	
	for(int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	
}
