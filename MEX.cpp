#include<bits/stdc++.h>
using namespace std;
 
long long A[5000];
 
int main()
{
    int T,i;
    scanf("%d",&T);
    while(T--)
    {
        int freq[200005]={0};
        int i,N,K,temp;
        scanf("%d %d",&N,&K);
        for(i=0;i<N;i++)
        {
            scanf("%d",&temp);
            freq[temp]++;
        }
        for(i=0;i<=200000;i++)
        {
            if(freq[i]==0)
            {
                if(K)
                    K--;
                else
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
 