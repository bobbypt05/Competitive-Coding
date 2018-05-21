#include <bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        int N,i,j;
        cin>>N;
        int B[N+1],W[N+1];
        for(i=1;i<=N;i++)
            cin>>W[i];
        for(i=1;i<=N;i++)
            cin>>B[i];
        int onex=0;
        int indx[N+1];
        memset(indx,0,sizeof(indx));
        vector < int > one , left , right;
 
        for(i=1;i<=N;i++)
        {
                if(W[i]-B[i]==1)
                {
                    onex++;
                    indx[i]++;
                    one.push_back(i);
                }
        }
 
        int leftcount=(N-onex)/2,rightcount=N-leftcount-onex;
         
        i=0;j=0;
        for(i=1;i<=N;i++)
        {
            if(j<leftcount&&indx[i]!=1)
            {
                indx[i]=2;
                j++;
            }
            if(j>leftcount)
                break;
        }
 
 
        for(i=1;i<=N;i++)
        {
            if(indx[i]==1)
            {
                for(j=0;j<B[i];j++)
                    cout<<"b";
                for(j;j<W[i];j++)
                    cout<<"w";
            }
            else if(indx[i]==2)
            {
                left.push_back(i);
                cout<<"w";
                for(j=0;j<B[i];j++)
                    cout<<"b";
                for(j;j<W[i]-1;j++)
                    cout<<"w";
            }
            else
            {
                right.push_back(i);
                for(j=0;j<W[i]-B[i]-1;j++)
                    cout<<"w";
                for(j=0;j<B[i];j++)
                     cout<<"b";
                cout<<"w";
            }
            cout<<endl;
        }
 
        for(i=0;i<left.size();i++)
            cout<<left[i]<<" ";
        for(i=0;i<one.size();i++)
            cout<<one[i]<<" ";
        for(i=0;i<right.size();i++)
            cout<<right[i]<<" ";
        cout<<endl;
 
}