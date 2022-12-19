#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


void doNothing(int *arr, int size)
{
    for (int a = 0; a < size; a++)
    {
        cout << *(arr + a) << "\n";
    }
    cout << "\n";
}
int main()
{
    int arr[3] = {1,2,3};
    int var = 3;

    int twoD[3][3] = {{5,10,15}, {20, 25, 30}, {35, 40, 45}};
    // practice here
   

    char b[3][2];
    cout << "--------\n";
    cout << sizeof(b) << "\n";
    cout << sizeof(b + 2) << "\n";
    cout << sizeof(*(b+1)) << "\n";
    cout << sizeof(*(*(b+0))) << "\n";
    cout << &b << "\n";
    cout << b << "\n";

    struct Airplane{
        float airSpeed;
        float altitude;
        string make;

    };

    Airplane hangar[10];
    for (auto &a : hangar)
    {
        a.make = "Boeing";
    };

    for (auto &a : hangar)
    {
        cout << a.make << "\n"; 
    }

    vector<Airplane> airplanes(5);
    for (auto & a : airplanes)
    {
        a.airSpeed = 565.0;
    }

    for (auto & a : airplanes)
    {
        cout << a.airSpeed << "\n";
    }



}