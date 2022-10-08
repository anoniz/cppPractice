#include<iostream>
using namespace std;

int main () {

       int count = 0;
    int x = 3;
    while(count++ < 3) {
      int y = (1 + 2 * count) % 3;
      switch(y) {
         default:
         case 0: x -= 1; break;
         case 1: x += 5;
      }
    }
    cout<<x;
 } 

