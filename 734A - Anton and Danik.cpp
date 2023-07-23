#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, danik=0, anton=0;
    string name;
    cin >> number;
    cin >> name;
    for (int i = 0; i < number; i++)
    {
        if (name[i] == 'D')
            danik++;
        else if (name[i] == 'A')
            anton++;
    }
    if (danik > anton)
        cout << "Danik";
    else if (anton > danik)
        cout << "Anton";
    else
        cout << "Friendship";

    return 0;
}
