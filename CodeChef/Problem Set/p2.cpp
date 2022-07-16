/*
    Problem link : https://www.codechef.com/problems/CNOTE
*/

#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        long int n;
        cin>>x>>y>>k>>n;
        int p[n],c[n];
        bool temp = false;
        for(int i=0; i<n; i++)
        {
            cin>>p[i]>>c[i];
        }
        for(int i=0;i<n;i++)
        {
            if((p[i] >= (x-y)) && (c[i] <= k))
            {
                temp = true;
                break;
            }
        }
        if(temp)
        {
            cout<<"LuckyChef"<<endl;
        }
        else
        {
            cout<<"UnluckyChef"<<endl;
        }
    }
    return 0;
}
