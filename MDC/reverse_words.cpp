#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, i, n;
    scanf("%d", &T);
    while (T--)
    {
        string str;
        stack<char> st;

        cin >> str;
        n = str.length();

        for(i = n - 1; i >= 0; i--)
        {
            if(str[i] != '.')
            {
                st.push(str[i]);
            }
            else
            {
                while (!st.empty())
                {
                    printf("%c", st.top());
                    st.pop();
                }
                printf(".");
               
            }
            
        }
        while (!st.empty())
        {
            printf("%c", st.top());
            st.pop();
        }
        printf("\n");
    }

    return 0;
}