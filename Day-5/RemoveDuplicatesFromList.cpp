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
    ListNode *deleteDuplicates(ListNode *head)
    {
        while (head != NULL && head->next != NULL && head->val == head->next->val)
        {
            head = head->next;
        }
        ListNode *temp = head;
        ListNode *prev;
        while (temp != NULL)
        {
            prev = temp;
            if (temp != NULL && temp->next != NULL && temp->val == temp->next->val)
            {
                while (temp != NULL && temp->next != NULL && temp->val == temp->next->val)
                {
                    temp = temp->next;
                }
                prev->next = temp->next;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};