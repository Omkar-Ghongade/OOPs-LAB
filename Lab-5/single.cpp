#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* link;
    node(int a)
    {
        data=a;
        link=NULL;
    }
};

class Single{

    public:

    bool isEmpty(struct node* head)
    {
        if(head==NULL)
        return true;
        return false;
    }

    struct node* insertAF(struct node* head,int ele)
    {
        struct node* demo=new node(ele);
        if(head==NULL)
        head=demo;
        else
        {
            demo->link = head;
            head=demo;
        }
        return head;
    }

    struct node* insertAL(struct node* head,int ele)
    {
        struct node* demo=new node(ele);
        if(head==NULL)
        head=demo;
        else
        {
            struct node* samp=head;
            while(samp->link!=NULL)
                samp=samp->link;
            samp->link=demo;
        }
        return head;
    }

    struct node* removeRF(struct node* head)
    {
        if(head==NULL)
        {
            cout<<"ListEmptyException";
        }
        else
        {
            head=head->link;
        }
        return head;
    }

    struct node* removeRL(struct node* head)
    {
        if(head==NULL)
        {
            cout<<"ListEmptyException";
        }
        else if(head->link==NULL)
        {
            head=NULL;
        }
        else
        {
            struct node* demo=head;
            while(demo->link->link!=NULL)
                demo=demo->link;
            demo->link=NULL;
        }
        return head;
    }

    int lL(struct node* head)
    {
        if(head==NULL)
        return INT_MIN;
        struct node* demo=head;
        while(demo->link!=NULL)
            demo=demo->link;
        return demo->data;
    }

    int rR(struct node* head)
    {
        if(head==NULL)
        return INT_MIN;
        return head->data;
    }

    struct node* rev(struct node* head)
    {
        if(head->link==NULL)
        return head;
        else if(head==NULL)
        return head;
        {
            vector<int> arr;
            struct node* demo=head;
            while(demo!=NULL)
            {
                arr.push_back(demo->data);
                demo=demo->link;
            }
            reverse(arr.begin(),arr.end());
            struct node* dem=head;
            int k=0;
            while(head!=NULL)
            {
                head->data=arr[k];
                k++;
                head=head->link;
            }
            return dem;
        }
    }

    void printF(struct node* head)
    {
        struct node* Head=head;
        while(Head!=NULL)
        {
            cout<<Head->data<<" -> ";
            Head=Head->link;
        }
        cout<<"NULL";
    }

};