#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool read_number(int matrix[3][3])
{
    bool success = true;
    for (int i = 0;  i<3 && success; i++)
    {
        string string;
        getline(cin, string);
        istringstream stream(string);
        for (int j = 0; j < 3; ++j)
        {
            if (!(stream >> matrix[i][j])) 
            {
                success = false;
                break;
            }
        }
    }
    return success;
}
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    char op;
    if(read_number(matrix1)== false )
    {
        cout << " fail " ;
        return -1;
    }
    cin >> op;
    cin.get();  
    if(read_number(matrix2)== false )
    {
        cout<<"error";
        return -1;   
    }
    if (op=='+')
    {
        for ( int i=0;i<3;i++)
        {
            cout<<endl;
            for ( int j=0;j<3;j++)
            {
                cout<<matrix1[i][j]+matrix2[i][j]<<" ";
            }
        cout<<endl;
        }
    }
    if (op=='-')
    {
        for(int i=0;i<3;i++)
        {
            cout<<endl;
            for (int j=0;j<3;j++)
            {
                cout<<matrix1[i][j]-matrix2[i][j]<<" ";
            }
        }
    }
    if (op=='*')
    {
        for ( int i=0;i<3;i++)
        {
            cout<<endl;
            for ( int j=0;j<3;j++)
            {
                int result=0;
                for (int k=0;k<3;k++)
                {
                    result+=matrix1[i][k]*matrix2[k][j];
                }
      cout<<result<<" ";
            }
        }
    }
}
