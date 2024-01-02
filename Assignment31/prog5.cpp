#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Item 
{
     int item_no;
     char name[100];
      int price;
     public:
     void setItemNo(int x)
     {
          item_no = x;
     }
     void setPrice(int p)
     {
         price = p;
     }
     void setName(const char *str)
     {
         strcpy(name,str);
     }
     void getItemNo()
     {
          cout<<"Item No : "<<item_no<<endl;
     }
     void getPrice()
     {
          cout<<"Item Price : "<<price<<endl;
     }
     void getName()
     {
          cout<<"Item Name : "<<name;
     }
     int retPrice()
     {
          return price;
     }
     
};
class Discounted_item : public Item
{
      int dis_per,dis_amt;
      public:
      void setDisPer(int x)
      {
           dis_per = x;
           setDisAmt();
      }
      void setDisAmt()
      {
            int x;
           x = retPrice();
           dis_amt = (dis_per * x)/100;

      }
      void getDisPer()
      {
         cout<<"Discount Percent : "<<dis_per<<endl;
      }
      void getDisAmt()
      {
          cout<<"Discount Amount : "<<dis_amt<<endl;
      }
      int retDis()
      {
          return dis_amt;
      }
};
int main()
{
      int n , totalDis = 0,totalPrice = 0;
      char str[100];
      int p,no,dp;
      cout<<"How many items you want to enter ? : ";
      cin>>n;
      Discounted_item d[n];
      for(int i = 0; i<n; i++)
      {
            cout<<"--------------------------"<<endl;
            cout<<"Enter Item Name : ";
            fflush(stdin);
            fgets(str,100,stdin);
            d[i].setName(str);
            cout<<"Enter Item Number : ";
            cin>>no;
            d[i].setItemNo(no);
            cout<<"Enter Item Price : ";
            cin>>p;
            d[i].setPrice(p);
            cout<<"Enter discount Percent : ";
            cin>>dp;
            d[i].setDisPer(dp);
            cout<<"--------------------------"<<endl;
            
      }
      for(int i = 0;i < n; i++)
      {
           d[i].getName();
           d[i].getItemNo();
           d[i].getPrice();
           d[i].getDisPer();
           d[i].getDisAmt();
           totalDis += d[i].retDis();
           totalPrice += d[i].retPrice();

            
      }
      cout<<"------------------"<<endl;
      cout<<"Total Price = "<<totalPrice<<endl;
      cout<<"Total Discount = "<<totalDis<<endl;
      cout<<"-----------------"<<endl;
   
      
}
