#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    string s, t;

    cin >> s;
    cin >> t;
    for (int i = 0, j = s.length() - 1; i < s.length(); i++, j--)
    {
        if (s[i] == t[j])
        {
            continue;
        }
        else
        {
            count = 1;
            break;
        }
    }

    if (count == 1){ 
        cout << "NO";}

    else{ 
        cout << "YES";}

    return 0;
}
