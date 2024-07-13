// vector in c++;

#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int> v;
	
	cout << "Enitial size is: " << v.size() << endl;
	
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.erase(v.end()-2);
	
	cout << v[0] << endl;
	cout << v[1] << endl;
	cout << v[2] << endl;
	cout << v[3] << endl;
}
