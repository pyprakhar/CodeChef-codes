#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#define allsort(a) sort(a.begin(), a.end())
ll n;
ll getmin(vector < ll > & v)
{
        ll ans1 = 0;
        for (int i = 1; i < n; i++)
        {
                ans1 += abs(v[i] - v[n / 2]);
        }
        ll ans2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
                ans2 += abs(v[i] - v[(n - 1) / 2]);
        }
        return min(ans1, ans2);
}
void solve()
{
        cin >> n;
        vector < ll > a(n, 0);
        for (ll i = 0; i < n; i++)
                cin >> a[i];
        allsort(a);
        if (n == 2)
        {
                cout << "0" << "\n";
                return;
        }
        ll ans = getmin(a);
        set < ll > s;
        for (int i = 1; i < n - 1; i++) 
        {
                auto val = s.lower_bound(a[i] - a[0]);
                if (val != s.end()) 
                {
                        ans = min(ans, abs(( * val) - (a[i] - a[0])));
                }
                if (val != s.begin())
                {
                        val--;
                        ans = min(ans, abs(( * val) - (a[i] - a[0])));
                }
                if (i < n - 2)
                        ans = min(ans, abs(a[n - 1] + a[0] - a[i] - a[i + 1]));
                s.insert(a[n - 1] - a[i]);
        }
        cout << ans << endl;
}

int main() 
{
        FAST1;
        FAST2;
        ll t;
        cin >> t;
        while (t--)
        {
                solve();
        }
}
