#include<bits/stdc++.h>
using namespace std;
 
long long A[100005],B[200005];
 
long long maxSubarrayA( int N )
{
        long long minx = -100000000000;
 
        long long sumx = 0;int i;
 
        for(i=0;i<N;i++)
        {
                sumx += A[i] ;
 
                if(minx < sumx )
                    minx = sumx;
 
                if(sumx < 0)
                    sumx = 0;
        }
 
        return minx;
}
 
long long maxSubarrayB( int N )
{
        long long minx = -100000000000;
 
        long long sumx = 0;int i;
 
        for(i=0;i<N+N;i++)
        {
                sumx += B[i] ;
 
                if(minx < sumx )
                    minx = sumx;
 
                if(sumx < 0)
                    sumx = 0;
        }
 
        return minx;
}
 
 
 
int main()
{
        ios_base::sync_with_stdio(false);
        int T;
        cin>>T;
        while(T--)
        {
            int i,j,N,K;
            cin>>N>>K;
 
            for(i=0;i<N;i++)
            {
                cin>>A[i];
            }
 
            for(i=0;i<N;i++)
                B[i]=A[i];
 
            for(i=N;i<N+N;i++)
                B[i]=A[i-N];
 
            long long sumx = 0;
 
            for(i=0;i<N;i++)
                sumx+=A[i];
 
            if(K==1)
                cout<<maxSubarrayA(N)<<endl;
            else if(K==2)
                cout<<maxSubarrayB(N)<<endl;
            else
            {
 
                    long long prefixx = -10000000000 , sufixx = prefixx;
                    long long maxxi = 0;
                    for(i=N-1;i>=0;i--)
                    {
                            maxxi += A[i];
                            prefixx = max(prefixx,maxxi);
                    }
 
                    maxxi = 0;
                    for(i=0;i<N;i++)
                    {
                            maxxi += A[i];
                            sufixx = max(sufixx,maxxi);
                    }
 
                    long long ff=-1000000000000;
                    if(sumx>=0)
                    {
                            if( sufixx >= 0 && prefixx >= 0 )
                                ff = sufixx+sumx*(K-2)+prefixx;
                            else if( sufixx >= 0 && prefixx < 0 )
                                ff = sufixx+sumx*(K-2);
                            else if( sufixx < 0 && prefixx >= 0 )
                                ff = sumx*(K-2)+prefixx;
                    }
                    
                    cout<<max(max(maxSubarrayA(N),maxSubarrayB(N)),ff)<<endl;
 
            }
        }
 
}
 