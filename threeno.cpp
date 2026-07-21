#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a>b && a>c){
        cout<<"a is bigger"<<endl;
    }
    if (b>a && b>c){
        cout<<"b is bigger";
    }
    else{
        cout<<"c is bigger";
    }
    return 0;
}