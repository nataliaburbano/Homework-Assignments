#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    cout << "If you want to live, follow my instructions carefully" <<endl;

    int firstNum, secondNum, thirdNum, fourthNum, fifthNum, sixthNum;
    cout << "Only give me integers between 0 and 200" << endl;
    cout << "First number:" <<endl;
    cin >> firstNum;
    cout << "Second number:" <<endl;
    cin >> secondNum;
    cout << "Third number:" <<endl;
    cin >> thirdNum;
    cout << "Fourth number:" <<endl;
    cin >> fourthNum;
    cout << "Fifth number:" <<endl;
    cin >> fifthNum;
    cout << "Sixth number:" <<endl;
    cin >> sixthNum;


    if(firstNum%2 == 0)
    {
        cout << "1. Cut the red wire." <<endl;
        sleep(1); // Added this so there would be a second for the user to read the instructions before the countdown begins.
    }

    else
    {
        cout << "1. Cut the blue wire." <<endl;
        sleep(1); // Added this after every step that's displayed on the screen throughout the entire program
    }

    for(int x = 0; x<3; x++)
    {
        cout << 3 - x <<endl;
        sleep(1); // Purpose of this is for the program to wait one second before each number counting down is displayed on the screen.
    }


    if(secondNum<66)
    {
        cout << "2. Cut the silver wire." <<endl;
        sleep(1);
    }

    if(secondNum>=66 && secondNum <=133)
    {
        cout << "2. Cut the copper wire." <<endl;
        sleep(1);
    }

    if(secondNum>133)
    {
        cout <<"2. Cut the black wire." <<endl;
        sleep(1);
    }

    for(int x = 0; x<3; x++)
    {
        cout << 3 - x <<endl;
        sleep(1);
    }



    if(secondNum > thirdNum)
    {
        cout << "3. Please wait " <<secondNum <<" seconds." <<endl;
        sleep(1);
        for(int x = 0; x<secondNum; x++)
        {
            cout << secondNum - x <<endl;
            sleep(1);
        }
    }

    if(secondNum <= thirdNum)
    {
        if(secondNum%5 == 0)
        {
            cout << "3. Please wait " << secondNum+thirdNum << " seconds." <<endl;
            sleep(1);
            for(int x = 0; x<(secondNum+thirdNum); x++)
            {
                cout << (secondNum+thirdNum) - x <<endl;
                sleep(1);
            }
        }

        else
        {
            cout << "3. Please wait " << secondNum+fourthNum << " seconds." <<endl;
            sleep(1);
            for(int x = 0; x<(secondNum+fourthNum); x++)
            {
                cout << (secondNum+fourthNum) - x <<endl;
                sleep(1);
            }
        }
    }


    if((sixthNum > firstNum) && (sixthNum > secondNum))
    {
        cout << "4. Cut wire " <<sixthNum <<"." <<endl;
        sleep(1);
    }

    else
    {
        cout << "4. Cut wire " <<firstNum <<"." <<endl;
        sleep(1);
    }

    for(int x = 0; x<3; x++)
    {
        cout << 3 - x <<endl;
        sleep(1);
    }


    if((fifthNum+sixthNum) >= (secondNum+fourthNum) || fourthNum>=100)
    {
        cout << "5. Cut the yellow wire." <<endl;
    }

    else
    {
        cout << "5. Cut the green wire." <<endl;
    }

    return 0;


}