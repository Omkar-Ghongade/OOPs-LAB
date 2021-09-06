#include<bits/stdc++.h>
using namespace std;
#define ll double

class taylors_theorem{
    private:
        ll len;
        ll x;
        ll fac=1;
        ll sum=0;

        ll fact(ll k)
        {
            if(k<=1)
            return 1;

            fac*=((k-1)*(k));
            return fac;
        }
    public:

        void input()
        {
            cin>>len>>x;
        }

        void summ()
        {
            ll sign=-1;
            for(int i=1;i<=len;i+=2)
            {
                ll p=1;
                ll fac=fact(i);
                sign*=(-1);
                sum+=sign*p/fac;
            }
        }

        void output()
        {
            cout<<"Sin"<<x<<" is : "<<sum;
        }
};

int main()
{
    taylors_theorem tt;
    tt.input();
    tt.summ();
    tt.output();
}