#include<iostream>
using namespace std;
   
int fact(int a) {
    int factor = 1;
    for (int i = 2; i <= a; i++)
    {
        factor *= i;
    }
    return factor;
}

int main() {

     int i,j,n;
     
     printf("Enter the number of row : ");
     cin>>n;

     for ( i = 0; i <= n; i++)
     {
        for ( j = 0; j <= i; j++)
        {
          cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
     }
     

    return 0;
}
