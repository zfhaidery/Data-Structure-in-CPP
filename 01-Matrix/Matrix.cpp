#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];
    int size, i, j;

    cout << "Enter the size of the square matrix (max 10): ";
    cin >> size;

    cout << "Enter the elements of the matrix:\n";
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix is:\n";
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nAnti-Diagonal elements are: ";
    for(i = 0; i < size; i++)
    {
        cout << matrix[i][size - i - 1] << " ";
    }

    cout << "\nPress Enter to exit...";
    cin.get();  // do baar kyuki cin ke baad buffer hota hai
    cin.get();

    return 0;
}