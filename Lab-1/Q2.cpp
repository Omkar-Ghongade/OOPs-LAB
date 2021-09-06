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
#define ll long long
#define nline "\n"

class Search{
    private :
        ll n;
        vector<ll> arr;  // all the 3 are private so they can be accessed only within the methods of this class only
        ll k;
    public:

        void input()
        {
            cin>>n; // Enter the size of the array
            for(ll i=0;i<n;i++)
            {
                ll a;
                cin>>a;
                arr.push_back(a); // enter the elements of the whole array
            }
            cin>>k; // enter the key element
        }
        void Is_Present_or_Not()
        {
            bool cond=false;
            for(ll i=0;i<n;i++)
                if(arr[i]==k) // condition for checking weather it is present or not
                {
                    cond=true;
                    break;
                }
            
            if(cond)
            cout<<"1"<<nline; // 1 means the element is present.
            else
            cout<<"-1"<<nline; // -1 means the element is not present.
        }
};

int main()
{
    Search s;
    s.input(); // for inputing the data
    s.Is_Present_or_Not(); // for checking the data is present or not
}