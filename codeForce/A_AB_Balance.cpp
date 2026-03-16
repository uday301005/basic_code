// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;

//         int len = s.size();

//         if(len > 0)
//             s[0] = s[len-1];

//         cout << s << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s; 
		int n = s.size(); 
		if (s[0] != s[n - 1])
		{
			if (s[0] == 'a')
				s[0] = 'b';
			else
				s[0] = 'a';
		}
		cout << s << endl; 
	}
	return 0;
}


