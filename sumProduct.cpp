#include<iostream>
using namespace std;

int main () {
   // A program which will ask if you want sum or product
   // from 0 to N ....
   cout<<"give me any number \n";
   int num;
   cin>>num;
   int sum = 1;
   char chos;
   cin>>chos;

    for(int i = 1; i < num; i++) {
        if(chos == 's') {
            sum = sum + i;
            if(num-1 == i)
            sum--;
        }

        else if(chos == 'p') {
            sum = sum * i;
            cout<<sum;
        }
        
    }

    cout<<"the result is "<<sum;
   
 
}