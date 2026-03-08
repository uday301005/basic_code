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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int f=1,s=1;
        for (int i = 0; i < n-1; i++){
            if(a[i]==a[i+1])
                s++;
            else{
                f=max(f,s);
                s=1;
            }
        }
        f=max(f,s);
        int op =0;

        if(f!=n)
        while(f<n){
            int rem = n-f;
            op++;
            if(rem>f){
                op+=f;
                f = f*2;
            }
            else
            {
                op+=rem;
                f=n;
            }
        }
        cout << op << endl;

    }
    return 0;
}