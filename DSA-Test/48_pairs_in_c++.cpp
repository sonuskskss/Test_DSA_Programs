// Pairs in c++

#include<iostream>
#include<utility>
using namespace std;
int main()
{
//	pair<int, int> p;
//	p.first = 1;
//	p.second= 2;
//	cout << p.first << endl;
//	cout << p.second << endl;


//
//    pair<char, float> p;
//    p.first = 'D';
//    p.second = 2.44;
//    cout << p.first << endl;
//    cout << p.second << endl;
//



     pair<pair<int, int>, char> p;
     p.first.first = 1;
     p.first.second = 2;
     p.second = 3;
     cout << p.first.first << endl;
     cout << p.first.second << endl;
     cout << p.second << endl;




}
