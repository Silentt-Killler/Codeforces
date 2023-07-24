#include <bits/stdc++.h>
using namespace std;

int main()
{
    int line, in = 0, out = 0, total = 0, awn = 0;
    cin >> line;
    for (int i = 0; i < line; i++)
    {
        scanf("%d %d", &out, &in);
        total = total + in - out;
        
        if (awn >= total)
        {
            awn = awn;
        }
        else
            awn = total;

        
    }
    cout << awn;

    return 0;
}
