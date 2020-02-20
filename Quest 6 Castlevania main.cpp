#include <iostream>
#include <string>

using namespace std;

int main()
{
    string playerOne, playerTwo;

    cout << "Player 1 name: " << endl;
    cin >> playerOne;
    cout << "Player 2 name: " << endl;
    cin >> playerTwo;

    int playerOnesoldiers = 100;
    int playerTwosoldiers = 100;
    int p1soldiers[playerOnesoldiers];
    int p2soldiers[playerTwosoldiers];
    int p1Sacrifices;
    int p2Sacrifices;

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


    cout << playerTwo <<", how many soldiers do you want to send to this castle?" <<endl;
    for(int castle = 0; castle < 10; castle++)
    {
        cout << "Castle " << castle+1 << ": (You have " << playerTwosoldiers << " soldiers to spare)" <<endl;
        cin >> p2Sacrifices;

        while(p2Sacrifices < 0 || (p2Sacrifices > playerTwosoldiers))
        {
           if(p2Sacrifices < 0)
           {
               cout << "hey!! no negative people here!" << endl;
           }

           if(p2Sacrifices > playerTwosoldiers)
           {
               cout << "You do NOT have enough people, try again!" <<endl;
           }
            cin >> p2Sacrifices;
        }

        playerTwosoldiers = playerTwosoldiers - p2Sacrifices;
        p2soldiers[castle] = p2Sacrifices;
    }

    int points = 0;
    int p1points = 0;
    int p2points = 0;

    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << " M A Y    T  H  E    W  A  R    B  E  G  I  N " << endl;
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;


    for(int x = 0; x < 10; x++)
    {
        points = x+1;
        cout << "Castle " << x+1 << ": " <<playerOne <<": " << p1soldiers[x] << " | " << playerTwo <<": " << p2soldiers[x]<< endl;

        if(p1soldiers[x] > p2soldiers[x])
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

        if(p2soldiers[x] > p1soldiers[x])
        {

            if(x==0)
            {
                cout << "---> " << playerTwo << " won " << points << " point!" << endl;
                p2points = points + p2points;
            }

            if(x!=0)
            {
                cout << "---> " << playerTwo << " won " << points << " points!" << endl;
                p2points = points + p2points;
            }
        }

        if(p1soldiers[x] == p2soldiers[x])
        {
            cout << "You miss 100% of the shots you don't take. Take more risks next time. 0 points for both." <<endl;
        }
    }

    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << playerOne << " has earned " <<p1points << " points! | " << playerTwo << " has earned " << p2points << " points!" <<endl;

    if(p1points > p2points)
    {
        cout << playerOne << " wins! " << playerOne << " is the greatest conqueror in the world!" <<endl;
    }

    if(p2points > p1points)
    {
        cout << playerTwo << " wins! " << playerTwo << " is the greatest conqueror in the world!" <<endl;
    }

    if(p1points == p2points)
    {
        cout << playerOne << " and " << playerTwo << " tied! They are considered equals." <<endl;
    }



    return 0;
}
