/** 

You are given three integers X,Y and Z and two
arrays A and B both of length N. You are also given an
integer sum which is initially equal to 0.
You have perform N operations and in each ith operation you
must do only one of the following :
1. Subtract B[i] from sum.
2. Decrease both of X and Y by 1, then add A[i] * X * Y *
Z to sum.
3. Decrease both of Y and Z by 1, then add A[i] * X * Y *
Z to sum.
However, after each operation, X,Y and Z must all remain greater
than or equal to 0.
Find the maximum sum you can obtain after performing all
operations. Since answer can be large, return it modulo 109+7.
Input Format
1. The first line contains an integer, N, denoting the number of
operations.
2. The next line contains an integer, X.
3. The next line contains an integer,Y.
4. The next line contains an integer, Z.
5. Each line i of the N subsequent lines (where 1 ≤ i ≤ N)
contains an integer describing A[i].
6. Each line i of the N subsequent lines (where 1 ≤ i ≤ N)
contains an integer describing B[i].
Constraints
• 1 <= 𝑁 <= 10#
• 1 <= 𝑿 <= 10#
• 1 <= 𝒀 <= 10#
• 1 <= 𝒁 <= 10#
• 1 <= 𝑨[𝒊] <= 10$
• 1 <= 𝑩[𝒊] <= 10"
Sample Input-1:
3
2
1
2
2
0
0
10
5
2
10
11
11
1
10
10
0
3
3
3
3
1
2
3
1
2
3
Explanation-1:
Here, N = 2, X = 1, Y = 2, Z = 2
A = [0, 0]
B = [10, 5]
It is given that in starting, sum = 0
operation 1:
Apply type 2 operation (i.e. Decrease both of X and Y by 1, then
add A[1]*X*Y*Z to sum)
X = 0, Y = 1, Z = 2
sum = sum + 0*0*1*2 = 0
operation 2:
Apply type 3 operation (i.e. Decrease both of Y and Z by 1,
then add A[2]*X*Y*Z to sum)
X = 0, Y = 0, Z = 1
sum = sum + 0*0*0*1 = 0
Hence, answer is the final value of sum i.e. sum = 0.
Sample Input-2:

Sample output-2:
9990
Explanation-2:
Here, N = 2, X = 10, Y = 11, Z = 11
A = [1, 10]
B = [10, 0]
It is given that in starting, sum = 0
operation 1:
operation 2:
Apply type 3 operation
(i.e. Decrease both of Y and Z by 1, then add
A[2]*X*Y*Z to sum)
X = 10, Y = 10, Z = 10
sum = sum + 10*10*10*10 = 9990
Hence, answer is the final value of sum i.e. sum = 9990.
Sample Input-3:

Sample output-3:
35
Explanation-3:
Here, N = 3, X = 3, Y = 3, Z = 3
A = [1, 2, 3]
B = [1, 2, 3]
It is given that in starting, sum = 0
operation 1:
Apply type 1 operation
(i.e. Subtract B[1] from sum.)
sum = sum - 1 = -1
operation 2:
Apply type 2 operation (i.e. Decrease both of X and Y by 1,
then add A[2]*X*Y*Z to sum)
X = 2, Y = 2, Z = 3
sum = sum + 2*2*2*3 = 23
operation 3:
Apply type 3 operation
(i.e. Decrease both of Y and Z by 1, then add A[3]*X*Y*Z
to sum)
X = 2, Y = 1, Z = 2
sum = sum + 3*2*1*2 = 35
Hence, answer is the final value of sum i.e. sum = 35.
External Document
**/


#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

long long dfs(vector<int> &a, vector<int> & b, int i,int x,int y,int z){
     if(i==a.size()) return 0;
    long long op1 = b[i] - dfs(a,b,i+1,x,y,z);
    long long op2 = (x>0 && y>0) ? (a[i]*(x-1)*(y-1) + dfs(a,b,i+1,x-1,y-1,z))%mod : 0;
    long long op3 = (z>0 && y>0) ? (a[i]*(z-1)*(y-1) + dfs(a,b,i+1,x,y-1,z-1))%mod : 0;
    return max({op1,op2,op3});
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
     int n,X,Y,Z;
     cin>>n>>X>>Y>>Z;
     vector<int> a(n),b(n);
     for(int i=0;i<n;i++)cin>>a[i];
      for(int i=0;i<n;i++)cin>>b[i];
      cout<<dfs(a,b,0,X,Y,Z)<<endl;
  
    }
    return 0;
}