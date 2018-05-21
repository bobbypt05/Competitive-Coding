#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long A,B,M,Ans;
        scanf("%lld %lld %lld",&A,&B,&M);
        
        Ans=(B/M)-(A/M);
        
        if(A%M==0)
            Ans++;
        printf("%lld\n",Ans);
        
    }
} 