#include<iostream>
using namespace std;

int main () {
  // make a program which gives all prime numbers 
  // in a range like upto 100..

  cout<<"give me any number \n";
  int num;
  cin>>num;
 int chk = 0;

 for(int j = 2; j <= num; j++ ) {
     
   for(int i = 2; i <= j/2; i++) {
    if(j % i == 0) {
      chk++;
    }
 }
  if(chk == 0)
  cout<<j<<endl;
  chk = 0;
 }




}