// Consecutive odd numbers

#include <iostream>
using namespace std;
int main()
{
    short n, x, y, min, max, i = 1;
    cin >> n;
    
    while(i <= n)
    {
        cin >> x >> y;
        short sum = 0;
        if(x > y)
		{
			max = x;
			min = y;
		}
        else
        {
            max = y;
            min = x;
        }
        
        while(min + 1 < max)
        {
            if(min % 2 != 0) sum = sum + min;
            min++;
        }
        
        cout << sum << endl;
        i++;
    }
    
    
    return 0;
}
