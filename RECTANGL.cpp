#include<bits/stdc++.h>
using namespace std;
 
int main()
{
        int T;
        cin>>T;
        while(T--)
        {
            int A[4];
            cin>>A[0]>>A[1]>>A[2]>>A[3];
            sort(A,A+4);
            int Ok = 0;
            if(A[0] == A[1])
                Ok++;
            if(A[2] == A[3])
                Ok++;
            if(Ok==2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
 
        }
}