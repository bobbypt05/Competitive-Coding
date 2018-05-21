#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        string A,comp;
        cin>>A;
        if(A[0]=='U')
            comp="UD";
        else
            comp="DU";
        int i,k=0,Count_U=0,Count_D=0;
        for(i=0;i<A.size();i++)
        {
            if(A[i]==comp[k%2])
             {
                 k++;
                 if(A[i]=='U')
                    Count_U++;
                 else
                    Count_D++;
 
             }
        }
        printf("%d\n",min(Count_U,Count_D));
    }
}