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

// Solution 1: Using Hashmap
// Time Complexity: O(n)
// Space Complexity: O(n)
void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    loop(i, n) cin >> arr[i];
    unordered_map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }
    for (auto i : mp)
    {
        if (i.second > n / 2)
        {
            cout << i.first << " ";
        }
    }
}
// Solution 2: Using Moore's Voting Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
void solve1()
{
    int n;
    cin >> n;
    vi arr(n);
    loop(i, n) cin >> arr[i];
    int votes = 0;
    int ele = -1;
    for (int i = 0; i < n; i++)
    {
        if (votes == 0)
        {
            ele = arr[i];
            votes = 1;
        }
        else
        {
            if (arr[i] == ele)
            {
                votes++;
            }
            else
            {
                votes--;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        cout << ele << endl;
    }
    else
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
    solve1();
    return 0;
}