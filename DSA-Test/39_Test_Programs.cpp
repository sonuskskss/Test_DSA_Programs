//Test programs


#include<iostream>
#include<vector>
#include<math.h>
#include<limits.h>
using namespace std;

 void fun(vector<int> a)
 {
 	a[0] = 11111;
 }
 
 void funn(int arr[])
 {
 	arr[0] = 5050;
 }
int main()
{
	int arr[4] = { 1,2,3,4};
	


funn(arr);
cout << arr[0];

   vector<int> v;
   v.push_back(1);
   
   v.push_back(2);
   v.push_back(3);
   
   fun(v);
   
//   cout << v[0];


}


