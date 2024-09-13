#include<iostream>
using namespace std;

int main(){
    int n;  
    cout<<"enter num:";
    cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout<< i<<"\n";
    // }

    // int sum =0;
    // for (int i = 1; i <= n; i=i+2){
    //     sum = sum+i;
    // }
    // cout<<sum;

    // bool isPrime = true;
    // for (int i = 2; i <= n/2; i++){
    //     if (n % i == 0) {
    //         isPrime = false;
    //          }
    // }
    // if (isPrime == true)
    // {
    //     cout << "is prime num." << endl;
    // }
    // else{
    //     cout << "is not prime num." << endl;
    // }

    // int sum =0;
    // for(int i = 1; i <= n; i++ ){
    //     if (i % 3 == 0) {
    //         sum = sum + i;
    //         }
    // }
    // cout<<"sum is: "<<sum;
    long fact = 1;
    if(n == 1 || n == 0){
        cout<<"fact:"<<1;
    }
    else{
        for(int i = 1; i <= n; i++){
            fact = fact * i;
        }
        cout<<"fact:"<<fact;
    }

    return 0;
}