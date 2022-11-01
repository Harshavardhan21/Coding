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

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    loop(i, n) cin >> arr[i];
    int left[n];
    int right[n];
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        left[i] = left[i - 1] + arr[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] + arr[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (right[i + 1] == 0)
            {
                cout << i << endl;
                flag = 1;
                break;
            }
        }
        else if (left[i - 1] == right[i + 1])
        {
            cout << i << endl;
            flag++;
        }
        else
        {
            if (i == n - 1)
            {
                if (left[i - 1] == 0)
                {
                    cout << i << endl;
                    flag++;
                }
            }
        }
    }
    if (flag == 0)
    {
        cout << "-1" << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
    solve();
    return 0;
}