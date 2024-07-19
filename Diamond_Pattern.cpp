#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Value for make Dimond Pateern: "<<endl;
    cin>>n;
    // int m = 5;
    // divide the pattern into above two parts
    // print first section
    for (int i = 0; i <= n; i++)
    {
        // space in above left part
        for (int j = 0; j <= n - i; j++)
        {
            cout << " " << " ";
        }
        // left hand side  pattern
        for (int j = n - 1; j >= n - i; j--)
        {
            cout << "*" << " ";
        }
        // right hand side pattern
        for (int j = 1; j < n - n + i; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
    // half remainnig bottom pattern
    for (int i = 0; i <= n; i++)
    {

        // space in left hand side
        for (int j = 0; j < n - n + i; j++)
        {
            cout << " " << " ";
        }

        // left pattern in bottom part
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*" << " ";
        }
        // right pattern in boottom part
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}