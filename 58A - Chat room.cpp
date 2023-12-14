#include <bits/stdc++.h>

using namespace std;

int main(){

    int count=0,check;
    string s,find;
    cin>>s;

    find="hello";
    check=s.length();

    for (int i = 0; i < check; i++) {
        if(s[i]==find[count]){
            count++;
        }
    }

    if(count==find.length()){
        printf("YES");
    } else printf("NO");
}
