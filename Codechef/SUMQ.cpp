#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1000000007
ll A[100007],B[100007],C[100007],sum1[100007],sum2[100007];
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        ll P,Q,R,i,j,Key,a=0,b=0,c=0,d=0,k,Ans=0;
        cin>>P>>Q>>R;
        for(i=0;i<P;i++)
            scanf("%lld",&A[i]);
        for(i=0;i<Q;i++)
            scanf("%lld",&B[i]);
        for(i=0;i<R;i++)
            scanf("%lld",&C[i]);
        sort(A,A+P);
        sort(B,B+Q);
        sort(C,C+R);
        ll r=P>R?P:R;
        for(i=1;i<=r;i++)
        {
            if(i<=P)
            sum1[i]=sum1[i-1]+A[i-1];
            if(i<=R)
            sum2[i]=sum2[i-1]+C[i-1];
        }
        for(i=0;i<Q;i++)
        {
            Key=B[i];
 
            b=upper_bound(A-b,A+P,Key)-A;
            ll req1=sum1[b]+(B[i]*b);
 
            d=upper_bound(C-d,C+R,Key)-C;
            ll req2=sum2[d]+(B[i]*d);
 
            Ans+=((req1%MAX)*(req2%MAX)%MAX);
        }
        printf("%lld\n",Ans%MAX);
    }
}