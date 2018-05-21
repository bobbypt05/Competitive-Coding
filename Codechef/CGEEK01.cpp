#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int i,N;
        string str;
        scanf("%d",&N);
        int A[N];
        for(i=0;i<N;i++)
            scanf("%d",&A[i]);
        cin>>str;
        int r;
        scanf("%d",&r);
        int cnt=0;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='1')
                cnt++;
            if(cnt==3)
               break;
        }
        printf("%d\n",A[(i+r)%N]);
    }
}