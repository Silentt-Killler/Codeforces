#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int number, count;
    scanf("%ld %ld", &number, &count);
    for (int i = 0; i < count; i++)
    {

        if (number % 10 == 0)
        {
            number = number / 10;
        }
        else
            number = number - 1;
    }
    printf("%ld",number);
    return 0;
}
