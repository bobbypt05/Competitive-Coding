#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long N,B,Mod=0,First=0,Second=0;
        scanf("%lld %lld",&N,&B);
 
        Mod=N%B;
        First=(N/B)/2;
        Second=(N/B)-First;
        long long Calc=First*B+Mod;

        long long Ans=(Calc)+(Calc*(Second-1));
 
        printf("%lld\n",Ans);
 
    }
}