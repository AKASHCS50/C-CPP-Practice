#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int count = 1, max_count = 0;

    cin >> str;

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
            count++;
        else
            count = 1;

        max_count = max(count, max_count);
    }

    if ((max_count == 0) && (str.length() == 1))
        max_count = 1;

    printf("%d\n", max_count);

    return 0;
}