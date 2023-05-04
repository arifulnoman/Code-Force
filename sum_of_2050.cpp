#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,number,ans;
    cin >> t;
    for(i = 0;i < t;i++)
    {
        cin >> n;
        ans = 0;
        while(n >= 2050)
        {
            number = 2050;
            while(number <= n)
            {
                number = number * 10;
            }
            number  = number / 10;
            n = n - number;
            ans++;
        }
        if(n != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}