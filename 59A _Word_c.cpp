#include <bits/stdc++.h>
using namespace std;

int main()
{
    int uppercase = 0, lowercase = 0;
    char name[101];
    scanf("%s", name);
    int length = strlen(name);

    for (int i = 0; i < length; i++)
    {

        if (name[i] >= 65 && name[i] <= 90)
        {
            uppercase++;
        }
        else if (name[i] >= 97 && name[i] <= 122)
        {
            lowercase++;
        }
    }

    if (uppercase > lowercase)
    {
        for (int i = 0; i < length; i++)
        {
            if (name[i] >= 97 && name[i] <= 122)
            {
                name[i] = name[i] - 32;
            }
        }
    }

    else
    {
        for (int i = 0; i < length; i++)
        {
            if (name[i] >= 65 && name[i] <= 90)
            {
                name[i] = name[i] + 32;
            }
        }
    }

    printf("%s", name);

    return 0;
}
