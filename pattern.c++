#include<iostream>
using namespace std;

int main(){
    int n;  
    cout<<"enter num:";
    cin>>n;

    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    // A B C D 
    // A B C D 
    // A B C D 
    // A B C D 

    // char ch = 'A';

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout<<char(ch + (j-1))<<" ";
    //     }
    //     cout<<endl;
    // }




    // 1 2 3 
    // 4 5 6 
    // 7 8 9  
    // int num = 0;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         num = num + 1;
    //         cout<<num<<" ";
    //     }
    //     cout<<endl;
    // }


    // * 
    // * * 
    // * * * 
    // * * * * 

    //   for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<'*'<<" ";
    //     }
    //     cout<<endl;
    // }




    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4 
    

    //  for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    
    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 

    // for(int i = 1; i <= n; i++){
    //     int num = 0;
    //     for(int j = 1; j <= i; j++){
    //         num = num + 1;
    //         cout<<num<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1 
    // 2 1 
    // 3 2 1 
    // 4 3 2 1 
    // for(int i = 1; i <= n; i++){
    //     int num = (i+1);
    //     for(int j = 1; j <= i; j++){
    //         num = num - 1;
    //         cout<<num<<" ";
    //     }
    //     cout<<endl;
    // }


    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 

    // int num = 0;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         num = num + 1;
    //         cout<<num<<" ";
    //     }
    //     cout<<endl;
    // }

    
    // 1111
    //  222
    //   33
    //    4
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = n; k >= i; k--){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }



    // AAAA
    //  BBB
    //   CC
    //    D
    // char ch = 'A';
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = n; k >= i; k--){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    //     ch = char( ch +1);
    // }

    //      1
    //     121
    //    12321
    //   1234321
    
        // for(int i = 1; i <= n; i++){
        //     for(int k = 1; k <= n-i; k++){
        //         cout<<" ";
        //     }
        //     for(int j = 1; j <= i; j++){
        //         cout<<j;
        //     }
        //     for(int l =i-1; l >=1; l--){
        //         cout<<l;
        //     }
        //     cout<<endl;
        // }


        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n-i; j++){
                cout<<" ";
            }
            cout<<"*";
            for(int k =i-1; k >=1; k--){
                cout<<" ";
                cout<<"*";
            }
            cout<<endl;

        }


    return 0;

}