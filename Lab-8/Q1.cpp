#include<bits/stdc++.h>
using namespace std;
#define size 100
#define ll float
const int n=3,m=3;

class matrix_operations{

    private:
        ll mat[3][3];

    public:

    matrix_operations(){
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                mat[i][j]=0;
        }
    }

    matrix_operations(int k[n][m]){
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                mat[i][j]=k[i][j];
        }
    }


    matrix_operations operator+(matrix_operations const &op){
        matrix_operations ret;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                ret.mat[i][j]=mat[i][j]+op.mat[i][j];
        return ret;
    }

    matrix_operations operator-(matrix_operations const &op){
        matrix_operations ret;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                ret.mat[i][j]=mat[i][j]-op.mat[i][j];
        return ret;
    }

    matrix_operations operator*(matrix_operations const &op){
        matrix_operations ret;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int sum=0;
                for(int k=0;k<m;k++)
                    sum+=(mat[i][k]*op.mat[k][j]);
                ret.mat[i][j]=sum;
            }
        }
        return ret;
    }

    matrix_operations transpose()
    {
        matrix_operations res;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                res.mat[i][j]=mat[j][i];
        return res;
    }


    matrix_operations inverse()
    {
        ll determinant=0;
        for(int i=0;i<3;i++)
            determinant+=((mat[0][i]*((mat[1][(i+1)%3]*mat[2][(i+2)%3])-(mat[1][(i+2)%3]*mat[2][(i+1)%3]))));
        
        matrix_operations res;
        if(determinant!=0)
        for (int i=0;i<3; i++)
        {
            for (int j=0;j<3;j++)
                res.mat[i][j]=((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3]*mat[(j+2)%3][(i+1)%3]))/determinant;
        }
        return res;
    }

    int rank()
    {
        ll determinant=0;
        for(int i=0;i<3;i++)
            determinant+=((mat[0][i]*((mat[1][(i+1)%3]*mat[2][(i+2)%3])-(mat[1][(i+2)%3]*mat[2][(i+1)%3]))));
        if(determinant==0)
        {
            if(((mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]))==0)
                return 1;
            else
                return 2;
        }
        else
            return 3;
    }

    void printer()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<mat[i][j]<<"\t";
            cout<<endl;
        }
    }

    ~matrix_operations(){

    }

};

int main()
{
    int ma[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>ma[i][j];
    matrix_operations op1(ma);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>ma[i][j];
    matrix_operations op2(ma);
    matrix_operations ans=op1+op2;
    ans.printer();
    cout<<endl;
    matrix_operations ans1=op1-op2;
    ans1.printer();
    cout<<endl;
    matrix_operations ans2=op1*op2;
    ans2.printer();
    cout<<endl;
    op1=op1.transpose();
    op1.printer();
    cout<<endl<<"If all elements are zero then Inverse dosen't exist"<<endl;
    op2=op2.inverse();
    op2.printer();
    cout<<endl;
    cout<<op1.rank()<<endl;
}