#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>


using namespace std;

int main()
{
    srand(time(0));
    string playerOne, playerTwo;

    cout << "Player 1 name: " << endl;
    cin >> playerOne;
    const int compsize = 11;

    int computer[compsize] = {0, 100,(rand()%100)+1, (rand()%100)+1, (rand()%100)+1, (rand()%100)+1, (rand()%100)+1, (rand()%100)+1, (rand()%100)+1, (rand()%100)+1, (rand()%100)+1};
    int sortedArray[compsize]; //empty array
    int sorting = sizeof(computer)/sizeof(computer[0]);

    sort(computer, computer+sorting, greater<int>()); //function that sorts the array from largest to smallest
    int realComputer[compsize-1];


    for (int i = 0; i < sorting; ++i)
    {
        sortedArray[i] = computer[i]; //each value of sortedArray is set to the values of computer[] after being sorted
    }


    for (int i = 0; i < compsize - 1; i++)
    {
        realComputer[i] = sortedArray[i] - sortedArray[i+1]; //new array where all its values will always add up to 100
     //   cout << realComputer[i] << " " << endl;
    }

    int playerOnesoldiers = 100;
    int p1soldiers[playerOnesoldiers];
    int p1Sacrifices;

    cout << playerOne <<", how many soldiers do you want to send to this castle?" <<endl;
    for(int castle = 0; castle < 10; castle++)
    {
        cout << "Castle " << castle+1 << ": (You have " << playerOnesoldiers << " soldiers to spare)" <<endl;
        cin >> p1Sacrifices;

        while(p1Sacrifices < 0 ||(p1Sacrifices > playerOnesoldiers))
        {

            if(p1Sacrifices < 0)
            {
                cout << "hey!! no negative people here!" << endl;
            }

            if(p1Sacrifices > playerOnesoldiers)
            {
                cout << "You do NOT have enough people, try again!" <<endl;
            }
            cin >> p1Sacrifices;
        }
        playerOnesoldiers = playerOnesoldiers - p1Sacrifices;
        p1soldiers[castle] = p1Sacrifices;
    }

    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;
    cout << " " <<endl;


    int points = 0;
    int p1points = 0;
    int computerpoints = 0;
    int computerSoldiers = 100;
    int compSacrifices = 0;
    int computerSacrifices[compsize-1]; //new array that will keep track of the value of soldiers the computer chooses for each castle

    cout << "Now it's time for the computer to challenge you!" <<endl;
    for(int castle = 0; castle < 10; castle++)
    {
        cout << "Castle " << castle+1 << ": (The computer has " << computerSoldiers << " soldiers to spare)" <<endl;
        int random = rand() % 10; //generates a random number between 0 and 9
        cout << realComputer[random] << endl; //randomly chooses a value in the array

        while(realComputer[random] > computerSoldiers)
        {
                cout << "The computer does NOT have enough people, it will try again!" <<endl;
                random = rand()%10;
                cout << realComputer[random] << endl;
        }

        computerSacrifices[castle] = realComputer[random];
        compSacrifices = computerSacrifices[castle];
        computerSoldiers = computerSoldiers - compSacrifices;
    }


    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << " M A Y    T  H  E    W  A  R    B  E  G  I  N " << endl;
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;

    for(int x = 0; x < 10; x++)
    {
        points = x+1;
        cout << "Castle " << x+1 << ": " <<playerOne <<": " << p1soldiers[x] << " | Computer: " << computerSacrifices[x]<< endl;

        if(p1soldiers[x] > computerSacrifices[x])
        {

            if(x==0)
            {
                cout << "---> " << playerOne << " won " << points << " point!" << endl;
                p1points = points + p1points;
            }

            if(x!=0)
            {
                cout << "---> " << playerOne << " won " << points << " points!" << endl;
                p1points = points + p1points;
            }
        }

        if(computerSacrifices[x] > p1soldiers[x])
        {

            if(x==0)
            {
                cout << "---> The computer won " << points << " point!" << endl;
                computerpoints = points + computerpoints;
            }

            if(x!=0)
            {
                cout << "---> The computer won " << points << " points!" << endl;
                computerpoints = points + computerpoints;
            }
        }

        if(p1soldiers[x] == computerSacrifices[x])
        {
            cout << "You miss 100% of the shots you don't take. Take more risks next time. 0 points for both." <<endl;
        }
    }

    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << playerOne << " has earned " <<p1points << " points! | The computer has earned " << computerpoints << " points!" <<endl;

    if(p1points > computerpoints)
    {
        cout << playerOne << " wins! " << playerOne << " is the greatest conqueror in the world!" <<endl;
    }

    if(computerpoints > p1points)
    {
        cout << "The computer wins! Technology will soon take over the world..." <<endl;
    }

    if(p1points == computerpoints)
    {
        cout << playerOne << " and the computer tied! They are considered equals." <<endl;
    }

    return 0;
}





