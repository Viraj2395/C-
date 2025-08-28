#include <iostream>
using namespace std;

int main(){
    bool ships[4][4] = {
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };
    int hits = 0;
    int numberOfTurns = 0;

    while (hits < 4)
    {
        int row, column;

        cout<<"Enter the number of row : ";
        cin>>row;

        cout<<"Enter the number of column : ";
        cin>>column;

        if (ships[row][column])
        {
            ships[row][column] = 0;

            hits++;

            cout << "Hit! " << (4-hits) << " left.\n\n"; 
        }
        else {
            cout << "Miss\n\n";
          }
          numberOfTurns++;
    }
    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
    return 0;
}