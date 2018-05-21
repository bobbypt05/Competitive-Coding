#include<bits/stdc++.h>
using namespace std;
 
long A[1000007];
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long N,i,S,PreSum=0;
 
        scanf("%lld %lld",&N,&S);
 
        for(i=0;i<N;i++)
            scanf("%ld",A+i);
 
        sort(A,A+N);
 
        for(i=0;i<N;i++)
        {
            if(A[i]*(N-i)+PreSum==S)
            {
                printf("%ld\n",A[i]);
                break;
            }
 
            PreSum+=A[i];
        }
 
        if(i==N)
            printf("-1\n");
 
    }
}