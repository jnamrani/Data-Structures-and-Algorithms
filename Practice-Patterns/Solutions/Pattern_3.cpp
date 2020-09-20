#include <iostream>

using namespace std;

int main()
{
    int lines;
    cout << "Enter the number of lines to be printed : ";
    cin >> lines;
    cout << "\n\n";
    int x = 1;
    int spaces = lines-1;
    int stars = x;
    while ( x<=lines )
    {
        for(int i=0; i<spaces; i++)
        {
            cout << " ";
        }
        for (int j=0; j<stars; j++)
        {
            cout << "* ";
        }
        cout << "\n";
        spaces--;
        stars++;
        x++;
    }
    return 0;
}
