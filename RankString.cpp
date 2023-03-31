/*
PIC 10A Homework 2, RankString.cpp
Author: Jacob Ramos
Date: 02/06/2023
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    //Declare strings being sorted
    string str1, str2, str3;
    //Prompt the user to enter three strings
    cout << "Please enter three strings: " << endl;
    //Read the strings from the input
    getline(cin, str1);
    getline(cin, str2);
    getline(cin, str3);
    
    cout << "Descending dictionary order: " << endl;
    //Checking if str1 is the largest string and if str2 > str3
    if ((str1 > str2) && (str1 > str3)) {
        if (str2 > str3) {
            cout << str1 << '\n' << str2 << '\n' << str3 << endl;
        } else {
            cout << str1 << '\n' << str3 << '\n' << str2 << endl;
        }
        
    } else {
        //Checking if str2 is the largest string and if str1 > str3
        if ((str2 > str1) && (str1 > str3)) {
            if (str1 > str3) {
                cout << str2 << '\n' << str1 << '\n' << str3 << endl;
            } else {
                cout << str2 << '\n' << str3 << '\n' << str1 << endl;
            }
        } else {
            //Checking if str3 is the largest string and if str1 > str2
            if (str1 > str2) {
                cout << str3 << '\n' << str1 << '\n' << str2 << endl;
            } else {
                cout << str3 << '\n' << str2 << '\n' << str1 << endl;
            }
        }
    }
    
    return 0;
}
