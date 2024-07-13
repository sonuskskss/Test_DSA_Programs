/* Find tripletes with given sum

you are given an array list 'ARR' consisting of 'N' integers, your task is to find all the distinct triplets present in the array
which adds up to a given number 'K'

*/

#include<iostream> 
#include<vector>
using namespace std;
int main()
{
	int arr[13] = {2,0,3,-5,11,7,-6,1,10,0,13,17,1}, K = 5;
	vector<int> v;
	for(int i = 0; i<13; i++)
	{
		for(int j = i+1; j<13; j++)
		{
			for(int k = j+1; k<13; k++)
			{
				if( (arr[i]+arr[j]+arr[k] == K) && (arr[i] != arr[j] && arr[j] != arr[k] && arr[k] != arr[i]))
				{
					//vector<int> temp = {arr[i], arr[j], arr[k]};
					v.push_back(arr[i]);
					v.push_back(arr[j]);
					v.push_back(arr[k]);
				//	v.push_back(temp);
				}
			}
		}
	}
	
	for(int i = 0; i<v.size(); i++)
	{
		cout << v[i] << " ";
	}
}
