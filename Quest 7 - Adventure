#include <iostream>
#include <cstdlib>
#include <ctime>

void optionOne(int& harry, int& voldemort, int& horcruxes);
void optionTwo(int& harry, int& voldemort, int& horcruxes);
void optionThree(int& harry, int& voldemort, int& horcruxes);
void optionFour(int& harry, int& voldemort, int& horcruxes);
void voldemortAttack(int& harry, int& voldemort, int& horcruxes);
using namespace std;
int main()
{
    srand(time(0));

    int harry = 100;
    int voldemort = 100;
    int horcruxes = 4;

    cout << "It is May 2nd, 1998. The Battle of Hogwarts rages around you. Harry Potter, you must do everything you"<<endl;
    cout << "can to defeat Voldemort and his Death Eaters. You must destroy the remaining 4 horcruxes so you can face" <<endl;
    cout <<  "off Lord Voldemort and end this war. Choose your actions wisely!" << endl << endl;
    cout << "(1) Look for horcruxes to destroy. (2) Fight Death Eaters! (3) Search for the Room of Requirement" << endl;
    cout << "for help! (4) Find Voldemort and attack him!" << endl;
    int decision;

    while(harry > 0 && voldemort > 0)
    {
        cin >> decision;

        if(decision == 1)
        {
            if(horcruxes > 0)
            {
                optionOne(harry, voldemort, horcruxes);

                if(harry > 0)
                {
                    cout << "You have " << harry << " health remaining." << endl;
                    if (voldemort > 0) {
                        cout << "Voldemort has " << voldemort << " health remaining." << endl;
                    }

                    if (horcruxes == 1)
                    {
                        cout << "There is " << horcruxes << " horcrux left to destroy." << endl;
                    } else {
                        cout << "There are " << horcruxes << " horcruxes left to destroy." << endl;
                    }
                }
            }

            else
            {
                cout << "No more horcruxes left. Choose another option!" <<endl;
                cin >> decision;
            }
        }

        if(decision == 2)
        {
            optionTwo(harry, voldemort, horcruxes);

            if(harry > 0)
            {
                cout << "You have " << harry << " health remaining. " << endl;

                if (voldemort > 0) {
                    cout << "Voldemort has " << voldemort << " health remaining." << endl;
                }

                if (horcruxes == 1) {
                    cout << "There is " << horcruxes << " horcrux left to destroy." << endl;
                } else {
                    cout << "There are " << horcruxes << " horcruxes left to destroy." << endl;
                }
            }
        }

        if(decision == 3)
        {
            optionThree(harry, voldemort, horcruxes);

            if(harry > 0)
            {
                cout << "You have " << harry << " health remaining." << endl;

                if (voldemort > 0) {
                    cout << "Voldemort has " << voldemort << " health remaining." << endl;
                }

                if (horcruxes == 1) {
                    cout << "There is " << horcruxes << " horcrux left to destroy." << endl;
                } else {
                    cout << "There are " << horcruxes << " horcruxes left to destroy." << endl;
                }
            }
        }

        if(decision == 4)
        {
            if(horcruxes == 0)
            {
                optionFour(harry, voldemort, horcruxes);

                if(harry > 0 && harry <=50)
                {
                    cout << "You have " << harry << " health remaining. " << endl;
                    if(voldemort > 0)
                    {
                        cout << "Voldemort has " << voldemort << " health remaining." <<endl;
                    }
                    cout << "There are no more horcruxes left to destroy." << endl;
                }
            }

            else
            {
                cout << "Sorry, there are still horcruxes left to destroy before you can do this! Lost your turn" <<endl;
            }
        }
        cout << endl;

        if(voldemort > 0)
        {

            if(harry > 0)
            {
                cout << "Time for Voldemort to act!" << endl;
                voldemortAttack(harry, voldemort, horcruxes);

                if(harry > 0 && voldemort > 0)
                {
                    cout << "You have " << harry << " health remaining. Voldemort has " << voldemort
                         << " health remaining." << endl;

                    if(horcruxes == 1)
                    {
                        cout << "There is " << horcruxes << " horcrux left to destroy." <<endl;
                    }

                    if(horcruxes > 1)
                    {
                        cout << "There are " << horcruxes << " horcruxes left to destroy." << endl;
                    }
                    cout << "What would you like to do now?" << endl;
                }

                if(voldemort < 0)
                {
                    cout << "Voldemort has no health remaining." << endl;
                }
            }

            else
            {
                cout << "You have no health remaining." << endl;
            }
        }

    }
    cout << endl;
    cout << "Game is over!" <<endl;
    if(harry <= 0)
    {
        cout << "The Chosen One has died. All hope is lost is for the Wizarding World." <<endl;
    }

    if(voldemort <= 0)
    {
        if(horcruxes == 0)
        {
            cout << "All the horcruxes have been destroyed and Lord Voldemort does not "
                    "have enough strength left! He has been defeated! The Wizarding World is saved!" << endl;
        }

        else
        {
            cout << "Lord Voldemort is so weak that he went into hiding. Play again to try and defeat him." << endl;
        }
    }


    return 0;
}

