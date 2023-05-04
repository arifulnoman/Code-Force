#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s.size() < 7)
    {
        cout << "NO" << endl;
        return 0;
    }
    int i,j;
    for(i = 0;i <= s.size() - 7;i++)
    {
        int count = 0;
        for(j = i;j < s.size();j++)
        {
            if(s[i] == s[j])
            {
                count++;
                if(count == 7)
                {
                    cout << "YES" << endl;
                    exit(0);
                }
            }
            else
            {
                break;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}