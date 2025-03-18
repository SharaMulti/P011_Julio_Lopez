
/* Amerike university
  Author: Julio López
  Practice #: 11
  Date: 28/02/25
  Description: This program shall ask the user for a number INT, and the console shall dispense how many of numbers there is*/

  #include <iostream>
  using namespace std;

  int Result(int Num){
    int Counter = 0;
    int Resul;
    int Minus = 10;

    while(Resul >= 0)
    {
        Counter ++;
        Resul = Num - Minus;
        Minus = Minus * 10;
    }

    return Counter;
  }
  int main(){

    int Num;

    cout << "Type a Number ";
    cin >> Num; 
    cout << Result(Num);

    return  0;
  }
