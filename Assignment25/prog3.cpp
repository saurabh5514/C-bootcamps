/*3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/
#include<iostream>
using namespace std;
class Factorial
{
    private:
        int fact = 1;
    public:
        void set_fact(int x)
        {
            int i;
            for(i=x;i>1;i--)
            {
                 fact = fact * i;
            }
        }
        void get_fact()
        {
            cout<<"Factorial  =  "<<fact<<endl;
        }

};
int main()
{
    Factorial f1;
    f1.set_fact(5);
    f1.get_fact();

}
