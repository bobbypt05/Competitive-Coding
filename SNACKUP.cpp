#include<bits/stdc++.h>
using namespace std;
int A[107][2];
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,i,j,k;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            for(j=1;j<=2;j++)
            {
                if(i+j>N)
                    A[i][j]=(i+j)%N;
                else
                    A[i][j]=i+j;
            }
        }
        printf("%d\n",N);
        for(k=0;k<N;k++)
        {
            printf("%d\n",N);
            for(i=0;i<N;i++)
            {
                printf("%d ",i+1);
                    for(j=1;j<=2;j++)
                    {
                        if(A[i][j]+k>N)
                            printf("%d ",(A[i][j]+k)%N);
                        else
                           printf("%d ",(A[i][j]+k));
                    }
                printf("\n");
            }
        }
 
    }
}