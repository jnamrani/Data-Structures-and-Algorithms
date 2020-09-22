#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "Enter half the measure of side : ";
    cin >> side;
    cout << "\n\n";
    int stars=side;
    int spaces=0;
    int x=0;
    while (x<side)
    {
        cout << "\t";
        for(int i=0; i<stars; i++)
        {
            cout << " * ";
        }
        for(int i=0; i<spaces; i++)
        {
            cout << "   ";
        }
        cout << "   ";
        for(int i=0; i<spaces; i++)
        {
            cout << "   ";
        }
        for(int i=0; i<stars; i++)
        {
            cout << " * ";
        }
        cout << "\n";
        stars--;
        spaces++;
        x++;
    }
    stars=0;
    spaces=side;
    x=0;
    while (x<=side)
    {
        cout << "\t";
        for(int i=0; i<stars; i++)
        {
            cout << " * ";
        }
        for(int i=0; i<spaces; i++)
        {
            cout << "   ";
        }
        cout << "   ";
        for(int i=0; i<spaces; i++)
        {
            cout << "   ";
        }
        for(int i=0; i<stars; i++)
        {
            cout << " * ";
        }
        cout << "\n";
        stars++;
        spaces--;
        x++;
    }
    return 0;
}
