#include<bits/stdc++.h>
using namespace std;
#define ll long long int

inline void Addition(ll a,ll b)
{
    cout<<a+b;
}

inline void Multiplication(ll a,ll b)
{
    cout<<a*b;
}

inline void Modulo(ll a,ll b)
{
    cout<<a%b;
}

inline void DecimaltoBinary(ll a)
{
    string s="";
    while(a)
    {
        if(a%2)
            s+='1';
        else
            s+='0';
        a/=2;
    }
    reverse(s.begin(),s.end());
    cout<<s;
}

inline void BinarytoDecimal(string s)
{
    ll sum=0;
    reverse(s.begin(),s.end());
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            sum+=(pow(2,i));
    }
    cout<<sum;
}

inline void Complement(string s)
{
    bool cond=false;
    reverse(s.begin(),s.end());
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='1' && cond)
            s[i]='0';
        else if(s[i]=='0' && cond)
            s[i]='1';
        
        if(s[i]=='1')
            cond=true;
    }
    reverse(s.begin(),s.end());
    cout<<s;
}

int main()
{
    ll ch;
    cout<<"1.Addition\n2.Multiplication\n3.Arithmetic Modulo\n4.Decimal to Binary\n5.Binary to Decimal\n6.2's Complement\nEnter Your Choice : ";
    cin>>ch;
    ll a,b;
    string s;
    switch(ch)
    {
        case 1:
            cin>>a>>b;
            Addition(a,b);
            break;
        case 2:
            cin>>a>>b;
            Multiplication(a,b);
            break;
        case 3:
            cin>>a>>b;
            Modulo(a,b);
            break;
        case 4:
            cin>>a;
            DecimaltoBinary(a);
            break;
        case 5:
            cin>>s;
            BinarytoDecimal(s);
            break;
        case 6:
            cin>>s;
            Complement(s);
            break;
        default:
            cout<<"Wrong Choice...";
    }
    return 0;
}