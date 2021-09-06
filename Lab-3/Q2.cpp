#include<bits/stdc++.h>
using namespace std;

class threshold{
    private:
        string a,b;
        int per;
        bool cond=false;
    
    public:
        void input()
        {
            getline(cin,a);
            getline(cin,b);
            cin>>per;
        }

        void calc()
        {
            int cnt1=0,cnt2=0;
            for(int i=0;i<a.length();i++)
            {
                if(a[i]==' ')
                cnt1++;
            }
            cnt1++;

            for(int i=0;i<b.length();i++)
            {
                if(b[i]==' ')
                cnt2++;
            }
            cnt2++;

            string s1[cnt1];
            string s2[cnt2];

            string s="";
            int k=0;
            for(int i=0;i<a.length();i++)
            {
                if(a[i]!=' ')
                s+=a[i];
                else
                {
                    s1[k]=s;
                    s="";
                    k++;
                }
            }
            s1[k]=s;
            s="";
            k=0;
            for(int i=0;i<b.length();i++)
            {
                if(b[i]!=' ')
                s+=b[i];
                else
                {
                    s2[k]=s;
                    s="";
                    k++;
                }
            }
            s2[k]=s;

            int vis1[cnt1];
            for(int i=0;i<cnt1;i++)
                vis1[i]=0;
            
            int vis2[cnt2];
            for(int i=0;i<cnt2;i++)
                vis2[i]=0;
            
            int c1=0,c2=0;
            int n1=per*cnt1/100,n2=per*cnt2/100;
            for(int i=0;i<cnt1;i++)
            {
                for(int j=0;j<cnt2;j++)
                {
                    
                    if(s1[i].compare(s2[j])==0 && vis2[j]==0)
                    {
                        c1++;
                        vis2[j]=1;
                        break;
                    }
                }
            }

            for(int i=0;i<cnt2;i++)
            {
                for(int j=0;j<cnt1;j++)
                {
                    if(s2[i].compare(s1[j])==0 && vis1[j]==0)
                    {
                        c2++;
                        vis1[j]=1;
                        break;
                    }
                }
            }
            if(c1>=n1 && c2>=n2)
            cond=true;

        }

        void output()
        {
            if(cond)
            cout<<"1";
            else
            cout<<"0";
        }
};

int main()
{
    threshold th;
    th.input();
    th.calc();
    th.output();
}