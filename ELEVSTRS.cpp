#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int T;
    cin>>T;
    while(T--)
    {
        float N,v1,v2;
        scanf("%f %f %f",&N,&v1,&v2);
        if((sqrt(2)*N)/v1>=2*(N/v2))
            printf("Elevator\n");
        else
            printf("Stairs\n");
    }
}