/** 
You have an array A of integers with n elements. There
are q queries to process and each query consists of four
integers: l, r, x, and y.
For the subarray of A ranging from index l to r, you need to
assign a sequence of integers for each subsequent element.
The sequence should start from x and increase by y. This means:
• A[l] will be assigned the value of x.
• A[l+1] will be assigned the value of x + y.
• A[l+2] will be assigned the value of x + 2*y.
• Continuing this pattern, A[l+i] will be assigned the
value of x + i*y, where i ranges from 0 to (r - l).
Find the sum of all integers in A after processing all queries.
Since answer can be large, return it modulo 109+7.
Input Format
1. The first line contains an integer, n, denoting the
number of elements in A.
2. Each line i of the n subsequent lines (where 0 ≤ i < n)
contains an integer describing A[i].
3. The next line contains an integer, q, denoting the
number of rows in queries.
4. Each line i of the q subsequent lines (where 0 ≤ i < q)
contains 4 space separated integers each describing
the row queries[i].
5. The 4 space separated integers denote the value of l, r,
x and y for the i-th query.
Constraints
• 1 <= 𝒏 <= 10!
• 0 <= 𝑨[𝒊] <= 10"
• 1 ≤ 𝒒 ≤ 10!
• 0 <= 𝒒𝒖𝒆𝒓𝒊𝒆𝒔[𝒊][𝒋] <= 10!
Sample Input 1
3
5
5
5
0
3
0
5
0 2 1 2
0 1 6 5
2 3 8 0
2 4 9 6
3 4 8 9
5
3
9
2
5
4
5
1 2 6 3
1 2 2 8
1 2 5 5
1 3 1 8
1 2 2 9
5
0
1
0
0
1
5
1 2 7 7
0 1 3 6
1 1 1 1
3 4 9 1
2 3 1 0
Sample output 1
51
Explanation-1
Here, n = 5
A = [5, 5, 0, 3, 0]
q = 5
queries = [[0, 2, 1, 2], [0, 1, 6, 5], [2, 3, 8,
0], [2, 4, 9, 6], [3, 4, 8, 9]]
for query 1:
l = 0, r = 2, x = 1, y = 2
A[0] = 1
A[1] = 3
A[2] = 5
So, A = [1, 3, 5, 3, 0]
for query 2:
l = 0, r = 1, x = 6, y = 5
A[0] = 6
A[1] = 11
So, A = [6, 11, 5, 3, 0]
for query 3:
l = 2, r = 3, x = 8, y = 0
A[2] = 8
A[3] = 8
So, A = [6, 11, 8, 8, 0]
for query 4:
l = 2, r = 4, x = 9, y = 6
A = [6, 11, 9, 15, 21]
for query 5:
l = 3, r = 4, x = 8, y = 9
A = [6, 11, 9, 8, 17]
Hence, answer is 6+11+9+8+17 = 51
Sample Input 2

Sample output 2
37
Explanation 2
Here, n = 5
A = [3, 9, 2, 5, 4]
q = 5
queries = [[1, 2, 6, 3], [1, 2, 2, 8], [1, 2, 5,
5], [1, 3, 1, 8], [1, 2, 2, 9]]
for query 1:
l = 1, r = 2, x = 6, y = 3
So, A = [3, 6, 9, 5, 4]
for query 2:
l = 1, r = 2, x = 2, y = 8
So, A = [3, 2, 10, 5, 4]
for query 3:
l = 1, r = 2, x = 5, y = 5
So, A = [3, 5, 10, 5, 4]
for query 4:
l = 1, r = 3, x = 1, y = 8
So, A = [3, 1, 9, 17, 4]
for query 5:
l = 1, r = 2, x = 2, y = 9
A = [3, 2, 11, 17, 4]
Hence, answer is 3+2+11+17+4 = 37
Sample Input 3

Sample output 3
16
Explanation 3
Here, n = 5
A = [0, 1, 0, 0, 1]
q = 5
queries = [[1, 2, 7, 7], [0, 1, 3, 6], [1,
1, 1, 1], [3, 4, 9, 1], [2, 3, 1, 0]]
for query 1:
l = 1, r = 2, x = 7, y = 7
A = [0, 7, 14, 0, 1]
for query 2:
l = 0, r = 1, x = 3, y = 6
A = [3, 9, 14, 0, 1]
for query 3:
l = 1, r = 1, x = 1, y = 1
A = [3, 1, 14, 0, 1]
for query 4:
l = 3, r = 4, x = 9, y = 1
A = [3, 1, 14, 9, 10]
for query 5:
l = 2, r = 3, x = 1, y = 0
A = [3, 1, 1, 1, 10]
Hence, answer is 3+1+1+1+10 = 16

**/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int q;
        cin>>q;

        vector<vector<long long>> que(q,vector<long long>(4));
        for(int i=0;i<q;i++)
            cin>>que[i][0]>>que[i][1]>>que[i][2]>>que[i][3];

        vector<int> parent(n+1);
        for(int i=0;i<=n;i++) parent[i]=i;

        function<int(int)> find = [&](int x){
            if(parent[x]==x) return x;
            return parent[x]=find(parent[x]);
        };

        auto unite = [&](int x,int y){
            x = find(x);
            y = find(y);
            if(x!=y) parent[x]=y;
        };

        vector<long long> final(n, -1);

        for(int i=q-1;i>=0;i--){
            int l = que[i][0];
            int r = que[i][1];
            long long x = que[i][2];
            long long y = que[i][3];

            int idx = find(l);

            while(idx <= r){
                final[idx] = x + (idx - l)*y;
               if(idx+1 < n)
             unite(idx, idx+1);
             else
             unite(idx, n);
                idx = find(idx);
            }
        }
        long long sum = 0;
        for(int i=0;i<n;i++){
            if(final[i] == -1) final[i] = a[i];
            sum += final[i];
        }
        cout<<sum<<"\n";
    }
}