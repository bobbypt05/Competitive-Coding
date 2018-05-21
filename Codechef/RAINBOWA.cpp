#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int i,N,flag=0,k=0;
        scanf("%d",&N);
        int A[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",A+i);
            if(A[i]>7)
                flag=1;
        }
        if(flag)
        {
            printf("no\n");
            continue;
        }
        for(i=0;i<N/2;i++)
        {
             if(A[i]!=A[N-i-1]||(A[i+1]-A[i])>1)
                    break;
 
        }
 
        if(i==N/2&&A[N/2]==7)
            printf("yes\n");
        else
            printf("no\n");
    }
}
 