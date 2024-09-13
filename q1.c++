#include<iostream>
using namespace std;

int main (){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    // int c = int(ch);

    if(ch >= 'A' && ch <= 'Z'){
        cout << "The character is uppercase.";
    }
    else{
        cout << "The character is Lowercase.";
    }
    return 0;
}