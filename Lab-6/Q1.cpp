#include<bits/stdc++.h>
using namespace std;

class leap_year{

    private:
    int year;

    public:

    leap_year(int a)
    {
        year=a;
    }

    bool is_leap_year()
    {
        if((year%4==0 && year%100!=0) || year%400==0)
            return true;
        else
            return false;
    }

    ~leap_year()
    {
        year=0;
    }

};

int main()
{
    int n;
    cin>>n;
    leap_year ly(n);
    cout<<ly.is_leap_year();
}