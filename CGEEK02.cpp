#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string A,B;
        int i,R=0,L=0,flag1=1,flag2=1;
        cin>>A;
        for(i=0;i<A.size();i++)
        {
            if(A[i]=='R'&&flag1)
            {
                R++;
                flag1=0;
                flag2=1;
            }
            if(A[i]=='L'&&flag2)
            {
                L++;
                flag1=1;
                flag2=0;
            }
        }
        printf("%d\n",min(R,L));
    }
}