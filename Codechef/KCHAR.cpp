#include<bits/stdc++.h>
using namespace std;
 
long long A[67];
 
int main()
{
 
    int i;
    A[0]=1;
    for(i=1;i<61;i++)
       A[i]=A[i-1]*2;
 
 
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long k,cnt=0;
        scanf("%lld",&k);
 
        if(k==1)
        {
            printf("a\n");
            continue;
        }
 
 
        long long cur=A[upper_bound(A,A+60,k)-A]-1,flag=1;
 
        while(k!=1)
        {
 
                if(binary_search(A,A+60,k))
                {
                   if(cnt%2)
                   {
                       printf("c\n");
                       flag=0;
                       break;
                   }
                   else
                   {
                       printf("a\n");
                       flag=0;
                       break;
                   }
 
                }
                k=1+(cur-k);
                cnt++;
                cur=A[upper_bound(A,A+60,k)-A]-1;
 
 
 
        }
       
        if(cnt!=0&&cnt%2&&flag)
            printf("c\n");
        if(cnt!=0&&(cnt%2==0)&&flag)
            printf("a\n");
    }
 
}