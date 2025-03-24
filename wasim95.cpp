#include<iostream>
using namespace std;
class Matrix
{
    private:
        int M[3][3];
    public:
        void Input()
        {
            int i,j;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    cin>>M[i][j];
                }
            }
        }
        void ShowData()
        {
            int i,j;
            cout<<"Required Matrix is:"<<endl;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    cout<<M[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix Add(Matrix M1)
        {
            Matrix temp;
            int i,j;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    temp.M[i][j]=M[i][j]+M1.M[i][j];
                }
            }
            return temp;
        }
        Matrix Sub(Matrix M1)
        {
            Matrix temp;
            int i,j;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    temp.M[i][j]=M[i][j]-M1.M[i][j];
                }
            }
            return temp;
        }
        Matrix Multiply(Matrix M1)
        {
            Matrix temp;
            int i,j,k,sum;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    sum=0;
                    for(k=0;k<=2;k++)
                    {
                        sum=sum+M[i][k]*M1.M[k][j];
                    }
                    temp.M[i][j]=sum;
                }
            }
            return temp;
        }
        Matrix Transpose()
        {
            Matrix temp;
            int i,j;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    temp.M[j][i]=M[i][j];
                }
            }
            return temp;
        }
        void is_Singular()
        {
            if(M[0][0]*M[1][1]*M[2][2]-M[0][0]*M[2][1]*M[1][2]-M[0][1]*M[1][0]*M[2][2]+M[0][1]*M[2][0]*M[1][2]+M[0][2]*M[1][0]*M[2][1]-M[0][2]*M[2][0]*M[1][1]==0)
            {
                cout<<"Singular Matrix";
            }
            else
            {
                cout<<"Non Singular Matrix";
            }
        }
};
int main()
{
    Matrix m1,m2,m3;
    cout<<"Enter the first matrix elements"<<endl;
    m1.Input();
    //cout<<"Enter the second matrix elements"<<endl;
    //m2.Input();
    //m3=m1.Multiply(m2);
    //m3.ShowData();
    m1.is_Singular();
    cout<<endl;
    return 0;
}