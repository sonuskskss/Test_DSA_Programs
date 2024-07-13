#include <iostream>
using namespace std;
int main()
{
    int a , b;
    short abc= 0;
    cin >> a >> b;
    
    if(a == 4 && b == 4) 
    {
        cout << a << " " << b;
        abc++;
    }    
    else if(a == 7 && b == 7) 
    {
        cout << a << " " << b;
        abc++;
    }    
    else
    {
        for(int i = a; i <= b; i++)
        {
            
            int temp = i;
            short x = 0;
            while(temp != 0)
            {
                short rem = temp % 10;
                if(rem == 7 || rem == 4) {}
                else x = -1;
                temp = temp / 10;
            }
            if(x == 0)
            {
                cout << i << " ";
                abc++;
            }
        
        }
    }
        
    
    if(abc == 0) cout << -1;
    
    return 0;
}








