#include<bits/stdc++.h>
using namespace std;
 
vector <int> A[100005];
bool seen[100005];
 
void initialise()
{
    int i;
    for(i=0;i<100005;i++)
    {
        A[i].clear();
        seen[i]=false;
    }
}
 
void DFS(int N)
{
    seen[N]=true;
    int i;
    for(i=0;i<A[N].size();i++)
    {
        if(!seen[A[N][i]])
            DFS(A[N][i]);
    }
}
 
int connected(int N)
{
     int ans=0,i;
     for(i=0;i<N;i++)
     {
         if(!seen[i])
         {
             DFS(i);
             ans++;
         }
     }
     return ans;
}
 
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        initialise();
        int i,N,E,u,v;
        scanf("%d %d",&N,&E);
        for(i=0;i<E;i++)
        {
            scanf("%d %d",&u,&v);
            A[u].push_back(v);
            A[v].push_back(u);
        }
        printf("%d\n",connected(N));
 
    }
}
 