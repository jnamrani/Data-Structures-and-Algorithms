#include <iostream>

using namespace std;

void printPattern(int n);

int main()
{
    int lines;
    cout << "Enter the number of lines to be printed : ";
    cin >> lines;
    cout << "\n\n";
    printPattern(lines);
    return 0;
}

void printPattern(int n)
{
    int arr[100][100];
    int spaces=n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i==j || j==1)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int s=0; s<spaces; s++)
        {
            cout << "   ";
        }
        spaces--;
        for(int j=1; j<=i; j++)
        {
            cout << " " << arr[i][j] << " ";
            cout << "   ";
        }
        cout << "\n";
    }
}
