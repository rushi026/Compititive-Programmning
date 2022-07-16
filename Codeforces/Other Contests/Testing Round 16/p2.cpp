/*
	Problem link: https://codeforces.com/contest/1351/problem/B
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
	while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool temp = false;
        if(a==c)
        {
            if(b+d == a)
                temp =true;
        }
        if(a==d)
        {
            if(b+c == a)
                temp =true;
        }
        if(b==c)
        {
            if(a+d == b)
                temp =true;
        }
        if(b==d)
        {
            if(a+c == b)
                temp =true;
        }
        if(temp)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
