#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
ll A[100005],B[100005];
vector < pair <ll,ll> > pp;
 
int main()
{
	 
	cin.tie(NULL);
	cout.tie(NULL);
 
	 int T;
	 cin>>T;
	 while(T--)
	 {
	 		ll N,Q;
	 		cin>>N>>Q;
	 		map <ll,ll> mapp;
 
	 		for(ll i=0;i<N;i++)
	 		{
	 				cin>>A[i];
	 				B[i]=A[i];
	 				mapp[A[i]] = i;
	 		}
 
	 		sort(B,B+N);
 
	 		while(Q--)
	 		{
 
	 				ll query;
	 				ll arr_l,arr_r;
	 				cin>>query;
	 				pp.clear();
 
	 				arr_l = upper_bound(B,B+N,query)-B-1;
	 				arr_r = N- arr_l -1;
 
	 				//code Padhne wala chutiya...
 
	 				ll left = 0 , right = N-1;
	 				ll indexToFind = mapp[query];
 
	 				while(left<=right)
	 				{
 
	 					ll mid = (left+right)/2;
	 					pp.push_back(make_pair(mid,A[mid]));
 
	 					if(mid == indexToFind)
	 							break;
						else if(indexToFind < mid)
	 						right=mid-1;
	 					else
	 						left=mid+1;
 
	 				}
 
	 				sort(pp.begin(),pp.end());
 
	 				ll i = 0, j = 0;
 
	 				ll indx = 0;
 
	 				for(indx=0;indx<pp.size();indx++)
	 					if(pp[indx].first == mapp[query])
	 						break;
 
	 				ll leftCount = 0 , rightCount = 0;
 
	 				for(i = indx-1;i>=0;i--)
	 				{
	 					if(pp[i].second > query)
	 						leftCount++;
	 				}
 
	 				for(j = indx+1;j<pp.size();j++)
	 				{
	 					if(pp[j].second < query)
	 						rightCount++;
	 				}
 
	 				ll answer = min(leftCount,rightCount);
 
	 				if(leftCount == rightCount)
	 				{
	 					cout<<leftCount<<endl;
	 					continue;
	 				}
 
	 				leftCount-=answer;
	 				rightCount-=answer;
 
					arr_l-=(indx-leftCount);
					arr_r-=(pp.size()-indx-1-rightCount);
 
	 				if(arr_l-answer<leftCount)
	 				{
	 					cout<<"-1\n";
	 					continue;
	 				}
 
	 				if(arr_r-answer<rightCount)
	 				{
	 					cout<<"-1\n";
	 					continue;
	 				}
 
	 				cout<<answer+leftCount+rightCount<<endl;
	 		}
	 }
} 
