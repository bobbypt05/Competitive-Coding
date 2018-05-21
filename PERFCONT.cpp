#include<bits/stdc++.h>
using namespace std;
 
long long A[5000];
 
int main()
{
    int T,i;
    scanf("%d",&T);
    while(T--)
    {
        long long int N,P,CW=0,Hard=0;
        scanf("%lld %lld",&N,&P);
        for(i=0;i<N;i++)
            scanf("%lld",&A[i]);
        for(i=0;i<N;i++)
        {
            if(A[i]<=P/10)
                Hard++;
            else if(A[i]>=P/2)
                CW++;
        }
        if(CW==1&&Hard==2)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}