#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Winner{
    private:
    int n;
    int finalAns;

    public:

    void input()
    {
        cin>>n;
    }

    void calc()
    {
        ll arr[n][5];
        stack<ll> win;
        for(ll i=0;i<n;i++)
        {
            win.push(n-i);
            for(ll j=0;j<5;j++)
            {
                cin>>arr[i][j];
            }
        }
        while(win.size()!=1)
        {
            stack<ll> ans;
            while(win.size()>1)
            {
                ll p1=win.top();
                win.pop();
                ll p2=win.top();
                win.pop();
                ll m1=min(p1,p2);
                ll m2=max(p1,p2);
                p1=m1;
                p2=m2;
                ll c1=0,c2=0;
                for(ll i=0;i<5;i++)
                {
                    if(arr[p1-1][i]>=arr[p2-1][i])
                    c1++;
                    else
                    c2++;
                }
                if(c1>=c2)
                ans.push(p1);
                else
                ans.push(p2);
            }
            if(win.size()==1)
            {
                ans.push(win.top());
                win.pop();
            }
            while(ans.size()!=0)
            {
                win.push(ans.top());
                ans.pop();
            }
        
        
        }
        finalAns=win.top();
    }

    void ouput()
    {
        cout<<"Winner is Team : "<<finalAns<<endl;
    }
};

int main()
{
    Winner win;
    win.input();
    win.calc();
    win.ouput();
}