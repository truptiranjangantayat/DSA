#include <iostream>
using namespace std;


int main(){
 
    int n;
    cout << "enter the num:";
    cin >> n;
    if (n % 2 == 0)
    {
      cout << "n is even\n";
    }
    else{
        cout << "n is odd\n";
    }
    return 0;
}