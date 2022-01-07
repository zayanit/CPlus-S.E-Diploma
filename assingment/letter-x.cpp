# include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter a Number: ";
    cin>>number;

    int rows,columns;
    for(columns=number; columns>0; columns--)
    {
        for(rows=number; rows>0; rows--)
            cout<<"x";
        cout<<endl;
    }

    return 0;
}