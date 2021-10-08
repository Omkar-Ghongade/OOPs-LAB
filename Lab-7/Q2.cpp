#include<bits/stdc++.h>
using namespace std;

struct Node{
    int widbal;
    struct Node* link;
};

struct node{
    string padcng;
    struct node* link;
};

struct nOde{
    string padcng;
    int widbal;
    struct nOde* link;
};

class Bank{

	private:
	int bal;
	string pswd;

	public:

	Bank()
	{
		bal=10000;
		pswd="default";
	}

	friend int main();
};

int main()
{
    struct Node* head=NULL;
    struct node* head1=NULL;
    struct nOde* head2=NULL;
	Bank bk;
	int k;
	cout<<"===================================================="<<endl;
	cout<<"Welcome To My Bank ATM "<<endl;
	cout<<"Your Account Balance is : "<<bk.bal<<endl;
	cout<<"===================================================="<<endl;
	cout<<"Enter1 to withdraw, Enter 2 to change the password, Enter 3 to history, Enter 4 to Exit."<<endl;
	cout<<"===================================================="<<endl;
	cin>>k;
	while(1)
	{
		if(k==1)
		{
			cout<<"Enter the amount you want to withdraw : ";
			int amt;
			cin>>amt;
			if(amt<=bk.bal)
			{
				bk.bal-=amt;
				cout<<"Thank You for using My ATM, Please Collect Money"<<endl;
				cout<<"Your Updated Balance is: "<<bk.bal<<endl;
                struct Node* demo=(struct Node*)malloc(sizeof(struct Node));
                if(head==NULL)
                {
                    demo->widbal=amt;
                    demo->link=NULL;
                    head=demo;
                }
                else
                {
                    struct Node* samp=head;
                    while(head->link!=NULL)
                        head=head->link;
                    head->link=demo;
                    demo->widbal=amt;
                    demo->link=NULL;
                }
                struct nOde* deso=(struct nOde*)malloc(sizeof(struct nOde));
                if(head2==NULL)
                {
                    deso->widbal=amt;
                    deso->link=NULL;
                    head2=deso;
                }
                else
                {
                    struct nOde* samp=head2;
                    while(head2->link!=NULL)
                        head2=head2->link;
                    head2->link=deso;
                    deso->widbal=amt;
                    deso->padcng='\0';
                    deso->link=NULL;
                }
			}
			else
			{
				cout<<"Insufficient Balance."<<endl;
			}
		}
		else if(k==2)
		{
			cout<<"Enter the Old Password : ";
			string s;cin>>s;
			if(s.compare(bk.pswd)==0)
			{
				cout<<"Enter the New Password : ";
				string s1;
				cin>>s1;
                string s2=bk.pswd;
				bk.pswd=s1;
				cout<<"Password Changed Successfully"<<endl;
				cout<<"===================================================="<<endl;
                struct node* demo=(struct node*)malloc(sizeof(struct node));
                if(head1==NULL)
                {
                    demo->padcng=s2;
                    demo->link=NULL;
                    head1=demo;
                }
                else
                {
                    struct node* samp=head1;
                    while(head1->link!=NULL)
                        head1=head1->link;
                    head1->link=demo;
                    demo->padcng=s2;
                    demo->link=NULL;
                }
                struct nOde* deso=(struct nOde*)malloc(sizeof(struct nOde));
                if(head2==NULL)
                {
                    deso->padcng=s1;
                    deso->link=NULL;
                    head2=deso;
                }
                else
                {
                    struct nOde* samp=head2;
                    while(head2->link!=NULL)
                        head2=head2->link;
                    head2->link=deso;
                    deso->padcng=s1;
                    deso->widbal=-1;
                    deso->link=NULL;
                }
			}
			else
			{
				cout<<"Wrong Old Password."<<endl;
			}
		}
        else if(k==3)
        {
            cout<<"Enter 1 for withdraw hisotry, Enter 2 for password change history, Enter 3 for both mix history."<<endl;
            int ch;
            cin>>ch;
            if(ch==1)
            {
                if(head==NULL)
                    cout<<"No Transactions Yet.."<<endl;
                else
                {
                    struct Node* demo=head;
                    while(demo!=NULL)
                    {
                        cout<<demo->widbal<<endl;
                        demo=demo->link;
                    }
                }
            }
            else if(ch==2)
            {
                if(head1==NULL)
                    cout<<"No Password Changes Yet.."<<endl;
                else
                {
                    struct node* demo=head1;
                    while(demo!=NULL)
                    {
                        cout<<demo->padcng<<endl;
                        demo=demo->link;
                    }
                }
            }
            else if(ch==3)
            {
                if(head2==NULL)
                    cout<<"No Transactions Yet.."<<endl;
                else
                {
                    struct nOde* demo=head2;
                    while(demo!=NULL)
                    {
                        if(demo->widbal!=-1)
                        cout<<demo->widbal<<endl;
                        else
                        cout<<demo->padcng<<endl;
                        demo=demo->link;
                    }
                }
            }
            cout<<"===================================================="<<endl;
        }
		else if(k==4)
		{
			cout<<"Thank You, Have a Great Day :)"<<endl;
			cout<<"===================================================="<<endl;
			exit(0);
		}
		cout<<"===================================================="<<endl;
		cout<<"Welcome To My Bank ATM "<<endl;
		cout<<"Your Account Balance is : "<<bk.bal<<endl;
		cout<<"===================================================="<<endl;
		cout<<"Enter1 to withdraw, Enter 2 to change the password, Enter 3 to history, Enter 4 to Exit."<<endl;
		cout<<"===================================================="<<endl;
		cin>>k;
	}
}
