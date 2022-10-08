#include<iostream>
using namespace std;

struct student
{
      int id;
   string name;
   double age;
   string fn;
};

void getRecord(student s1[],int size) {
      for(int i = 0; i < size; i++) {
         cout<<"give id for student "<<i+1<<" ..& don't start with 0 plz,,things may get messey"<<i+1<<endl;
         cin>>s1[i].id;
         cout<<"give name for student "<<i+1<<endl;
         cin>>s1[i].name;
         cout<<"give age for student"<<i+1<<endl;
         cin>>s1[i].age;
         cout<<"give father name for student"<<i+1<<endl;
         cin>>s1[i].fn;
         cout<<endl;
         cout<<endl;
     }

}
//////////////////////////////////////////////////////////////////////////////////////////
void showRecord(student s1[],int size) {
      for(int i=0; i < size; i++) {
          cout<<"id of student "<<i+1<<endl;
          cout<<s1[i].id<<endl;
          cout<<"name of student "<<i+1<<endl;
          cout<<s1[i].name<<endl;
          cout<<"age of student "<<i+1<<endl;
          cout<<s1[i].age<<endl;
          cout<<"father name of student "<<i+1<<endl;
          cout<<s1[i].fn<<endl;
          cout<<endl;
      }
}
///////////////////////////////////////////////////////////////////////////////////////
void youngStudent(student s1[],int size) {
    double chk;
    chk = s1[0].age;
    for(int i=0;i<size;i++){
        if( chk > s1[i].age )
         chk = s1[i].age;
    }
      for(int i=0;i<size;i++){
          if( chk == s1[i].age ){
          cout<<"the youngest students have age "<<endl;
          cout<<chk<<endl;
          }
      }
}
/////////////////////////////////////////////////////////////////////////////////////
void sortID(student s1[],int size) {
    cout<<"if you wanna sort with name or father name type 1 \n";
    cout<<"if you wanna sort with id or age type 2 \n";
    string inpt;
    double inpt1,inpt2;
    cin>>inpt2;
    cout<<"now type that attribute \n";
    if(inpt2 == 1)
    cin>>inpt;
    else if(inpt2 == 2)
    cin>>inpt1;
    else
    cout<<"wrong input \n";
/////////////////////////////////////////////////////////////////////////////////////
    int mock = 0;
    for(int i=0;i<size;i++){
        if(inpt1==s1[i].id || inpt1==s1[i].age || inpt==s1[i].name || inpt==s1[i].fn){
            mock++;
            cout<<"found below records \n";
            cout<<"id ="<<s1[i].id<<"    "<< "name = "<<s1[i].name<<"   "<<"age = "<<s1[i].age<< "   "<<"father's name = "<<s1[i].fn<<endl;   
        }     
    }
       if(mock == 0)  {
              cout<<"No match for given value!, maybe typed wrong! try again"<<endl;
          }
}
////////////////////////////////////////////////////////////////////////////////////

void sort(student s1[],int size) {
      sortID(s1,size);
} 
//////////////////////////////////////////////////////////////////////////

int main () {
    int size;
    cout<<"How many student's record you wanna store? type number \n";
    cin>>size;
    student s1[size];
    getRecord(s1,size);
    int exit;
    do {
    cout<<endl<<endl;
    cout<<"What do you wanna do? \n" <<endl;
    cout<<"1. See given record of Students? \n";
    cout<<"2. See the youngest student? \n";
    cout<<"3. Some Sorting? \n";
    cout<<"4. Exit ? \n";
    int chos;
    cin>>chos;
    exit = chos;
    cout<<endl<<endl;
    switch(chos) {
        case 1:
        showRecord(s1,size);
        break;
        case 2:
        youngStudent(s1,size);
        break;
        case 3:
        sort(s1,size);
        break;
        default:
        cout<<"bye bye have a good day! \n";
    }
      } while(exit != 4);

}