#include<bits/stdc++.h>
using namespace std;
int main()
{
   int size,time;
   cin>>size>>time;

   string s;
   cin>>s;
    while (time--) {
        for (int i = 1; i < size; ++i) {
            if (s[i] == 'G' && s[i-1]=='B'){
                s[i]='B';
                s[i-1]='G';
                i++;

            }
        }
    }
    cout<<s<<endl;
    return 0;
}
