#include<bits/stdc++.h>
using namespace std;
 
long long A[100005],leftToright[100005],rightToleft[100005],answer1[100005],answer2[100005];
 
int main()
{
        int T;
        cin>>T;
        while(T--)
        {
            int i,N;
            cin>>N;
            for(i=0;i<=N+1;i++)
                answer1[i]=answer2[i]=0;
            for(i=0;i<N;i++)
            {
                cin>>A[i];
                leftToright[i]=rightToleft[N-i-1]=A[i];
            }
 
            for(i=1;i<N;i++)
                leftToright[i]+=leftToright[i-1];
 
            for(i=0;i<N-1;i++)
            {
                    answer1[i+1]++;
                    answer1[upper_bound(leftToright,leftToright+N,leftToright[i]+A[i])-leftToright+1]--;
            }
 
 
            for(i=1;i<N;i++)
                answer1[i]+=answer1[i-1];
 
            for(i=1;i<N;i++)
                rightToleft[i]+=rightToleft[i-1];
 
            for(i=0;i<N-1;i++)
            {
                answer2[i+1]++;
                answer2[upper_bound(rightToleft,rightToleft+N,rightToleft[i]+A[N-i-1])-rightToleft+1]--;
            }
 
            for(i=1;i<N;i++)
                answer2[i]+=answer2[i-1];
 
            for(i=0;i<N;i++)
                cout<<answer1[i]+answer2[N-i-1]<<" ";
 
            cout<<endl;
 
        }
}