#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    set <int> digit;
    int T;
    cin>>T;
    while(T--)
    {
        long long N,temp,i=1;
        scanf("%lld",&N);
        if(N==0)
        {
            printf("INSOMNIA\n");
            continue;
        }
        while(digit.size()!=10)
        {
            
            temp=N*i;
            while(temp)
            {
                digit.insert(temp%10);
                temp/=10;
            }
            i++;
        }
        digit.clear();
        printf("%lld\n",N*(i-1));
    }
}