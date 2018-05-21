#include<bits/stdc++.h>
using namespace std;
 
long long A[100005];
 
int main()
{
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
            int i,N;
            cin>>N;
 
            for(i=0;i<N;i++)
                cin>>A[i];
 
            map <long long,long long> tt;
 
            for(i=0;i<N;i++)
            {
                tt[A[i]]++;
            }
 
            map<long long ,long long> :: iterator it=tt.begin();
 
            long long answer=0;
 
            for(it;it!=tt.end();it++)
            {
                    long long temp=it->second;
                    answer+=(temp-1);
            }
 
            cout<<answer<<endl;
    }
}