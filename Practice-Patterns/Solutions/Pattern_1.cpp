#include<iostream>

using namespace std;

int main()
{
        int lines, spaces, stars;
        cout << "Enter the number of lines to be printed : ";
        cin >> lines;
        cout << "\n\n";
        int x = 0;
        spaces = x;
        stars = lines;
        while(x < lines)
        {
            cout << "\t";
            for (int i=0; i<spaces; i++)
            {
                cout << "   ";
            }
            for (int j=0; j<stars; j++)
            {
                cout << " * ";
            }
            cout << endl;
            spaces++;
            stars--;
            x++;
        }
}
