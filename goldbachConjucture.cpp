#include<iostream>
using namespace std;

int isPrime(int num) {
     int checkPrime = 0;
   for(int i = 2; i <= num/2; i++) {
      if(num % i == 0) 
          checkPrime++;
   }
       if(checkPrime == 0) 
          return num;
       else 
          return 0; 
}

int main () {
  
  int input;
  cout<<"give me any number \n";
  cin>>input;

  int size = input/2;
  int primeNumbers[size];
  int limit = 0;
  int arraySize = 0;
   for(int i = 2; i < input; i++) {
      int prime = isPrime(i);
      if(prime == i) {
         limit++;
         primeNumbers[arraySize] = prime;
         arraySize++;
      }
   }   
      cout<< " all prime numbers \n";
       for(int i = 0; i < arraySize; i++) {
           cout<< primeNumbers[i]<<endl;
    }    
       cout<<endl<<endl<<endl;
        
        int checker = 0;
       for(int i = 0; i < arraySize; i++) {
          int sum = primeNumbers[i] + primeNumbers[i];
          int sum1 = 0;

          for(int j = 1; j < arraySize; j++) {
             sum1 = primeNumbers[i] + primeNumbers[j];
                if(sum1 == input) {
          cout<< input << " is sum1 of " << primeNumbers[i] << " and " << primeNumbers[j];
          cout<<endl;
          checker++;
          break;
         
         }
           else if(sum == input) {
            cout<< input << "  is sum of " << primeNumbers[i] << " and " << primeNumbers[i];
             cout<<endl;
             checker++;
             break;
             
           }
          }
              if(checker != 0)
              break;
      }  
          if(checker == 0) {
            cout<< input << " is not some of any two primes \n";
           }
}