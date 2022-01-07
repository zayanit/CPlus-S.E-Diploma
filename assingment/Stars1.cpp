# include <iostream>

using namespace std;

int main() 
{
    int number;
    cout<<"Enter a Number: ";
    cin>>number;

    for(int x = 1; x <= number; x++)
    {
        for(int spacesNumber = number - x; spacesNumber > 0; spacesNumber--)
            cout<<" ";
        
        for(int y = 1; y <= x; y++)
            cout<<"*";

        cout<<endl;
    }

    return 0;
}