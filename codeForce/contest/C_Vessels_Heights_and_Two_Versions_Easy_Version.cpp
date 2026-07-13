#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];


        for (int i = 0; i < n; i++)
        {
            vector<long long> cw_max(n, 0); 
            
            long long cur = 0;
            for (int k = 1; k < n; k++) {
                int j = (i + k) % n;
                cur = max(cur,(long long) h[(i + k - 1) % n]);  
                cw_max[j] = cur;
            }
            
            long long sum = 0;
            cur = 0;
            for (int k = 1; k < n; k++) {
                int j = (i - k + n) % n;
                cur = max(cur, (long long)h[j]);  
                sum += min(cw_max[j], cur); 
            }
            cout << sum << " ";
        }
        cout<<endl;
    }
}