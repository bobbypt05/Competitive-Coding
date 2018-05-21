#include<bits/stdc++.h>
using namespace std;
 
int A[100007];
 
int main()
{
    int T,i;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        if(N==2)
        {
           printf("2 1\n");
           continue;
        }
        if(N==3)
        {
            printf("2 3 1\n");
            continue;
        }
        if(N%2==0)
        {
            for(i=1;i<=N;i+=2)
            {
                printf("%d %d ",i+1,i);
            }
        }
        else
        {
            for(i=1;i<=N-3;i+=2)
            {
                printf("%d %d ",i+1,i);
            }
            printf("%d %d %d",N-1,N,N-2);
        }
        printf("\n");
    }
    return 0;
}