#include<bits/stdc++.h>
using namespace std;
int main()
{
        int no_fd,f_h,i_f,count1=0;
        cin>>no_fd>>f_h;
        while(no_fd-->0)
        {
            cin>>i_f;
            if(i_f>f_h)
            {
                 count1++;
            }
            count1++;

        }
        cout<<count1<<endl;
        return 0;
}