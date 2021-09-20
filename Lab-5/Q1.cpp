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

void insert(struct node* arr[],int a,int b)
{
    struct node* demo=new node(a);
    if(arr[b]==NULL)
        arr[b]=demo;
    else
    {
        struct node* samp=arr[b];
        while(samp->link!=NULL)
            samp=samp->link;
        samp->link=demo;
    }
}

int main()
{
    int n,nov;
    cin>>n>>nov;

    struct node* arr[n+1]={NULL};
    vector<int> out(n+1,0);

    while(nov--)
    {
        int a,b;
        cin>>a>>b;
        out[a]++;
        insert(arr,a,b);
    }
    int nor,l=0;
    cin>>nor;
    float k=((float)1/(float)n);
    vector<float> ans(n+1,k);
    while(l!=nor)
    {
        l++;
        vector<float> kr;
        for(int i=1;i<=n;i++)
        {
            struct node* samp=arr[i];
            float sum=0.0;
            while(samp!=NULL)
            {
                sum+=((float)ans[samp->data]/(float)out[samp->data]);
                samp=samp->link;
            }
            kr.push_back(sum);
        }
        for(int i=1;i<=n;i++)
        {
            ans[i]=kr[i-1];
        }
    }
    //for(int i=1;i<=n;i++)
        //cout<<ans[i]<<" ";
    vector<pair<float,int>> kp;
    for(int i=1;i<=n;i++)
        kp.push_back(make_pair(ans[i],i));
    sort(kp.begin(),kp.end());
    reverse(kp.begin(),kp.end());
    //for(int i=0;i<n;i++)
        //cout<<kp[i].first<<" "<<kp[i].second<<endl;
    int c,m=0;
    cin>>c;
    while(c--)
    {
        cout<<kp[m].second<<endl;
        m++;
    }
}
