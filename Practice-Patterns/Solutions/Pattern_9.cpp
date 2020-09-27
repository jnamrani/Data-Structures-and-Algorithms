#include <iostream>

using namespace std;

int main()
{
    int side;
    char arr[1000][1000];
    cout << "Enter the side of Right Isosceles Triangle : ";
    cin >> side;
    cout << "\n\n";
    for(int i=1; i<=side; i++)
    {
        for(int j=1; j<=side; j++)
        {
            if(i==j)
            {
                arr[i][j]='*';
            }
            else if(j==1)
            {
                arr[i][j]='*';
            }
            else if(i==side)
            {
                arr[i][j]='*';
            }
            else
            {
                arr[i][j]=' ';
            }
        }
    }
    for(int i=1; i<=side; i++)
    {
        for(int j=1; j<=side; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}
