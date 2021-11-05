// Object Creation Demonstration means Demonstartion of How Constructors are being Executed

#include<bits/stdc++.h>
using namespace std;

//Base Class
class vehicle{
    protected:
        int make;
        string model;
    
    public:
    void printDetails()
    {
        cout<<"In Vehicle class printDetails"<<endl;
    }

    friend class GSA;
    friend class Audi;
};

//Derived Class 1
class car:public vehicle{
    protected:
        int price;
        int seating;
        int capacity;
        char fuel_Type;
    
    friend class Audi;
};

//Derived Class 2
class Bike:public vehicle{
    protected:
        int cylinders;
        int num_of_Gears;
        int fuel_tanks_Size; 

    friend class GSA;   
};

//Derived Derived Class 3
class Audi:public car{
    protected:
        int horse_Power;
    public:

        void printDetails()
        {
            cout<<"In Audi Class"<<endl;
            cout<<"Make : "<<make<<endl;
            cout<<"Model : "<<model<<endl;
            cout<<"Price : "<<price<<endl;
            cout<<"Seating : "<<seating<<endl;
            cout<<"Capacity : "<<capacity<<endl;
            cout<<"Fuel Type : "<<fuel_Type<<endl;
            cout<<"Horse Power : "<<horse_Power<<endl;
        }

    friend int main();
};

//Derived Derived Class 4
class GSA:public Bike{
    protected:
        int engine_Power;
    public:
        
        void printDetails()
        {
            cout<<"In GSA Class"<<endl;
            cout<<"Make : "<<make<<endl;
            cout<<"Model : "<<model<<endl;
            cout<<"Cylinder : "<<cylinders<<endl;
            cout<<"Number of Gears : "<<num_of_Gears<<endl;
            cout<<"Fuel Tanks Size : "<<fuel_tanks_Size<<endl;
            cout<<"Engine Power : "<<engine_Power<<endl;
        }

    friend int main();
};

int main()
{
    GSA b1;
    cout<<"Enter Details of Bike : "<<endl;
    cin>>b1.make>>b1.model>>b1.cylinders>>b1.num_of_Gears>>b1.fuel_tanks_Size>>b1.engine_Power;

    b1.printDetails();cout<<endl<<endl;


    Audi c1;
    cout<<"Enter Details of Car : "<<endl;
    cin>>c1.capacity>>c1.fuel_Type>>c1.horse_Power>>c1.make>>c1.make>>c1.price>>c1.seating;

    cout<<endl<<endl<<endl;
    // Demonstration of Virtual Function.
    vehicle* c2;
    Audi c3;
    c2=&c3;
    c2->printDetails();
    cout<<endl<<endl;
    c1.printDetails();

}