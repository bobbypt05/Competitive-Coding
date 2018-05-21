#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,i,j;
        pair < string , string > P[10005];
        string A,B;
        scanf("%d",&N);
 
        for(i=0;i<N;i++)
        {
            cin>>A>>B;
            P[i]={A,B};
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(P[i].first==P[j].second)
                    break;
            }
            if(j==N)
                break;
        }
        cout<<P[i].first<<"-"<<P[i].second<<" ";
        string temp=P[i].second;
        for(i=1;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(temp==P[j].first)
                {
                    cout<<P[j].first<<"-"<<P[j].second<<" ";
                    temp=P[j].second;
                    break;
                }
            }
    
        }
        printf("\n");
    }
    return 0;
}