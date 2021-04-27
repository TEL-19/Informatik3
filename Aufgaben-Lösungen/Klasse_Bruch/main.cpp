#include "Bruch.hpp"
#include <iostream>

int main(){
   std::cout << "Hello Bruch\n";
   Bruch b1 (10, 4), b2(3, 4), b3(3,5);
   b1 = b1 + b2;
   std::cout << "b1: " << b1 << std::endl;
   b1.kuerzen();
   std::cout << "b1: " << b1 << std::endl;

}