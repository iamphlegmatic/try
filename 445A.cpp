#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    bool white, black;
    cin >> n >> m;
    vector<vector<char>> chess(n, vector<char>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> chess[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            black = false;
            white = false;
            if (chess[i][j] == '.')
            {
                if (i - 1 >= 0 && chess[i - 1][j] != '-')
                {
                    if (chess[i - 1][j] == 'W')
                        white = true;
                    else if (chess[i - 1][j] == 'B')
                        black = true;
                }
                if (j - 1 >= 0 && chess[i][j - 1] != '-')
                {
                    cout<<i<<j<<endl;
                    if (chess[i][j - 1] == 'W')
                        white = true;
                    else if (chess[i][j - 1] == 'B')
                        black = true;
                }
                if (!black)
                {
                    chess[i][j] = 'B';
                    white=true;
                }
                if (!white)
                    chess[i][j] = 'W';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << chess[i][j];
        }
        cout << endl;
    }
}