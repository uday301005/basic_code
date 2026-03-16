#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n >> m;
    vector<long long> v(n);
    vector<long long> d(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> d[i];
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= m; j++)
        {
            long long x = v[i] - d[i] * j;
            if (pq.size() < m)
                pq.push(x);
            else if (x > pq.top())
            {
                pq.pop();
                pq.push(x);
            }
            else
                break;
    }
    long long ans = 0;
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;
    return 0;
}