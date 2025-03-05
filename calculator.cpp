#include <iostream>
using namespace std;


int main(){
   float num1, num2;
   char operation;
   cout<< "***SENYO CALCULATOR***"<<endl;
   cin>> num1 >> num2 >> operation;

   switch(operation)
   {
    case '+':cout<< num1 << num2 << "=" << num1 + num2; break;
    case '-':cout << num1 << num2 << "="<< num1 - num2; break;
    case '/':cout << num1 << num2 << "="<< num1 / num2; break;
    case '*':cout << num1 <<  num2 << "="<< num1 * num2;break;

   }
   cout << "Thanks For using SENYO CALCULATOR. NEW UPDATE WILL BE AVAILABLE SOON!";






    return 0;
}