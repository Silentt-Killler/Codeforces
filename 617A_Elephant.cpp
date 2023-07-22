#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    int a[]={5,4,3,2,1};
    scanf("%d",&n);
    for(int i=0; i<5; i++)
    {
        ans+=n/a[i];
        n=n%a[i];
    }
    printf("%d",ans);
    return 0;
}
