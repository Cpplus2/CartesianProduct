#include <iostream>

using namespace std;

void cartesian(int * cardinality, int ** sets);

int main()
{
    cout << "This program computes the Cartesian product of two sets namely A and B. " << endl;
    int ** sets = new int*[2];

    int * cardinality = new int[2];

    int num;
    for(char alpha = 'A'; alpha < 'C'; alpha++)
    {
        cout << endl << "Enter the cardinality for Set " << alpha << ": ";
        cin >> num;
        sets[ (int)(alpha - 65) ] = new int[num];

        cardinality[ (int)(alpha - 65) ] = num;

        for(int count = 0; count < cardinality[ (int)(alpha - 65) ]; count++ )
        {
            cout << "Enter element#" << count+1  << ": ";
            cin >> num;

            sets[ (int)(alpha - 65) ][count] = num;
        }
    }

    cartesian(cardinality, sets);

    return 0;
}

void cartesian(int * cardinality, int ** sets)
{
    int * resultant = new int[ (cardinality[0] * cardinality[1]) ];

    cout << endl << "Cartesian Product - A x B: " << endl << "{ ";
    for(int count = 0; count < cardinality[0]; count++)
    {
        for(int counter = 0; counter < cardinality[1]; counter++)
            cout << "{" << sets[0][count] << ", " << sets[1][counter] << "}, ";
    }
    cout << "\b\b } " << endl;
}
