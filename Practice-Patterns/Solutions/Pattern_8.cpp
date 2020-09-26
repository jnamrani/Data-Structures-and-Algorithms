#include <iostream>

using namespace std;

int main()
{
    int n, x=0;
    cout << "Enter highest number in the pyramid : ";
    cin >> n;
    int rows=n+1;
    int spaces=n;
    cout << "\n\n";
    while(x<rows)
    {
        for(int i=0; i<spaces; i++)
        {
            cout << "   ";
        }
        for(int j=spaces+1; j<=n; j++)
        {
            cout << " " << j << " ";
        }
        cout << " 0 ";
        for(int k=n; k>spaces; k--)
        {
            cout << " " << k << " ";
        }
        cout << "\n";
        spaces--;
        x++;
    }
    return 0;
}
