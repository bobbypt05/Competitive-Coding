#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int Q;
    cin>>Q;
    while(Q--)
    {
        long long P,Q,K,A,B;
        long long real;
        float ans=0;
        scanf("%lld %lld %lld",&K,&A,&B);
        ans= 1.0*(360.0/K)*abs(B-A);
        //printf("%llf\n",ans);
        if(ans==180)
            printf("0\n");
        else if(ans<360-ans)
        {
               real=abs(B-A)-1;
               printf("%lld\n",real);
        }
        else
        {
            real=abs(B-A)-1;
            real=K-real-2;
            printf("%lld\n",real);
        }
    }
 
}