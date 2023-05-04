#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin >> t;
    for(i = 0;i < t;i++)
    {
        int l,r;
        cin >> l >> r;
        int luckiness = 0;
        int result;
        for(int j = l;j <= r;j++)
        {
            int number = j;
            int max = 0,min = 9;
            while(number != 0)
            {
                int digit = number % 10;
                if(digit < min)
                {
                    min = digit;
                }
                if(digit > max)
                {
                    max = digit;
                }
                number = number/10;
            }
            if((max - min) >= luckiness)
            {
                luckiness = max - min;
                result = j;
            }
        }
        cout << result << endl;
    }
    return 0;
}