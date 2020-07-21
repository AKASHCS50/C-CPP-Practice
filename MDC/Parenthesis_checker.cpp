#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, x, y, z, i, n;
    scanf("%d", &T);
    while (T--)
    {
        x = 0;
        y = 0;
        z = 0;
        string str;
        cin >> str;
        n = str.length();
        for (i = 0; i < n; i++)
        {
            if (str[i] != ".")
                x++;
            else if (str[i] == "[")
                y++;
            else if (str[i] == "(")
                z++;
        }
    }

    return 0;
}