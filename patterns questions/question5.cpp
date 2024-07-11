// Half Pyramid Using Numbers

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Row : ";
    cin>>n;

    for (int i = 1; i <= n; i++)        //  numbers of row in each case
    {
        for (int j = 1; j <= i; j++)    //  print the number of numbers in row
        {
            cout<<i<<" ";               // print number 
        }
        cout<<endl;                 
    }
    return 0;
}