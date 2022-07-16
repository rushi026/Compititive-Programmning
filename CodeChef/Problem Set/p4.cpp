#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        bool t= true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0 && i<n/2)
            {
                if((a[i] != a[i-1]) || (a[i] != a[i-1]+1))
                {
                    t = false;
                }
            }
        }

        int temp = 0;
        for(int i=0;i<n/2;i++)
        {
            if(a[i] == a[n-i-1])
            {
                temp++;
            }
        }
        if((temp == n/2) && t)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
