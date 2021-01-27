#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    a=2;
    cout<<"Enter a positive number:";
    cin>>b;

    if(b<3){
        cout<<"The given number is not prime"<<endl;
    }
    else{
        do{
            c=b%a;
            a++;
            if(c!=0){
                if(a=b){
                    cout<<"The given number is prime"<<endl;
                }
                else{
                    continue;
                }
            }
            else{
                cout<<"The given number is not prime"<<endl;
                break;
            }
        }while(a<b);
    }

    return 0;
}