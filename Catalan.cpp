#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxx = 1e3 + 10;
const int MOD = 1000000007;
ll Cat[maxx];
void init()
{
    for (int i = 0; i < maxx; ++i)
    {
        if (i == 0 || i == 1)
            Cat[i] = 1;
        else
        {
            ll sum = 0, left, right;
            for (int k = 1; k <= i; ++k)
            {
                left = Cat[k - 1] % MOD;
                right = Cat[i - k] % MOD;
                sum = (sum % MOD + (left * right) % MOD) % MOD;
            }
            Cat[i] = sum;
        }
    }
}
void solve()
{
    for (int i = 0; i < 10; ++i)
    {
        cout << Cat[i] << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    init();
    for (int cs = 1; cs <= t; cs++)
    {
        cout << "Case " << cs << ": ";
        solve();
    }
    return 0;
}