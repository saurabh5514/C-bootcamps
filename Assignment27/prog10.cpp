/*  10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
Output */
#include <iostream>
using namespace std;
class Matrix
{
    int a[3][3];

public:
    void setMatix()
    {
        int i, j;
        cout << "Enter elements of matrix 3*3" << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void showMatrix()
    {
        int i, j;
        cout << "Matrix is :" << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    Matrix operator+(Matrix m)
    {
          Matrix m1;
          int i,j;
          for(i=0;i<3;i++)
          {
              for(j=0;j<3;j++)
              {
                 m1.a[i][j] = a[i][j] + m.a[i][j];
              }

          }
          return m1;
    }
};
int main()
{
     Matrix m1,m2,m3;
     m1.setMatix();
     m1.showMatrix();
     m2.setMatix();
     m2.showMatrix();
     m3 = m1 + m2;
     cout<<"After adding matrix"<<endl;
     m3.showMatrix();
     
}