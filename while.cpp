# include <iostream>
using namespace std;

int main()
{
    /*int counter = 100;
    while (counter <= 200)
    {
        if (counter % 3 == 0 && counter % 5 == 0)
            cout<<counter<<" is divisible by 3 and 5"<<endl;
        
        counter++;
    }*/

    // this program averages 3 test scoures.
    // it repeats as many times as the user wishes.
    int score1, score2, score3; // three scores
    double average;             // average score
    char again;                 // to hold Y or N input
    do
    {
        // get three scores
        cout<<"Enter 3 test scores and I will average them: ";
        cin>>score1>>score2>>score3;
        // calculate and display the average
        average = (score1 + score2 + score3) / 3.0;
        cout<<"The average is "<<average<<endl;
        // Dose the user want to average anther set?
        cout<<"Do you want to average another set?(Y/N) ";
        cin>>again;
    }
    while (again == 'Y' || again == 'y');
    
    
}