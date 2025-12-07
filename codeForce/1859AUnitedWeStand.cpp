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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        vector<long long> b;
        vector<long long> c;
        long long smallest = a[0];
      for (long long v : a) {
            if (v == smallest && v%smallest == 0 ){
                 b.push_back(v);
                smallest == v;}
            else c.push_back(v);
        }
        if (c.size()==0)
        {
            cout << -1 << "\n";
            continue;
        }
        cout << b.size() << " " << c.size() << "\n";
        for (auto &k : b)
            cout << k << " ";
        cout << "\n";
        for (auto &k : c)
            cout << k << " ";
        cout << endl;
    }
    return 0;
}