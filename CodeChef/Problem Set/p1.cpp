/*
    Problem link : https://www.codechef.com/problems/INTEST/
*/

#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        if(t%k==0)
            ans++;
    }
    cout<<ans;
    return 0;
}
