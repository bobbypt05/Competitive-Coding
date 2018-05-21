#include<bits/stdc++.h>
using namespace std;
 
int main()
{
        ios_base::sync_with_stdio(false);
        int T;
        cin>>T;
        while(T--)
        {
                int i,j,N;
                cin>>N;
                vector < long long > A[N];
 
                long long tt;
 
                for(i=0;i<N;i++)
                {
                    for(j=0;j<N;j++)
                    {
                        cin>>tt;
                        A[i].push_back(tt);
                    }
 
                }
 
                for(i=0;i<N;i++)
                    sort(A[i].begin(),A[i].end(),greater<long long>());
 
                long long prev = 1000000000000,answer = 0 , Ok = 1;
                for(i=N-1;i>=0;i--)
                {
                    for(j=0;j<N;j++)
                    {
                         if(A[i][j] < prev )
                         {
                             prev = A[i][j];
                             answer+=A[i][j];
                             break;
                         }
                    }
                    if(j==N)
                    {
                        Ok=0;
                        break;
                    }
                }
 
                if(Ok)
                    cout<<answer<<endl;
                else
                    cout<<"-1\n";
 
        }
}