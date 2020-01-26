#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));
    int die = (rand()%6)+1;
    int silverCoin = (rand()%15)+1;
    int silverCoin2 = (rand()%15)+1;
    int chooseCoin = rand();

    cout << "Welcome to the game that will decide your fate.." <<endl;
    cout << "The jailer has placed his first silver coin at space " << silverCoin << "." << endl;

    while(silverCoin2 == silverCoin) //ensures silverCoin2 isn't on the same space as silverCoin
    {
        silverCoin2 = (rand()%15) +1; //resetting it to another random value so it's not the same as silverCoin
    }

    cout << "The jailer has placed his second silver coin at space " << silverCoin2 << "." << endl;
    cout << "You can place your coin anywhere between spaces 1 through 15, except either of the silver coins' spaces." <<endl;
    cout << "Where would you like to place your gold coin? " <<endl;
    int goldCoin;
    cin >> goldCoin;

    while(goldCoin == silverCoin || goldCoin == silverCoin2) //extending it from standard code requirement, makes sure the gold coin cannot be placed on the silverCoin2's spot
    {
        cout << "Cannot place your coin there, choose another spot." <<endl;
        cin >> goldCoin;
    }

    cout << "You rolled a " << die << "."<< endl;

    int location = die;

    cout << "You are now in space " << location << "."<<endl;


    while(location!=goldCoin && location!=silverCoin && location!=silverCoin2)
    {
        if(chooseCoin%2 == 0) //if random number is even, it'll change silverCoin's position
        {
            silverCoin = (rand()%15)+1;

            while(silverCoin == goldCoin)
            {
                silverCoin = (rand()%15)+1;
            }
            cout << "The first silver coin is now in spot " <<silverCoin <<endl;
            chooseCoin = rand(); //resets chooseCoin value so it keeps being random
        }

        else
        {
            silverCoin2 = (rand()%15)+1; //if chooseCoin is odd, it'll change silverCoin2's value

            while(silverCoin2 == goldCoin && silverCoin2 == silverCoin)
            {
                silverCoin2 = (rand()%15)+1;
            }
            chooseCoin = rand(); // resetting value again
            cout << "The second silver coin is now in spot " <<silverCoin2 <<endl;
        }

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