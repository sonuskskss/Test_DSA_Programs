// Selection sort

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int arr[] = {2,3,55,2,0};
	short n = 5;
	
	for(short i = 0; i < n; i++)
	{
		int mInd = i, mVal = arr[i];
		for(short j = i; j < n; j++)
		{
			if(mVal > arr[j]) 
			{
				mVal = arr[j];
				mInd = j;
			}
		}
		swap(arr[i], arr[mInd]);
	}
	
	int arr2[5] = {0,1,2,3,4};
	int a = 2, b = 4;
	swap(a,b);
	for(short i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	//cout << " a is: " << a << " b is: " << b;
	
} 
