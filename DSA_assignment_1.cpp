#include <iostream>
using namespace std;

int main(){
    int matrix_1[10][10], matrix_2[10][0], product[10][10];
    int row_1, row_2;
    int column_1, column_2;

    //taking dimensions of matrices
    cout<<"enter the no. of rows and column of matrix 1 : ";
    cin>>row_1>>column_1;
    cout<<"enter the no. of rows and column of matrix 2 : ";
    cin>>row_2>>column_2;

    // while(row_1 != column_2)
    // {
    //     cout<<"enter the no. of rows and column of matrix 1 : ";
    //     cin>>row_1>>column_1;
    //     cout<<"enter the no. of rows and column of matrix 2 : ";
    //     cin>>row_2>>column_2;
    // }
    
    //taking the values of matrix 1
    cout<<endl<<"values for matrix 1 : "<<endl;
    for(int i = 0; i < row_1; ++i)
        for(int j = 0; j < column_1; ++j)
        {
            cout<<"enter the value of X["<<i+1<<j+1<<"] : ";
            cin>>matrix_1[i][j];
        }

    //display of matrix 1
    for(int i = 0; i < row_1; ++i)
     {
        cout<<endl;
        for(int j = 0; j < column_1; ++j)
        {
            cout<<matrix_1[i][j]<<" ";
        }
     }
     cout<<endl;

    //taking the vaules of matrix 2
    cout<<endl<<"values for matrix 2 : "<<endl;
    for(int i = 0; i < row_2; ++i)
        for(int j = 0; j < column_2; ++j)
        {
            cout<<"enter the value of Y["<<i+1<<j+1<<"] : ";
            cin>>matrix_2[i][j];
        }

    //display of matrix 2
    for(int i = 0; i < row_2; ++i)
     {
        cout<<endl;
        for(int j = 0; j < column_2; ++j)
        {
            cout<<matrix_2[i][j]<<" ";
        }
     }
     cout<<endl;

    //adding null value to produc matrix
    for(int i = 0; i < row_1; ++i)
        for(int j = 0; j < column_2; ++j)
        {
            product[i][j] = 0;
        }

    
    //mutiplying the two matrices
    for(int i = 0; i < row_1; ++i)
        for(int j = 0; j < column_2; ++j)
            for(int k = 0; k < column_1; ++k)
            {
                product[i][j] += matrix_1[i][k]*matrix_2[k][j];
            }



    //display of product matrix
     for(int i = 0; i < row_1; ++i)
     {
        cout<<endl;
        for(int j = 0; j < column_2; ++j)
        {
            cout<<product[i+1][j+1]<<" ";
        }
     }
     cout<<endl;
     return 0;
 }