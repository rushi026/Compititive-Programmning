/*
    Problem link: https://www.codechef.com/MAY13/problems/WITMATH/
*/
#include<iostream>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);

}

int phi(int a)
{
    int ans=0;
    for(int i=2; i<a; i++)
    {
        if(gcd(a,i) == 1)
        {
            ans++;
        }
    }
    return ans+1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n == 2)
        {
            cout<<2<<endl;
            continue;
        }
        int ans;
        float div, previousDiv = 0.5;
        for(int i=3; i<=n; i++)
        {
            div = (phi(i)/(float)i);
            if(div >= previousDiv)
            {
                previousDiv = div;
                ans = i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
