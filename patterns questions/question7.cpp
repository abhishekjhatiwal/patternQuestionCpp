//  To print Butterfly Pattern
/*
         Row : 1 to n
         * : Row No._                 
         Space :  2*n - 2*Row No.   
        Row : m to 1
           
 */


#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of row : ";
    cin>>n;
      
     for (int i = 1; i <= n; i++)
     {
       for (int j = 1; j <= i; j++)
       {
        cout<<" * ";
       }
       int space = 2*n - 2*i;
       for (int j = 1; j <= space; j++)
       {
        cout<<"   ";
       }
       for (int j = 1; j <= i; j++)
       {
        cout<<" * ";
       }
       cout<<endl;
     }

    for (int i = n; i >= 1; i--)
     {
       for (int j = 1; j <= i; j++)
       {
         cout<<" * ";
       }
       int space = 2*n - 2*i;
       for (int j = 1; j <= space; j++)
       {
          cout<<"   ";
       }
       for (int j = 1; j <= i; j++)
       {
          cout<<" * ";
       }
         cout<<endl;
     }

    return 0;   
  }