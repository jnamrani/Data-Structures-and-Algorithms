#include <iostream>

using namespace std;

int main()
{
    int rows, spaces, zeroes, x;
    cout << "Enter the number of ROWS to be printed : ";
    cin >> rows;
    cout << "\n\n";
    spaces = rows-1;
    x = 1;
    while(x<=rows)
    {
        cout << "\t";
        zeroes = x-1;
        for(int i=0; i<spaces; i++)
        {
            cout << "   ";
        }
        cout << " " << x << " ";
        for(int j=0; j<(2*zeroes)-1; j++)
        {
            cout << " 0 ";
        }
        if(x>1)
        {
            cout << " " << x << " ";
        }
        cout << "\n";
        x++;
        spaces--;
    }
    return 0;
}
