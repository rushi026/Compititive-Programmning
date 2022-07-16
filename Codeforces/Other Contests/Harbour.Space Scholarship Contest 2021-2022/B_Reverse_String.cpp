/*
    Problem:            B. Reverse String
    Problem link:       https://codeforces.com/contest/1553/problem/B
    Contest:            Harbour.Space Scholarship Contest 2021-2022
    Date:               23/07/2021
    Last Updated:       23/07/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(i=x; i>=y; i-=z)
#define ee                  '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)  
#define sll                	set<ll>
#define pll               	pair<ll, ll>
#define mll                	map<ll, ll>

/**********************************/

ll power(ll x, ll y, ll p = 1e9+7) 
{ 
    ll res = 1;
    x = x ;
    while(y>0) 
    { 
        if(y&1) {
            res = (res*x);
        }
        x = (x*x);
        y = y>>1;
    }
    return res;
}


/***********************************/

// void solve()
// {
//     string a,b;
//     cin>>a>>b;
//     ll i,j,k=0, n=a.length(), m=b.length();
//     loop(i,0,n,1){
//         k=0;
//         if(a[i] == b[k]){
//             bool temp = true;
//             loop(j,i+1,n,1){   
//                 k++;
//                 if(j == n-1 && a[j] == b[k]){
//                     ll t;
//                     rloop(t,j-2,0,1){
//                         k++;
//                         if(k == m) {cout<<"YES"<<ee; return;}
//                         if(a[j] == b[k]) continue;
//                         else {cout<<"NO"<<ee; return;}
//                     }
//                     if(k+1 == m) {cout<<"YES"; return;}
//                     else {cout<<"NO"<<ee; return;}
//                 }
//                 if(k == m) {cout<<"YES"<<ee; return;}
//                 if(a[j] == b[k]) continue;
//                 else if(a[j-1] == b[k]){
//                     ll t;
//                     k++;
//                     if(k == m) {cout<<"YES"<<ee; return;}
//                     rloop(t,j-2,0,1){
//                         if(a[t] == b[k]){
//                             k++;
//                             if(k == m) {cout<<"YES"<<ee; return;}
//                         }
//                         else{
//                             cout<<"NO"<<ee; return;
//                         }
//                     }
//                     if(k+1 == m) {cout<<"YES"<<ee; return;}
//                 }
//                 else{
//                     cout<<"NO"<<ee;
//                     return;
//                 }
//             }
//             rloop(j,i-1,0,1){
//                 k++;
//                 if(k == m) {cout<<"YES"<<ee; return;}
//                 if(a[j] == b[k]) continue;
//                 else {cout<<"NO"<<ee; return;}
//             }
//             if(k+1 == m) {cout<<"YES"<<ee; return;}
//             else {cout<<"NO"<<ee; return;}
//         }
//     }
// }

void solve(){
    string a,b;
    cin>>a>>b;
    vll t;
    ll i,j,k,l,n,m;
    n = a.length();
    m = b.length();

    loop(i,0,n,1) if(a[i] == b[0]) t.push_back(i);

    for(ll i: t){
        k=0;
        loop(j,i+1,n,1){
            k++; if(k == m) {cout<<"YES"<<ee; return;}
            bool temp = false;
            if(a[j] == b[k]) continue;
            else if(a[j-1] == b[k]){
                rloop(l,j-2,0,1){
                    k++; if(k == m) {cout<<"YES"<<ee; return;}
                    if(a[j] == b[k]) continue;
                    else {temp = true; break;}
                    // else{
                    //     cout<<"NO"<<ee;
                    // }
                }
                if(temp) break;
                if(k+1 == m) {cout<<"YES"<<ee; return;}
                // else {cout<<"NO"<<ee;}
            }
            else break;
            // else{
            //     cout<<"NO"<<ee;
            // }
        }
        rloop(j,i-1,0,1){
            k++; if(k == m) {cout<<"YES"<<ee; return;}
            if(a[j] == b[k]) continue;
            else break;
            // else {cout<<"NO"<<ee;}
        }
        if(k+1 == m) {cout<<"YES"<<ee; return;}
        // else {cout<<"NO"<<ee;}
    }
    cout<<"NO"<<ee;
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
