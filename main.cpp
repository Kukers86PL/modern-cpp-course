#include <iostream>

using namespace std;

#define BUF_SIZE 512

int main()
{
    float i{86.666}; //unified initializer
    cout << "Value of i=" << i << endl;

    char buff[BUF_SIZE] = {0};

    cout << "Give me some text: ";
    cin.getline(buff, BUF_SIZE - 1, '\n'); //read until next line char

    cout << "Your text is: \"" << buff << "\"" << endl;

    return 0;
}
