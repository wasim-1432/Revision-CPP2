#include<iostream>
using namespace std;
class Matrix
{
    private:
        int M[3][3];
    public:
        void InputData()
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
        Matrix operator+(Matrix M1)
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
        Matrix operator-(Matrix M1)
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
        Matrix operator*(Matrix M1)
        {
            Matrix temp;
            int i,j,k,sum=0;
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
};
int main()
{
    Matrix m1,m2,m3;
    cout<<"Enter the first matrix elements"<<endl;
    m1.InputData();
    cout<<"Enter the second matrix elements"<<endl;
    m2.InputData();
    m3=m1*m2;
    m3.ShowData();
    cout<<endl;
    return 0;
}