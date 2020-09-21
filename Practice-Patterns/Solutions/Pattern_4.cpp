#include <iostream>

using namespace std;

int main()
{
    int height;
    cout << "Enter length of the perpendicular (height) of \"Inverted Triangle\" : ";
    cin >> height;
    cout << "\n\n";
    int spaces = height-1;
    int stars = 1;
    for(int i=0; i<height; i++)
    {
        cout << "\t";
        for(int sp=0; sp<spaces; sp++)
        {
            cout << "   ";
        }
        for(int st=0; st<stars; st++)
        {
            cout << " * ";
        }
        cout << "\n";
        spaces--;
        stars++;
    }
    int x = 4;
    spaces = 1;
    for(int j=0; j<height-1; j++)
    {
        cout << "\t";
        for(int sp=0; sp<spaces; sp++)
        {
            cout << "   ";
        }
        for(int st=0; st<x; st++)
        {
            cout << " * ";
        }
        cout << "\n";
        spaces++;
        x--;
    }
    return 0;
}
