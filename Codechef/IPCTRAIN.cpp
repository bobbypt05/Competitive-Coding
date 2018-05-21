#include<bits/stdc++.h>
using namespace std;
 
pair < long long , pair <long long , long long > > A[100007];
bool seen[100007];
long long Range[100007];
long long Root[100007];
 
long long GetCount(long long P,long long Q,long long D)
{
 
      long long Last=P,i=P,cnt=0;
      for(i=P;i<=D;i++)
      {
          if(!(seen[i]))
          {
              seen[i]=true;
              Root[i]=P;
              cnt++;
          }
          else
          {
              if(Range[i]==0)
              {
                  i=Range[Root[i]];
              }
              else
              {
                  i=Range[i];
              }
 
          }
          if(cnt==Q)
          {
              Root[P]=0;
              Range[P]=i;
              return Q;
          }
      }
      Root[P]=0;
      Range[P]=D;
      return cnt;
 }
 
 void initialise()
 {
    int i;
    for(i=0;i<=100005;i++)
    {
        seen[i]=false;
        Range[i]=0;
        Root[i]=0;
    }
 
 }
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long N,D,M=0,Day,Time,Sadness,i,Ans=0,Total=0;
        scanf("%lld %lld",&N,&D);
 
        initialise();
 
        for(i=0;i<N;i++)
        {
            scanf("%lld %lld %lld",&Day,&Time,&Sadness);
            A[i]=make_pair(Sadness,make_pair(Day,Time));
            Total+=Sadness*Time;
 
        }
 
        sort(A,A+N);
        long long cnt=0;

 
        for(i=N-1;i>=0;i--)
        {
 
            M=GetCount(A[i].second.first,A[i].second.second,D);
    
            cnt+=M;
            Total-=(M*A[i].first);
            if(cnt==D)
                break;
        }
 
        printf("%lld\n",Total);
 
    }
}