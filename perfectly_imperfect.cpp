#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,flag;
    cin >> t;
    for(i = 0;i < t;i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        flag = 0;
        for(j = 0;j < n;j++)
        {
            cin >> a[j];
        }
        for(j = 0;j < n;j++)
        {
            int result = sqrt(a[j]);
            if(result * result != a[j])
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            }
        }
        if(flag == 0)
        {
            cout << "NO" << endl;
        }
    }
}