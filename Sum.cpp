#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b,c,flag;
    cin >> t;
    for(i = 0;i < t;i++)
    {
        cin >> a >> b >> c;
        flag = 0;
        if(a + b == c || b + c == a || c + a == b)
        {
            flag = 1;
        }
        if(flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}