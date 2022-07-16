/*
    Problem:            Interesting XOR!
    Problem link:       https://www.codechef.com/MARCH21C/problems/IRSTXOR
    Contest:            March Challenge 2021 Division 3
    Date:               10/03/2021
    Last Updated:       10/03/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define endl                '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/

ll max_val(double n) {
    ll k = (ll)n;
    return pow(2,k+1);
}

string decimal_to_binary(ll n){
    string s = bitset<64> (n).to_string(); 
    const auto loc1 = s.find('1'); 
    if(loc1 != string::npos) 
        return s.substr(loc1); 
    return "0"; 
}

ll binary_to_decimal(string n){
    string num = n;
    ll dec_value = 0;
    ll base = 1;
    ll len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

ll c,a,b,d,i,n;
string binaryC, binaryB = "", binaryA = "";

void solve()
{
    binaryB = ""; binaryA = "";
    cin>>c;
    binaryC = decimal_to_binary(c);
    n = binaryC.length();
    bool temp = true;
    loop(i,0,n,1){
        if(binaryC[i] == '0'){
            binaryA += '1';
            binaryB += '1';
        }
        else {
            if(temp){
                binaryA += '1';
                binaryB += '0';
                temp = false;
            } 
            else {
                binaryB += '1';
                binaryA += '0';
            }
        }
    }
    a = binary_to_decimal(binaryA);
    b = binary_to_decimal(binaryB);
    cout<<a*b<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
