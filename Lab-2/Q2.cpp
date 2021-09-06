#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Student{
    private:
        string name;
        ll mm,dd,yy;
        ll roll;
    public:

        void input()
        {
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enetr Date of birth (dd mm yy) : ";
            cin>>dd>>mm>>yy;
            cout<<"Enter Roll Number : ";
            cin>>roll;
        }

        void GetAgeToday1(ll d,ll m,ll y)
        {
            input();
            cout<<endl<<endl;
            ll agey=abs(y-yy-1),agem;
            if(mm<m)
            {
                agem=abs(m-12)+mm;
            }
            else
            {
                agem=abs(12-mm+m);
            }
            map<int ,int> mp;
            mp[1]=31;
            mp[2]=28;
            mp[3]=31;
            mp[4]=30;
            mp[5]=31;
            mp[6]=30;
            mp[7]=31;
            mp[8]=31;
            mp[9]=30;
            mp[10]=31;
            mp[11]=30;
            mp[12]=31;
            int aged;
            aged=abs(d+mp[m]-dd);
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<agey<<" Years "<<agem<<" Months "<<aged<<" Days"<<endl;
            cout<<"Roll Number : "<<roll<<endl;
        }
    

};

int main()
{
    time_t now=time(0);
    tm* dt=localtime(&now);
    ll mon=dt->tm_mon;
    ll dat=dt->tm_mday;
    ll year=1900+dt->tm_year;
    Student s1;
    s1.GetAgeToday1(dat,mon,year);
}