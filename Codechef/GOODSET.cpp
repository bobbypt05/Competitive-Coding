#include<bits/stdc++.h>
using namespace std;
vector <int> a;
int main()
{
    int T,i;
    for(i=3;i<=100000;i++)
    {
        if(i%2)
            a.push_back(i);
        if(a.size()==103)
            break;
    }
    cin>>T;
    while(T--)
    {
       int i,N;
       cin>>N;
       for(i=0;i<N;i++)
           cout<<a[i]<<" ";
        cout<<endl;
    }
}
 