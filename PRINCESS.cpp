#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int N,i;
    cin>>N;
    while(N--)
    {
        string A;
        int flag=0;
        cin>>A;
        for(i=0;i<A.size()-1;i++)
        {
            if(A[i]==A[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            printf("YES\n");
            continue;
        }
        for(i=0;i<A.size()-2;i++)
        {
            if(A[i]==A[i+2])
            {
                printf("YES\n");
                break;
            }
        }
        if(i==A.size()-2)
            printf("NO\n");
 
    }
}