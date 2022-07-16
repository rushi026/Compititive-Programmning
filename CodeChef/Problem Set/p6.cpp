/*
    Problem Link : https://www.codechef.com/problems/LECANDY
*/

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int c;
        cin>>n>>c;
        int total=0, a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            total += a[i];
        }
        if(total >= c)
        {
            cout<<"No"<<endl;
        }
        else {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
