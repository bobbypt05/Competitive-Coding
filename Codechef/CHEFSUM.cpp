#include<bits/stdc++.h>
using namespace std;
 
long long prefix[100007],suffix[100007],A[100007];
 
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,i;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
            scanf("%lld",A+i);
        for(i=1;i<=N;i++)
        {
            prefix[i]=prefix[i-1]+A[i];
        }
        suffix[1]=prefix[N];
        for(i=2;i<=N;i++)
        {
            suffix[i]=suffix[i-1]-A[i-1];
        }
        long long indx,ans=1000000000000000;
        for(i=1;i<=N;i++)
        {
            if(suffix[i]+prefix[i]<ans)
            {
                ans=suffix[i]+prefix[i];
                indx=i;
            }
        }
        printf("%lld\n",indx);
    }
}