void optionOne(int& harry, int& voldemort, int& horcruxes)
{
    //35% of finding a horcrux and then destroying it (but Harry loses health)
    //roughly 15% chance of finding a horcrux, destroying it and Harry loses no health
    //50% chance of not finding anything.
    int chance = rand()%100 + 1;

    if(horcruxes > 0)
    {

        if (chance <= 35)
        {
            cout << "You destroyed a horcrux! But you suffered some injuries..." << endl;
            horcruxes = horcruxes - 1;
            voldemort = voldemort - 10;
            harry = harry - 5;
        }

        if (chance > 35 && chance < 50) {
            cout << "You managed to destroy a horcrux without being harmed!" << endl;
            horcruxes = horcruxes - 1;
            voldemort = voldemort - 10;
        }

        if (chance >= 50)
        {
            cout << "No horcruxes found. Better luck next time..." << endl;
        }
    }
    else
        {
        cout << "No more horcruxes to be found! Lost a turn." << endl;
    }

}

void optionTwo(int& harry, int& voldemort, int& horcruxes)
{
    //Option 2: Engaging in a magical fight against Death Eaters!
    // 35% chance of Harry defeating a Death Eater - he gains health
    //35% chance of Harry losing the fight and losing health.
    //30% chance of winning the fight, finding a horcrux, losing no health
    int chance = rand()%100 + 1;

    if(horcruxes > 0)
    {
        if (chance < 35)
        {
            //You defeat the Death Eater
            cout << "You have won your battle against one of the Death Eaters!" << endl;

            if (harry <= 90)
            {
                harry = harry + 10;
            }
            else
                {
                harry = 100;
            }
        }

        if (chance >= 35 && chance <= 65)
        {
            cout << "The Death Eater was carrying a horcrux! You snatch it and destroy it!" << endl;
            horcruxes = horcruxes - 1;
            voldemort = voldemort - 10;
        }

        if (chance > 65)
        {
            cout << "You lost your battle against the Death Eater!" << endl;
            {
                harry = harry - 5;
            }
        }
    }

    else
    {
        if (chance < 50)
        {
            //You defeat the Death Eater
            cout << "You have won your battle against one of the Death Eaters!" << endl;

            if (harry <= 90)
            {
                harry = harry + 10;
            }
            else
                {
                harry = 100;
            }
        }

        if (chance >= 50)
        {
            cout << "You lost your battle against the Death Eater!" << endl;
            {
                harry = harry - 10;
            }
        }

    }

}

