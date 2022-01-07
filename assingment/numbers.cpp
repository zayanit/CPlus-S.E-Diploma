# include <iostream>

using namespace std;

int main() 
{
    int number;
    cout<<"Enter a Number: ";
    cin>>number;
    
    for(int x=1; x<=number; x++)
    {
        int y=x;
        while(y>0)
        {
            cout<<x;
            y--;
        }
        
        cout<<endl;
    }

    return 0;
}