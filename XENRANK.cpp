#include<bits/stdc++.h>
using namespace std;
int main()
{
     int T;
     cin>>T;
     while(T--)
     {
         long long int U,V,A;
         cin>>U>>V;
         A=U+V;
         cout<<U+(A*(A+1))/2+1<<endl;
     }
 
}
 