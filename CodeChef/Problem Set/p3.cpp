#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int bit=1,nibble=0,byte=0;
        int N;
        cin>>N;
        for(int i=1;i<N;i++)
        {
            if(i%2==0 && bit>0)
            {
                nibble+=bit;
                bit=0;
            }
            if(i%8==0 && nibble>0)
            {
                byte+=nibble;
                nibble=0;
            }
            if(i%16==0 && byte>0)
            {
                bit=bit+(2*byte);
                byte=0;
            }
        }
        cout<<bit<<" "<<nibble<<" "<<byte<<endl;
    }
    return 0;
}
