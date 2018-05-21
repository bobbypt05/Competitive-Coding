#include <bits/stdc++.h>
using namespace std;
 
int A[1005];
 
int main()
{
		cin.tie(NULL);
		cout.tie(NULL);
 
		int T,i;
		cin>>T;
		while(T--)
		{
				int N;
				cin>>N;
 
				for(i=0;i<N;i++)
					cin>>A[i];
 
				sort(A,A+N);
 
				int gcd=0;
				for(i=0;i<N;i++)
				{
					gcd=__gcd(gcd,A[i]);
					if(gcd==1)
						break;
				}
 
				if(i==N)
					cout<<"-1\n";
				else
					cout<<"0\n";
 
				
 
		}
} 