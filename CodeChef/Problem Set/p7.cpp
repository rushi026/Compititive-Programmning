/*
    Problem link : https://www.codechef.com/problems/COPS
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,x,y,ans=0;
        cin>>m>>x>>y;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            a[i]--;
        }
        bool redzone[100];
        for(int i=0;i<100;i++)
        {
            redzone[i]=false;
        }
        for(int i=0;i<m;i++)
        {
            int bottom,top;
            bottom = a[i]-(x*y);
            if(bottom<0)
            {
                bottom = 0;
            }
            top = a[i] + (x*y);
            if(top>99)
            {
                top=99;
            }
            for(int j=bottom; j<=top; j++)
            {
                redzone[j] = true;
            }
        }
        for(int i=0;i<100;i++)
        {
            if(!redzone[i])
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
