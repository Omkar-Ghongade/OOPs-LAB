#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* link;
    Node(int a)
    {
        data=a;
        link=NULL;
    }
};

class Circular{

    public:

    bool isEmpty(struct Node* head)
    {
        if(head==NULL)
        return true;
        return false;
    }

    struct Node* insertAF(struct Node* head,int ele)
    {
        struct Node* demo=new Node(ele);
        if(head==NULL)
        {
            head=demo;
            demo->link=head;
        }
        else
        {
            struct Node* dem=head;
            while(dem->link!=head)
                dem=dem->link;
            dem->link=demo;
            demo->link=head;
            head=demo;
        }
        return head;
    }

    struct Node* insertAL(struct Node* head,int ele)
    {
        struct Node* demo=new Node(ele);
        if(head==NULL)
        {
            head=demo;
            demo->link=head;
        }
        else
        {
            struct Node* dem=head;
            while(dem->link!=head)
                dem=dem->link;
            dem->link=demo;
            demo->link=head;
        }
        return head;
    }

    struct Node* removeRF(struct Node* head)
    {
        if(head==NULL)
        {
            cout<<"ListEmptyException";
        }
        else if(head->link==head)
            head=NULL;
        else
        {
            struct Node* demo=head;
            while(demo->link!=head)
            {
                demo=demo->link;
            }
            head=head->link;
            demo->link=head;
        }
        return head;
    }

    struct Node* removeRL(struct Node* head)
    {
        if(head==NULL)
        {
            cout<<"ListEmptyException";
        }
        else if(head->link==head)
            head==NULL;
        else if(head->link->link==head)
            head->link=head;
        else
        {
            struct Node* demo=head;
            while(demo->link->link==head)
                demo=demo->link;
            demo->link=head;
        }
        return head;
    }

    int lL(struct Node* head)
    {
        if(head==NULL)
            return INT_MIN;
        struct Node* demo=head;
        while(demo->link!=head)
            demo=demo->link;
        return demo->data;
    }

    int rR(struct Node* head)
    {
        if(head==NULL)
        return INT_MIN;
        return head->data;
    }

    struct Node* rev(struct Node* head)
    {
        if(head==NULL || head->link==head)
            return head;
        vector<int> arr;
        struct Node* demo=head;
        while(demo->link!=head)
        {
            arr.push_back(demo->data);
            demo=demo->link;
        }
        arr.push_back(demo->data);
        reverse(arr.begin(),arr.end());
        struct Node* dem=head;
        int k=0;
        while(head->link!=dem)
        {
            head->data=arr[k];
            k++;
            head=head->link;
        }
        head->data=arr[k];
        return dem;
    }

    void printF(struct Node* head)
    {
        if(head==NULL)
        {
            cout<<"NULL";
        }
        else
        {
            struct Node* demo=head;
            while(demo->link!=head)
            {
                cout<<demo->data<<" -> ";
                demo=demo->link;
            }
            cout<<demo->data<<" -> ";
            cout<<"NULL";
        }
    }

};