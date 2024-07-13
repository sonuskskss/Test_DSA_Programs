// Pairs

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	
	vector<int> :: iterator i = v.begin(), j = v.end();
	vector<int> :: iterator it1 = next(i, 1);
	cout << *it1 << endl;
	vector<int> :: iterator it2 = prev(j, 1);
	cout << *it2 << endl;
	 
	return 0;
}
