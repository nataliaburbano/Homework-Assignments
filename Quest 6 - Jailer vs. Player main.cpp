#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0)); //ensures different seed number each time for rand() so it provides random numbers
    int die = (rand()%6)+1;
    int silverCoin = (rand()%15)+1;

    cout << "Welcome to the game that will decide your fate.." <<endl;
    cout << "The jailer has placed his silver coin at space " << silverCoin << "." << endl;
    cout << "You can place your coin anywhere between spaces 1 through 15, except the silver coin's space." <<endl;
    cout << "Where would you like to place your gold coin? " <<endl;
    int goldCoin;
    cin >> goldCoin;

    while(goldCoin == silverCoin)
    {
        cout << "Cannot place your coin there, choose another spot." <<endl;
        cin >> goldCoin;
    }

    cout << "You rolled a " << die << "."<< endl;

    int location = die;

    cout << "You are now in space " << location << "."<<endl;

    while(location!=goldCoin && location!=silverCoin)
    {

        int newDie = (rand()%6)+1;
        location = location + newDie;

        if (location > 15)
        {
            location = 0;
        }
        cout << "You rolled a " << newDie << "." <<endl;
        cout << "You are now in space " << location << "." <<endl;

    }

    if(location == goldCoin)
    {
        cout << "Game over. Congrats! You won your freedom!";
    }

    else
    {
        cout << "Game over. You are now dragon food.";
    }


    return 0;
}
