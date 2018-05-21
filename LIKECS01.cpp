#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string A;int freq[1234]={0},ans=0,i;
        cin>>A;
        for(i=0;i<A.size();i++)
        {
            freq[A[i]]++;
            if(freq[A[i]]>=2)
            {
                ans=1;
            }
        }
        if(ans)
          printf("yes\n");
        else
            printf("no\n");
    }
}