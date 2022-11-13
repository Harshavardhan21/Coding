#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define fir first
#define sec second
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define pb push_back
#define popb pop_back()
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vvs vector<vector<string>>
#define loop(i, n) for (ll i = 0; i < n; i++)
#define looprev(i, n) for (ll i = n - 1; i >= 0; i++)
#define p1(a) cout << a << endl
#define p2(a, b) cout << a << " " << b << endl
#define p3(a, b, c) cout << a << " " << b << " " << c << endl
#define p4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define vvi vector<vi>
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pii pair<ll, ll>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int dr4[] = {0, 1, 0, -1}, dc4[] = {1, 0, -1, 0};
int dr8[] = {0, 1, 1, 1, 0, -1, -1, -1}, dc8[] = {1, 1, 0, -1, -1, -1, 0, 1};
ll power(ll a, ll b)
{
    ll result = 1;
    a %= mod;
    assert(b >= 0);
    for (; b; b >>= 1)
    {
        if (b & 1)
            result = result * a % mod;
        a = a * a % mod;
    }
    return result;
}
/************************************************ Solution Begins Here *********************************************/
class Solution
{
public:
    string tictactoe(vector<vector<int>> &moves)
    {
        vector<vector<string>> temp(3, vector<string>(3, "@"));
        for (int i = 0; i < moves.size(); i++)
        {
            int x, y;
            x = moves[i][0];
            y = moves[i][1];
            if (i % 2 == 0)
            {
                temp[x][y] = "X";
            }
            else
            {
                temp[x][y] = "O";
            }
        }
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (temp[i][j] == "@")
                {
                    count++;
                }
                if (i == 0 && j == 0)
                {
                    string c = temp[i][j];
                    if (c == temp[i][j + 1] && c == temp[i][j + 2])
                    {
                        if (c == "X")
                        {
                            return "A";
                        }
                        else if (c == "O")
                        {
                            return "B";
                        }
                    }
                    if (c == temp[i + 1][j] && c == temp[i + 2][j])
                    {
                        if (c == "X")
                        {
                            return "A";
                        }
                        else if (c == "O")
                        {
                            return "B";
                        }
                    }
                    if (c == temp[i + 1][j + 1] && c == temp[i + 2][j + 2])
                    {
                        if (c == "X")
                        {
                            return "A";
                        }
                        else if (c == "O")
                        {
                            return "B";
                        }
                    }
                }
                else if (i == 0)
                {
                    string c = temp[i][j];
                    if (c == temp[i + 1][j] && c == temp[i + 2][j])
                    {
                        if (c == "X")
                        {
                            return "A";
                        }
                        else if (c == "O")
                        {
                            return "B";
                        }
                    }
                    if (j == 2)
                    {
                        string c = temp[i][j];
                        if (c == temp[i + 1][j - 1] && c == temp[i + 2][j - 2])
                        {
                            if (c == "X")
                            {
                                return "A";
                            }
                            else if (c == "O")
                            {
                                return "B";
                            }
                        }
                    }
                }
                else if (j == 0)
                {
                    string c = temp[i][j];
                    if (c == temp[i][j + 1] && c == temp[i][j + 2])
                    {
                        if (c == "X")
                        {
                            return "A";
                        }
                        else if (c == "O")
                        {
                            return "B";
                        }
                    }
                }
            }
        }
        if (count == 0)
        {
            return "Draw";
        }
        else
        {
            return "Pending";
        }
    }
};