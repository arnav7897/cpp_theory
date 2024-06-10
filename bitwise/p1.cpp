// there are bitwise operators that help in manupilation in bits level 
// just like we are having and(&) or(|) not-gate(~) xor(^)

#include<iostream>
using namespace std;
int main(){
    int a=-5;
    int b=6;
    cout<< " a and b "<< (a&b) <<endl;
    cout<< " a or b "<< (a|b) <<endl;
    cout<< " not a "<< (~a) <<endl;
    cout<< " a xor b "<< (a^b) <<endl;

//  left shift operators eg (4<< 2) ----> 4 ko 2 baar left shift karo
// right shift operators eg (4>>2) -----> 4 ko 2 baar right shift karo

    cout<< "a left shift by 2 is "<< (a<<2) <<endl;
    cout<< "a right shift by 4 is "<< (a>>4) <<endl;

//  for +ve no. left shift and right shift padding is 0 
//  for -ve no. left shift and right shift padding is compiler dependent

//  SOME IMPORTANT RESULTS -->
//  a^a = 0;  a^0 = a ; a^1= ~a

    return 0;
}
