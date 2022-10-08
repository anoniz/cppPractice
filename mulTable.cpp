#include<iostream>
using namespace std;

int main () {
    //Write a program that prints a multiplication table for numbers up to 12..
    int num;
    int till;
    cout<<"give me number you want multiplication table for \n";
    cin>>num;
    cout<<"kahan tak chie 10,12,15? type any \n";
     cin>>till;
     cout<<endl<<endl;
    for(int i = 1; i <=till; i++) {
        cout<< num * i<<endl;
    }

}