#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count1=0;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        
        count1++;
    }
    cout<<count1<<endl;
    return 0;
}