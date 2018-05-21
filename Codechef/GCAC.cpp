#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,M,i,j,temp;
        long long MS[1007];
        pair <long long,pair<int,long long>> C[1007];
        string Qual[1007];
        set <int> P;
        long long placed=0,Total=0,null_cmp=0,p,q;
        scanf("%d %d",&N,&M);
        for(i=0;i<N;i++)
            scanf("%lld",MS+i);
        for(i=0;i<M;i++)
        {
            scanf("%lld %lld",&p,&q);
            C[i]=make_pair(p,make_pair(i,q));
        }
 
        sort(C,C+M);
 
 
        for(i=0;i<N;i++)
        {
           cin>>Qual[i];
        }
 
        for(i=0;i<N;i++)
        {
            for(j=M-1;j>=0;j--)
            {
                if(C[j].second.second&&Qual[i][C[j].second.first]=='1'&&C[j].first>=MS[i])
                {
                        Total+=C[j].first;
                        C[j].second.second--;
                        placed++;
                        //printf("$$ %lld %lld\n",Total,placed);
                        P.insert(j+1);
                        break;
                }
            }
        }
 
 
        printf("%lld %lld %d\n",placed,Total,M-P.size());
    }
}