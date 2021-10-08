#include<bits/stdc++.h>
using namespace std;

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
	Bank bk;
	int k;
	cout<<"===================================================="<<endl;
	cout<<"Welcome To My Bank ATM "<<endl;
	cout<<"Your Account Balance is : "<<bk.bal<<endl;
	cout<<"===================================================="<<endl;
	cout<<"Enter1 to withdraw, Enter 2 to change the password, Enter 3 to exit"<<endl;
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
				bk.pswd=s1;
				cout<<"Password Changed Successfully"<<endl;
				cout<<"===================================================="<<endl;
			}
			else
			{
				cout<<"Wrong Old Password."<<endl;
			}
		}
		else if(k==3)
		{
			cout<<"Thank You, Have a Great Day :)"<<endl;
			cout<<"===================================================="<<endl;
			exit(0);
		}
		cout<<"===================================================="<<endl;
		cout<<"Welcome To My Bank ATM "<<endl;
		cout<<"Your Account Balance is : "<<bk.bal<<endl;
		cout<<"===================================================="<<endl;
		cout<<"Enter1 to withdraw, Enter 2 to change the password, Enter 3 to exit"<<endl;
		cout<<"===================================================="<<endl;
		cin>>k;
	}
}
