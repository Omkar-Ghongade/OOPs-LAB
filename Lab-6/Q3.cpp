#include<bits/stdc++.h>
using namespace std;

class base_change{
    private:
    int a,b,c,sum;
    public:

    base_change(int x,int y,int z)
    {
        a=x,b=z,c=y,sum=0;
    }

    string change_base()
    {
        string kl=to_string(a);
        reverse(kl.begin(),kl.end());
        for(int i=0;i<kl.length();i++)
        {
            sum+=(pow(c,i)*(kl[i]-'0'));
        }
        string s="";
        while(sum>0)
        {
            int c=sum%b;
            string s1=to_string(c);
            s+=s1;
            sum/=b;
        }
        reverse(s.begin(),s.end());
        return s;
    }

    ~base_change(){}

};

int main()
{
    int n,l,k;
    cin>>n>>l>>k;
    base_change bc(n,l,k);
    cout<<bc.change_base();
}