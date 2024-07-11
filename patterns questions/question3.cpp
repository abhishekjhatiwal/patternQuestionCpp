// To print Inverted Half Pyramid Pattern

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;

    for (int i = n; i >= 1; i--)            // This loop is decerese the numbers of column in each row 
    {
        for (int j = 1; j <= i; j++)        // this loop is print * in each row
        {
            cout<<" * ";
        }
        cout<<endl;                          // when first row is complete then line break
    }
    return 0;
}