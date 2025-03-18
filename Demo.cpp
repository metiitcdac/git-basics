#include <iostream>
using namespace std;

void isAdult(int age){
    if(age >= 18){
        cout << "Adult";
    }else{
        cout << "Minor";
    }
}

int main(){
    cout<<"Hello from git";
    int age = 20;
    int name = "Jack";
    isAdult(age);
    return 0;
}