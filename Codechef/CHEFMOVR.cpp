#include<bits/stdc++.h>
using namespace std;
 
long long A[1000007];
set <long long> B;
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long N,i,j,sum=0,D,cnt=0,last=0,Ans=0;
        scanf("%lld %lld",&N,&D);
        B.clear();
        for(i=0;i<N;i++)
        {
            scanf("%lld",A+i);
        }
 
        for(i=0;i<D;i++)
        {
            sum=0;cnt=0;
            for(j=i;j<N;j+=D)
            {
                sum+=A[j];
                cnt++;
            }
            
            if(sum%cnt)
            {
                break;
            }
            B.insert(sum/cnt);
            long long x=sum/cnt;
            for(j=i;j<N-D;j+=D)
            {
                if(A[j]<x)
                {
                    Ans+=(x-A[j]);
                    A[j+D]-=(x-A[j]);
                    A[j]=x;
                }
                else if(A[j]>x)
                {
                    Ans+=(A[j]-x);
                    A[j+D]+=(A[j]-x);
                    A[j]=x;
                }
            }
 
 
        }
        
        if(B.size()!=1)
        {
            printf("-1\n");
            continue;
        }
        set <long long > :: iterator it=B.begin();
        for(i=0;i<N;i++)
        {
             if(A[i]!=*it)
                break;
        }
        if(i==N)
            printf("%lld\n",Ans);
        else
            printf("-1\n");
    }
}