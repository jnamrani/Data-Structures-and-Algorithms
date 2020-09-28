#include <iostream>

using namespace std;

int main()
{
    int side, x=1;
    cout << "Enter the side of Isosceles Right Triangle : ";
    cin >> side;
    int spaces = side-1;
    cout << "\n\n";
    while(x<=side)
    {
        cout << "\t";
        for(int i=0; i<spaces; i++)
        {
            cout << "   ";
        }
        if(spaces==0)
        {
            for(int i=0; i<x; i++)
            {
                cout << " * ";
            }
        }
        else
        {
            cout << " * ";
        }
        if(x>1 && x<side)
        {
            for(int i=0; i<x-2; i++)
            {
                cout << "   ";
            }
            cout << " * ";
        }
        cout << "\n";
        x++;
        spaces--;
    }
    cout << "\n";
    return 0;
}
