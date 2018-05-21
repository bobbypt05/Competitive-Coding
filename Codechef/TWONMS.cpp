#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long A,B,N;
        scanf("%lld %lld %lld",&A,&B,&N);
        if(N%2)
        {
            A=A*2;
        }
        A>B?printf("%lld\n",A/B):printf("%lld\n",B/A);
    }
}
 