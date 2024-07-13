// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void mergesort(int arr[], int l, int h)
{
	if(l >= h) return;
	int mid = (l + h) / 2;
	mergesort(arr, l, mid);
	mergesort(arr, mid + 1, h);
	merge()
}
int main() {
    
    int arr[] = {11,2,4,66,0,33,766,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    mergesort(arr, 0, n - 1);
    

    return 0;
}
