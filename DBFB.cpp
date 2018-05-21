#include <bits/stdc++.h>
using namespace std;
 
#define MOD 1000000007
 
pair <long long,long long> A[100005];
 
long long arr1[100005],arr2[100005];
 
int main()
{	
	
		cin.tie(NULL);
		cout.tie(NULL);
 
		A[1] = make_pair(1,0);
		A[2] = make_pair(0,1);
 
		for(int i=3;i<100001;i++)
			A[i]=make_pair((A[i-1].first%MOD+A[i-2].first%MOD)%MOD,(A[i-1].second%MOD+A[i-2].second%MOD)%MOD);

 
		int T;
		cin>>T;
		while(T--)
		{
			int M,N;
			cin>>M>>N;
 
			for(int i=0;i<M;i++)
				cin>>arr1[i];
 
			for(int i=0;i<M;i++)
				cin>>arr2[i];
 
 
			long long answer = 0;
			long long temp=1;
 
 
			for(int i=0;i<M;i++)
			{
				temp =((((M%MOD)*(arr1[i]%MOD))%MOD)*((A[N].first)%MOD))%MOD;
				answer = (answer%MOD + temp %MOD)%MOD;
			}
 
			for(int i=0;i<M;i++)
			{
				temp = ((((M%MOD)*(arr2[i]%MOD))%MOD)*((A[N].second)%MOD))%MOD;
				answer = (answer%MOD + temp %MOD)%MOD;
			}
 
			cout<<answer%MOD<<endl;
		}
 
} 