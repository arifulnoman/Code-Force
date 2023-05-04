#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mini,maxi,t,r,b,d,total;
    cin >> t;
    while(t > 0)
    {
        cin >> r >> b >> d;
        mini = min(r,b);
        maxi = max(r,b);
        total = mini * (d + 1);
        if(total >= maxi)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
    return 0;
}