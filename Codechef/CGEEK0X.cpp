#include<bits/stdc++.h>
using namespace std;
 
 
vector < int > A[1007];
int Arr[1007];
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int P,K,L,i,j;
        scanf("%d %d %d",&P,&K,&L);
        for(i=0;i<L;i++)
            scanf("%d",&Arr[i]);
        sort(Arr,Arr+L,greater<int>());
        for(i=0;i<L;i++)
        {
            A[i%K].push_back(Arr[i]);
        }
        long long ans=0;
        for(i=0;!A[i].empty();i++)
        {
            for(j=0;j<A[i].size();j++)
            {
                ans+=(j+1)*A[i][j];
            }
        }
        printf("%lld\n",ans);
        for(i=0;i<=K;i++)
            A[i].clear();
    }
}