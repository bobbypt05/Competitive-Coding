#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K,n,i,j,temp;
        cin>>N>>K;
        vector <int> A[N];
        for(i=0;i<N;i++)
        {
            cin>>n;
            int freq[2503]={0};
            for(j=0;j<n;j++)
            {
                cin>>temp;
                freq[temp]++;
            }
            for(j=1;j<=K;j++)
            {
                if(freq[j]==0)
                    A[i].push_back(j);
            }
        }
        int cnt=0,k;
        for(i=0;i<N;i++)
        {
            for(j=i+1;j<N;j++)
            {
                for(k=0;k<A[i].size();k++)
                {
                    if((binary_search(A[j].begin(),A[j].end(),A[i][k])))
                        break;
                }
                if(k==A[i].size())
                   cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}