#include <iostream>
using namespace std;
int main()
{
    short n, m, max = 0, min = 0, sum;
    
    do
    {
        cin >> n >> m;
        if(n <= 0 || m <= 0) break;
        else
        {
        	sum = 0;
            if(n > m) 
            {
                max = n;
                min = m;
            }
            else
            {
                max = m;
                min = n;
            }
            
            while(min <= max)
            {
                cout << min << " ";
                sum = sum + min;
                min++;
            }
        }
        cout << "sum =" << sum;
        
    } while(true);
    
    return 0;
}
