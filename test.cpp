#include <iostream>

using namespace std;


void printPattern(int n)
{int rows = (n + 1) / 2;  // Calculate the number of rows

    int spaces = rows - 1;
    int stars = 1;

    // Upper half of the diamond
    for (int row = 1; row <= rows; ++row) {
        for (int space = 1; space <= spaces; ++space) {
            cout << " ";
        }
        for (int star = 1; star <= stars; ++star) {
            cout << "*";
        }
        cout << "\n";
        spaces--;
        stars += 2;
    }

    spaces = 1;
    stars = stars - 4;

    // Lower half of the diamond
    for (int row = rows - 1; row >= 1; --row) {
        for (int space = 1; space <= spaces; ++space) {
            cout << " ";
        }
        for (int star = 1; star <= stars; ++star) {
            cout << "*";
        }
        cout << "\n";
        spaces++;
        stars -= 2;
    }
}


int main()
{
    int n = 5;
   
    printPattern(n);
    return 0;
}