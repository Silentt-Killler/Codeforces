#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    string s;
    set<char>S;
    cin>>s;

    for(int i=0; i<len; i++)
    {
        s[i]= tolower(s[i]);
        S.insert(s[i]);
    }
    if(S.size()==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
