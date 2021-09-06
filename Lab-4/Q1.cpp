#include<bits/stdc++.h>
using namespace std;

class Anagram{
    private:
    string a,b;
    bool cond=true;

    public:

    void input()
    {
        getline(cin,a);
        getline(cin,b);
    }

    string Sort(string s)
    {
        int i,j;
        for(i=0;i<s.length();i++)
            for(j=0;j<s.length();j++)
            {
                if(s[i]>s[j])
                {
                    char ch=s[i];
                    s[i]=s[j];
                    s[j]=ch;
                }
            }
        return s;
    }

    void calc()
    {
        a=Sort(a);
        b=Sort(b);
        for(int i=0;i<b.length();i++)
        {
            if(b[i]!=a[i])
            cond=false;
        }
    }

    void validate()
    {
        if(cond)
            cout<<"Anagram";
        else
            cout<<"Not Anagram";
    }
};

int main()
{
    Anagram is_Ana;
    is_Ana.input();
    is_Ana.calc();
    is_Ana.validate();
}