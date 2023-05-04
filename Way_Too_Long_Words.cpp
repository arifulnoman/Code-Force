#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    string temp;
    cin >> t;
    for(i = 0;i < t;i++)
    {
        cin >> temp;
        int length = temp.size();
        if(length > 10)
        {
            cout << temp[0] << length - 2 << temp[length - 1] << endl;
        }
        else
        {
            cout << temp << endl;
        }

    }
    return 0;
}