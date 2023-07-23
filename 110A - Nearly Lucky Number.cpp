#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int number, count = 0;
    cin>>number;
    while (number)
    {

        if (number % 10 == 4 || number % 10 == 7)
        {
            count++;
            
        }
        number = number / 10;
    }

    if (count % 10 == 4 || count % 10 == 7)
        printf("YES");

    else
        printf("NO");
    return 0;
}
