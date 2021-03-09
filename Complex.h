#include <iostream>
#include "Complex.h"

int main ()
{
  Complex c;
  std::cout << c.re() << c.re () << std:: endl;
  std:: string s= "-1-1i";
  c << s ;
  std:: cout << c.re () << c.re () << std::endl;
  std:: string s2 = "";
  c >> s2;
  std:: cout << s2 std::endl; 
}