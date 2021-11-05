// Object Creation Demonstration means Demonstartion of How Constructors are being Executed

#include<bits/stdc++.h>
using namespace std;

class vehicle{
    protected:
        int make;
        string model;
    
    public:
        vehicle()
        {
            cout<<"vehicle Constructor"<<endl;
        }

        ~vehicle()
        {
            cout<<"vehicle Destructor"<<endl;
        }
};

class car:public vehicle{
    private:
        int price;
        int seating;
        int capacity;
        char fuel_Type;
    
    public:
        // vehicle Obj is Created so It's constructor is called.
        car()
        {
            cout<<"car Constructor"<<endl;
        }

        ~car()
        {
            cout<<"car Destructor"<<endl;
        }
};

class Bike:public vehicle{
    private:
        int cylinders;
        int num_of_Gears;
        int fuel_tanks_Size;
    
    public:
        // vehicle Obj is Created so It's constructor is called.
        Bike()
        {
            cout<<"Bike Constructor"<<endl;
        }

        ~Bike()
        {
            cout<<"Bike Destructor"<<endl;
        }
};

class Audi:public car{
    private:
        int horse_Power;
    public:
        // car Obj is Created so It's constructor is called.
        Audi()
        {
            cout<<"Audi Constructor"<<endl;
        }

        ~Audi()
        {
            cout<<"Audi Destructor"<<endl;
        }
};


class GSA:public Bike{
    private:
        int engine_Power;
    public:
        // Bike Obj is Created so It's constructor is called.
        GSA()
        {;
            cout<<"GSA Constructor"<<endl;
        }

        ~GSA()
        {
            cout<<"Audi Obj Ended"<<endl;
            cout<<"GSA Destructor"<<endl;
        }
};

int main()
{
    cout<<"GSA Obj"<<endl;
    GSA obj;
    cout<<"Audi Obj"<<endl;
    Audi ob;
}