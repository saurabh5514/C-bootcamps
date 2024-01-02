/* 8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output - */
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void setdata()
    {
        int i,j;
         cout<<"Enter elements of matrix 3*3"<<endl;
         for(i=0;i<3;i++)
         {
             for(j=0;j<3;j++)
             {
                 cin>>a[i][j];
             }
         }
    }
    void showMatrix()
    {
        int i,j;
        cout<<"Matrix is :"<<endl;
       for(i=0;i<3;i++)
         {
             for(j=0;j<3;j++)
             {
                 cout<<a[i][j]<<"\t";
             }
             cout<<endl;
         } 
        cout<<endl;
    }
    friend Matrix operator-(Matrix);

};
Matrix operator-(Matrix m)
{
    Matrix s;
      int i,j;
        cout<<"After negating Matrix is :"<<endl;
       for(i=0;i<3;i++)
         {
             for(j=0;j<3;j++)
             {
                 s.a[i][j] = -m.a[i][j];
             }
             
         }
         return s; 
}
int main()
{
    Matrix M1, M2;
    M1.setdata();
    M1.showMatrix();
    M2 = -M1;
    M2.showMatrix();
    }