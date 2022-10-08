#include<iostream>
using namespace std;   /// brick length 8.5 inch ,width 4.1 .d 0.6,0.3 inch,h = 2.8

float doubleBrick(float h,float l) {
    int inches = 12;
    float hight = h/2*inches;
    float lenght = l*inches;
    float brickLen = 8.5;
    float brickVol = 97.5;
    float totalArea = hight*lenght*brickLen;
    float totalBricks = totalArea/brickVol;
    return totalBricks;
}


float singleBrick(float h,float l) {
    int inches = 12;
    float hight = h/2*inches;
    float lenght = l*inches;
    float brickLen = 8.5;
    float brickVol = 97.5;
    float totalArea = hight*lenght*brickLen;
    float totalBricks = totalArea/brickVol;
    return totalBricks;
}

int main () {
float hight , length;
cout <<"give me hight of wall"<<endl;
cin>>hight;
cout<<"give me length of wall"<<endl;
cin>>length;

float b1 = doubleBrick(hight,length);
cout<<b1<<endl;







}