#include <iostream>

using namespace std;

int main()
{
    int lines;
    cout << "Enter the number of lines to be printed : ";
    cin >> lines;
    cout << "\n\n";
    int x = 0;              //temp. variable to track the number of lines
    int spaces = x;
    int stars = lines;
    while(x<lines)
    {
        for (int i=0; i<spaces; i++)
        {
            cout << "   ";
        }
        for (int j=0; j<stars; j++)
        {
            cout << " * ";
        }
        cout << "\n";
        spaces=spaces+2;
        stars--;
        x++;
    }
    return 0;
}
