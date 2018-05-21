#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
		
		cin.tie(NULL);
		cout.tie(NULL);
 
		int T;
		cin>>T;
		while(T--)
		{
			int N,K;
			cin>>N>>K;
 
			int num;
 
			vector <int> tomu,motu;
			long long tomuSum=0,motuSum=0;
 
 
			for(int i=0;i<N;i++)
			{
				cin>>num;
				if(i%2)
				{
					tomu.push_back(num);
					tomuSum+=num;
				}
				else
				{
					motu.push_back(num);
					motuSum+=num;
				}
			}
 
 
			sort(tomu.begin(),tomu.end());
			sort(motu.begin(),motu.end(),greater<int>());
 
			if(tomuSum>motuSum)
			{
				cout<<"YES\n";
				continue;
			}
 
 
			int i=0; 
 
			while(K--&&i<min(tomu.size(),motu.size()))
			{
				tomuSum=tomuSum-tomu[i]+motu[i];
				motuSum=motuSum-motu[i]+tomu[i];
 
				if(tomuSum>motuSum)
				{
					break;
				}
 
				i++;
			}
 
			if(K>=0 && i!=min(tomu.size(),motu.size()))
				cout<<"YES\n";
			else
				cout<<"NO\n";
 
		}
} 
