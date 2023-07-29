#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> v (n);
 
    for ( int i = 0; i < n; i++ ) cin >> v[i];
 
    int siraj = 0, dima = 0, flag = 1;
 
    while ( !v.empty() ) {
        if ( flag == 1 ) {
            if ( v[0] > v.back() ) {
                siraj += v[0];
                v.erase( v.begin() );
            }
            else {
                siraj += v.back();
                v.pop_back();
            }
 
            flag = 2;
        }
 
        else {
            if ( v[0] > v.back() ) {
                dima += v[0];
                v.erase( v.begin() );
            }
            else {
                dima += v.back();
                v.pop_back();
            }
 
            flag = 1;
        }
    }
 
    cout << siraj << " " << dima << endl;
    
 
    return 0;
}
