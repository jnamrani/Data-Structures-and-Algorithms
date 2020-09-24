#include <iostream>

using namespace std;

int main()
{
    int rows, x=1;
    cout << "Enter the number of ROWS to be printed : ";
    cin >> rows;
    int spaces = rows-1;
    cout << "\n\n";
    while(x<=rows)
    {
        cout << "\t";
        for(int i=0; i<spaces; i++)
        {
            cout << "   ";
        }
        for(int j=1; j<=(2*x)-1; j++)
        {
            cout << " " << j << " ";
        }
        cout << "\n";
        x++;
        spaces--;
    }
    return 0;
}
