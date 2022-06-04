#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    while(true)
    {
    int x2;
    int finish_game;
    int x1 = (rand()%10);
    for(int i=0; i<3; i++)
    {
    cout << "Enter any your number you want chose : ";
    cin >> x2;
    if (x2 == x1)
    {
        cout << "::: your are win ::: \n";
        cout << " if you want try again Enter 1 \n";
        cout << "if you want leave a game enter any number \n";
        break;
    }

    else if (x2 > x1)
    {
        cout << " \nthe number is big than random number \n "<<endl;

        continue;
    }
    else if (x2 < x1)
    {
        cout << "\nthe number is small than random number \n " <<endl;

        continue;

    }

    }
    if (x1 != x2)
    {
        cout << "you are losed \n";
        cout << " if you want try again Enter 1 \n";
        cout << "if you want leave a game enter any number \n";
    }


    cin >> finish_game;
    if (finish_game == 1)
    {}
    else
    {
        return 0;
    }
    }

    return 0;
}
