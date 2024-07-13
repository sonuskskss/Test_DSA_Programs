/*Test programs

4 3 2 1
4 3 2 1
4 3 2 1


*/

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//    cout << "Enter a number\n";
//    cin >> n;
//    
//    for(int i = 1; i<=n; i++)
//    {
//    	for(int j = 1; j<=n; j++)
//    	{
//    		cout << n-j+1 << " ";
//		}
//		cout << endl;
//	}
//	
//}



/* Test  programs
4 5 6 7
4 5 6 7
4 5 6 7

*/

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "Enter a number\n";
//	cin >> n;
//	
//	for(int i = 1; i<=n; i++)
//	{
//		for(int j = 1; j<=n; j++)
//		{
//			cout << n+j-1;
//		}
//		cout << endl;
//	}
//}



/* Test Program
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
*/

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "Enter anumber\n";
//	cin >> n;
//	
//	for(int i = 1; i<=n; i++)
//	{
//		for(int j = 1; j<=n; j++)
//		{
//			cout << i+j-1;
//		}
//		cout << endl;
//	}
//}





/* Test programs

A B C D E
B C D E F
C D E F G
D E F G H
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number\n";
	cin >> n;
	
	for (int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=n; j++)
		{
			char ch = 'A'+i+j-2;
			cout << ch << " ";
		}
		cout << endl;
	}
}













