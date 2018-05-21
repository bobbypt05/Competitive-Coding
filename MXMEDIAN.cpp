#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
          int n,temp,count=1,i,l=0;
          cin>>n;
          int m=2*n-1;
          temp=n/2+1;
          int a[2*n];
          for(i=0;i<2*n;i++)
          {
              cin>>a[i];
          }
          sort(a,a+2*n);
          int max=a[2*n-temp];
          cout<<max<<endl;
          for(i=0;i<2*n;i++)
          {
 
            if(!(i%2))
                  cout<<a[l++]<<" ";
            else
             {
                 if(i!=2*n-1)
                  cout<<a[m--]<<" ";
                 else
                    cout<<a[m--]<<endl;
             }
          }
      }
 
}