#include <iostream>
using namespace std;
int main()
{
    char ch;
    short n, m;
    cin >> ch >> n;
    
    if(ch == '+')
    {
        short i = 1;
        do
        {
            cin >> m;
            short j = 1;
            do
            {
                cout << ch;
                j++;
            } while(j <= m);
            i++;
        } while(i <= n);
    }
    else if(ch == '-')
    {
        short i = 1;
        do
        {
            cin >> m;
            short j = 1;
            do
            {
                cout << ch;
                j++;
            } while(j <= m);
            i++;
        } while(i <= n);
    }
    else if(ch == '*')
    {
        short i = 1;
        do
        {
            cin >> m;
            short j = 1;
            do
            {
                cout << ch;
                j++;
            } while(j <= m);
            i++;
        } while(i <= n);
    }
    else if(ch == '/')
    {
        short i = 1;
        do
        {
            cin >> m;
            short j = 1;
            do
            {
                cout << ch;
                j++;
            } while(j <= m);
            i++;
        } while(i <= n);
    }
    
    
    return 0;
}
