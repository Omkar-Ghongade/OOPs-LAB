 /*
  ___  __  __ _  __    _    ____
 / _ \|  \/  | |/ /   / \  |  _ \
| | | | |\/| | ' /   / _ \ | |_) |
| |_| | |  | | . \  / ___ \|  _ <
 \___/|_|  |_|_|\_\/_/   \_\_| \_\
  ____ _   _  ___  _   _  ____    _    ____  _____
 / ___| | | |/ _ \| \ | |/ ___|  / \  |  _ \| ____|
| |  _| |_| | | | |  \| | |  _  / _ \ | | | |  _|
| |_| |  _  | |_| | |\  | |_| |/ ___ \| |_| | |___
 \____|_| |_|\___/|_| \_|\____/_/   \_\____/|_____|
    _    ____ ____   ___  _ _  ___   ___  _  ___   ___   ___   ___
   / \  |  _ \___ \ / _ \/ / |/ _ \ / _ \/ |/ _ \ / _ \ / _ \ / _ \
  / _ \ | |_) |__) | | | | | | | | | | | | | | | | | | | (_) | | | |
 / ___ \|  __// __/| |_| | | | |_| | |_| | | |_| | |_| |\__, | |_| |
/_/   \_\_|  |_____|\___/|_|_|\___/ \___/|_|\___/ \___/   /_/ \___/
  ____ ____  _____      ____
 / ___/ ___|| ____|    | __ )
| |   \___ \|  _| _____|  _ \
| |___ ___) | |__|_____| |_) |
 \____|____/|_____|    |____/
 
 */


#include<bits/stdc++.h>
using namespace std;

class Prime{
    private:
        int n;
    public:

        void input()
        {
            cin>>n; // Input the number
        }

/* The Prime Number Series is Like 2 3 5 7 11 13 17 19....
   So if untill 5 the series is random but after 5 thr difference between the number is always 2 and 4
   eg 7-5=2 then 11-7=4 then 13-11=2 then 17-13=4 and it will go on...
   so alternatively adding 2 and 4
*/

        void is_Pime()
        {
            // Basic conditions before 5
            if(n<2)
            cout<<"-1";
            else if(n<=3 & n>2)
            cout<<"2";
            else if(n>3 && n<=5)
            cout<<"3";
            else if(n>5 && n<=7)
            cout<<"5";
            // The main Conditio of adding 2 and 4 alternatively
            else
            {
                int i,k=0;
                for(i=5;i<n;)
                {
                    if(k==0)
                    {
                        if((i+2)<n)  // i+2 will be done at odd time
                        i+=2;
                        else
                        break;
                        k=1;
                    }
                    else if(k==1)
                    {
                        if((i+4)<n) // i+4 will be done at even time
                        i+=4;
                        else
                        break;
                        k=0;
                    }
                }
                cout<<i;
            }
            
        }
};

int main()
{
    Prime Pr;
    Pr.input(); // for inputing the number
    Pr.is_Pime(); // for finding the neartes prime number to the entered number
}