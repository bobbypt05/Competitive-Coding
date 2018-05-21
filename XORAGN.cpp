#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
 
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		long long Answer=0,num;
		while(N--)
		{
			cin>>num;
			num*=2;
			Answer^=num;
		}
 
		cout<<Answer<<endl;
	}
 
} 