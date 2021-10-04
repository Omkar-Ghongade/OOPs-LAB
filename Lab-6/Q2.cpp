#include<bits/stdc++.h>
using namespace std;

class fact{
    public:

    int rec_fact(int k)
    {
        if(k==1)
            return 1;
        else
            return k*rec_fact(k-1);
    }

    int itt_fact(int k)
    {
        int sum=1;
        for(int i=1;i<=k;i++)
        {
            sum*=i;
        }
        return sum;
    }

};

int main()
{
    int n;
    cin>>n;
    fact ft;
    cout<<ft.itt_fact(n)<<endl<<ft.rec_fact(n);
}