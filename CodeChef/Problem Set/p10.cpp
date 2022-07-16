/*
    Problem link: https://www.codechef.com/problems/FFL
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int p[n],w[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>w[i];
        }
        int minD=0, minF=0;
        bool fd = true, ff = true;
        for(int i=0;i<n;i++)
        {
            if(w[i])
            {
                if(fd)
                {
                    minD = p[i];
                    fd = false;
                }
                if(p[i] < minD)
                    minD = p[i];
            }
            else
            {
                if(ff)
                {
                    minF = p[i];
                    ff = false;
                }
                if(p[i] < minF)
                    minF = p[i];
            }
        }
        if((minD+minF) <= (100-s))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
