#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


string encryption(string encrypt);
string decryption(string decrypt);
int assignVal(char letter);
char changeBack(int value);

int main()
{

    cout << "Hello! Will this be a decryption or encryption operation?" << endl;
    string d = "decryption";
    string e = "encryption";
    string decision;
    cin >> decision;

    cout << "Enter your secret key please:" <<endl;
    int key;
    cin >> key;

    srand(key); //sets key as the seed for random number generator

    if(decision == e) //if the user chooses encryption
    {
        cout << "Enter what you want to encrypt: " <<endl;
        string encryptMessage;
        cin >> encryptMessage;
        cout << encryption(encryptMessage); //sends string to encryption function
    }

    if(decision == d) //if the user chooses decryption
    {
        cout << "Enter what you want to decrypt: " <<endl;
        string decryptMessage;
        cin >> decryptMessage;
        cout << decryption(decryptMessage); //sends string to decryption function
    }

    return 0;
}
int assignVal(char letter) //function takes in characters of user's inputted string.
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int x = 0; x < 26; x++)
    {
        if (letter == alphabet[x]) // comparing each character of the user's string to each character in alphabet string.
        {
            return x; //if a character of user's string is equal to a character in alphabet, it'll return a
            // value between 0 and 25 according to alphabetical order, with A being 0, B being 1, etc.
        }
    }
    return -1;
}

char changeBack(int value) //takes in integer value between 0 and 25 that is returned in assignVal function,
                         //changing the values back to letters.
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int x = 0;
    while(x < 26)
    {
        if (value == x) //when integer it takes in equals the x value.
        {
            return alphabet[x]; //returns corresponding character in alphabet string
        }
        else x++; //if it doesn't equal x, add one each time to move onto the next letter of alphabet.
    }
    return ' ';
}


string encryption(string encrypt)
{
    string newMessage = encrypt;

    for(int x = 0; x<newMessage.size(); x++)
   {
        int y = rand(); //placed in the for loop so the random value changes each time the loop runs.
        newMessage[x] = changeBack((assignVal(encrypt[x])+ y) % 26); //adding random value to each character
        //in the string, then using modulus operator to ensure the operation = value between 0 and 25
   }
    return newMessage;
}

string decryption(string decrypt)
{
    string newMessage = decrypt;

    for(int x = 0; x<newMessage.size(); x++)
    {
        int y = rand(); //placed in the for loop so the random value changes each time the loop runs.
        newMessage[x] = changeBack(((assignVal(decrypt[x]) - y)%26) + 26); //subtracting random value, modulus
        //operator again to ensure we get a value between 0 and 25, and then adding 26 to reverse encrypt.

        if((((assignVal(decrypt[x])- y) % 26)+ 26) == 26)//When the encrypted message contains letter A,
            //(assignVal(decrypt[x])-y)%26 + 26 equals 26. If this happens, changeBack won't function properly.
        {
            newMessage[x] = changeBack(0); //sending value of 0 to ChangeBack to ensure A will be returned.
        }

    }

    return newMessage;
}





