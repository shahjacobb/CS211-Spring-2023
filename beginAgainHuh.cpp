#include <iostream>
using std::cout;
using std::cin;


void badLoop()
{
    // brainless, wrong code 
    int b[8][8] {};

    for (int r : b)
    {
        for (int c : b)
        {
            cout << b[r][c] << "\n";
        }
    }
}

void alsoBadloop()
{
    // slightly less dumb code but still wrong
    int b[8][8] {};

    for (int &r[8] : b)
    {
        for (int &c : r)
        {
            cout << b[r][c];
        }
    }
}

int main()
{

    
}