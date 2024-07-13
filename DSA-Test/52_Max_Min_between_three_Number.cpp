//// max and min between three numbers
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	
//	a = -10, b = 20, c = -5;
//	
////	if(a > b && a > c) cout << "a is grater ";
////	else if(b > a && b > c) cout << "b is grater ";
////	else if(c > a & c > b) cout << "c is grater ";
////	
////	
////	if(a < b && a < c) cout << "a is smaller ";
////	else if(b < a && b < c) cout << "b is smaller ";
////	else if(c < a && c < b) cout << "c is smaller ";
////	
//
//
//}

#include <iostream>
using namespace std;
int main()
{
    long long a, b, c;
    long long min = 0, max = 0;
    
    if(a < b && a < c) min = a;
    else if(b < a && b < c) min = b;
    else if(c < a && c < b) min = c;
    
    if(a > b && a > c) max = a;
    else if(b > a && b > c) max = b;
    else if(c > a && c > b) max = c;
    
    cout << min << " " << max;
    
    return 0;
    
}
