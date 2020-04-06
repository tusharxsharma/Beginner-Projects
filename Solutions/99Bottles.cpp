#include <iostream>
using namespace std;
int main ()
{
    int bottle = 99;
    while (bottle > 0)
    {
        cout << bottle << " Bottles of beer on the wall, " <<bottle<< " bottles of beer." <<endl;

        bottle--;

        cout <<"Take one down and pass it around, " << bottle << " "
             <<"Bottles of beer on the wall.\n" << endl;

        if (bottle == 1)
        {
            break;
        }

    }

    cout << "1 bottle of beer on the wall, 1 bottle of beer." << endl
         << "Take one down and pass it around, no more bottles of beer on the wall.\n" << endl
         << "No more bottles of beer on the wall, no more bottles of beer." << endl
         << "Go to the store and buy some more, 99 bottles of beer on the wall.";

    return -1;
}
