#include <iostream>
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
    }

    else
    {
        cout << "1. Cut the blue wire." <<endl;
    }

    if(secondNum<66)
    {
        cout << "2. Cut the silver wire." <<endl;
    }

    if(secondNum>=66 && secondNum <=133)
    {
        cout << "2. Cut the copper wire." <<endl;
    }

    if(secondNum>133)
    {
        cout <<"2. Cut the black wire." <<endl;
    }

    if(secondNum > thirdNum)
    {
        cout << "3. Please wait " <<secondNum <<" seconds." <<endl;
    }

    if(secondNum <= thirdNum)
    {
        if(secondNum%5 == 0)
        {
            cout << "3. Please wait " << secondNum+thirdNum << " seconds." <<endl;
        }

        else
        {
            cout << "3. Please wait " << secondNum+fourthNum << " seconds." <<endl;
        }
    }


    if((sixthNum > firstNum) && (sixthNum > secondNum))
    {
        cout << "4. Cut wire " <<sixthNum <<"." <<endl;
    }

    else
    {
        cout << "4. Cut wire " <<firstNum <<"." <<endl;
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