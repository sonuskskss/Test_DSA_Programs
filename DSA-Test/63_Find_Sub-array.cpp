// Find sub-array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int arr[] = {1,2,3};
	int n = 3;
	
	for(short i = 0; i < n; i++)
	{
	    vector<int> v;
	    v.push_back(arr[i]);
	    cout << arr[i] << " ";
	    
	    for(short j = i + 1; j < n; j++)
	    {
	    	v.push_back(arr[j]);
	    	cout << arr[j] << " ";
		}
	}
}
