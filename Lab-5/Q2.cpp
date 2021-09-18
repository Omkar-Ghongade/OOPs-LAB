#include<bits/stdc++.h>
#include "single.cpp"
#include "circular.cpp"
using namespace std;

int main()
{
    while(1)
    {
        int ch;
        cout<<"1. Single Linked List\n 2. Circular Linked List\nEnter Your Choice : ";
        cin>>ch;
        if(ch==1)
        {
            Single SL;
            struct node* head=NULL;
            while(1)
            {
                int Ch;
                cout<<"1-Check for Empty Condition\n2-Add first element O\n3-Add last element O\n4-Remove the first element\n5-Remove the last element\n6-Return the Last element in the List\n7-Return the first element in the List\n8-Reverse the Linked List\n9-Exit\nEnter Your Choice : ";
                cin>>Ch;
                switch (Ch)
                {
                    case 1:
                        SL.isEmpty(head);
                        break;
                    case 2:
                    {
                        int ele;
                        cin>>ele;
                        head=SL.insertAF(head,ele);
                        break;
                    }
                    case 3:
                    {
                        int ele;
                        cin>>ele;
                        head=SL.insertAL(head,ele);
                        break;
                    }
                    case 4:
                        head=SL.removeRF(head);
                        break;
                    case 5:
                        head=SL.removeRL(head);
                        break;
                    case 6:
                    {
                        if(SL.lL(head)==INT_MIN)
                        cout<<"List Empty";
                        else
                        {
                            cout<<SL.lL(head);
                            break;
                        }
                        
                    }
                    case 7:
                        if(SL.rR(head)==INT_MIN)
                        cout<<"List Empty";
                        else
                        {
                            cout<<SL.rR(head);
                            break;
                        }
                    case 8:
                    {
                        
                        if(head==NULL)
                        cout<<"ListEmptyException";
                        else
                        head=SL.rev(head);
                        break;
                    }
                    case 9:
                        exit(0);
                }
                cout<<endl<<endl<<"Your List is : ";
                SL.printF(head);
                cout<<endl<<endl;
            }
        }
        else if(ch==2)
        {
            Circular CL;
            struct Node* head=NULL;
            while(1)
            {
                int Ch;
                cout<<"1-Check for Empty Condition\n2-Add first element O\n3-Add last element O\n4-Remove the first element\n5-Remove the last element\n6-Return the Last element in the List\n7-Return the first element in the List\n8-Reverse the Linked List\n9-Exit\nEnter Your Choice : ";
                cin>>Ch;
                switch (Ch)
                {
                    case 1:
                        CL.isEmpty(head);
                        break;
                    case 2:
                    {
                        int ele;
                        cin>>ele;
                        head=CL.insertAF(head,ele);
                        break;
                    }
                    case 3:
                    {
                        int ele;
                        cin>>ele;
                        head=CL.insertAL(head,ele);
                        break;
                    }
                    case 4:
                        head=CL.removeRF(head);
                        break;
                    case 5:
                        head=CL.removeRL(head);
                        break;
                    case 6:
                    {
                        if(CL.lL(head)==INT_MIN)
                        cout<<"List Empty";
                        else
                        {
                            cout<<CL.lL(head);
                            break;
                        }
                        
                    }
                    case 7:
                        if(CL.rR(head)==INT_MIN)
                        cout<<"List Empty";
                        else
                        {
                            cout<<CL.rR(head);
                            break;
                        }
                    case 8:
                    {
                        
                        if(head==NULL)
                        cout<<"ListEmptyException";
                        else
                        head=CL.rev(head);
                        break;
                    }
                    case 9:
                        exit(0);
                }
                cout<<endl<<endl<<"Your List is : ";
                CL.printF(head);
                cout<<endl<<endl;
            }
        }
        else
        cout<<"Wrong Choice..\nRe-Enter It\n\n";
    }
}