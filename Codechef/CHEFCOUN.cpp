#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int i,N;
        scanf("%d",&N);
        int Num=92681;
        for(i=1;i<=N;i++)
        {
            if(Num)
                printf("%d ",Num--);
            else
                printf("1 ");
        }
        printf("\n");
    }
}
 