void optionThree(int& harry, int& voldemort, int& horcruxes)
{
    //Room of Requirement
    //30% chance of bumping into Malfoy and losing health
    //60% chance of finding potion and gaining health
    //10% chance of finding a horcrux
    int chance = rand()%100 + 1;

    if(horcruxes > 0)
    {
        if (chance <= 30)
        {
            harry = harry - 5;
            cout << "You bumped into Malfoy... That weasel jinxes you!" << endl;
        }

        if (chance > 30 && chance < 90)
        {
            cout << "You found a strength potion brewed 1000 years ago!" << endl;
            if (harry <= 80)
            {
                harry = harry + 20;
            }
            else
                {
                harry = 100;
            }
        }

        if (chance >= 90)
        {
            cout << "You found a horcrux hidden under a spellbook. You destroy it with a Basilisk Fang!" << endl;
            horcruxes = horcruxes - 1;
            voldemort = voldemort - 10;
        }
    }
    else
        {
            if (chance <= 50)
            {
                harry = harry - 5;
                cout << "You bumped into Malfoy... That weasel jinxes you!" << endl;
            }

            if (chance > 50)
            {
                cout << "You found a strength potion brewed 1000 years ago!" << endl;
                if (harry <= 90)
                {
                    harry = harry + 10;
                }
                else
                    {
                    harry = 100;
                }
            }
    }

}
void optionFour(int& harry, int& voldemort, int& horcruxes)
{
    //Harry attacks Voldemort (only able to do so once all horcruxes are destroyed)
    //If Harry's health is above 50 by this point then he automatically will win with one attack
    //If Harry's health is 60 or below, he has 20% chance of dying, then he could either lose health or
    //attack Voldemort successfully.
    if(harry > 50)
    {
        voldemort = 0;
        cout << "You had enough strength to defeat Voldemort!" << endl;
    }

    else
    {
        int chance = rand()%100 + 1;

        if(chance <= 20)
        {
            harry = 0;
            cout << "You were not strong enough..." << endl;
        }

        if(chance > 20)
        {
            if(chance < 50) //bellatrix successfully jinxes him
            {
                harry = harry - 8;
                cout << "Bellatrix jinxed you from behind!" << endl;
            }

            else //harry successfully attacks voldy
            {
                voldemort = voldemort - 20;
                cout << "You successfully attacked Voldemort!" << endl;
            }
        }

    }

}


void voldemortAttack(int& harry, int& voldemort, int& horcruxes)
{
    //if Voldemort has less than 4 horcruxes, he's consistently losing power until the final battle

    int number = rand()%15 +1;
    if(horcruxes == 4)
    {
        cout << "Voldemort remains all powerful. He attacks you!" << endl;
        harry = harry - number;
    }
    if(horcruxes == 3 || horcruxes == 2)
    {
        number = rand()%5 + 1;
        voldemort = voldemort - number;
        number = rand()%5 + 1;
        harry = harry - number;
        cout << "Voldemort feels the loss of horcruxes... He attacks you in anger!" <<endl;
    }

    if(horcruxes == 1)
    {
        cout << "Voldemort is TRULY angry now... He gets weaker..." << endl;
        number = rand()%7 + 1;
        voldemort = voldemort - number;
        if(voldemort > 0)
        {
            cout << "...But he continues to attack!" << endl;
            number = rand()%10 + 1;
            harry = harry - number;
        }
    }

    if(horcruxes == 0)
    {
        //
        number = rand()%8 + 1;
        voldemort = voldemort - number;
        number = rand()%3 + 1;

        if(number == 1)
        {
            //voldemort's most powerful attack
            cout << "Voldemort is weakening as we speak, but he unleashes his most powerful attack!" << endl;
            harry = harry - 17;
        }

        if(number == 2)
        {
            cout << "Voldemort is weakening as we speak, but he attacks you with his remaining strength!" << endl;
            harry = harry - 10;
        }

        if(number == 3)
        {
            cout << "Voldemort is weakening as we speak, and his attack is weak too!" << endl;
            harry = harry - 5;
        }
    }
}

