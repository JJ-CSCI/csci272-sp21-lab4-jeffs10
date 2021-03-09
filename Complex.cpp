#include "Complex.h"
Complex::Complex (int real, int imaginary)
{
  this->real = real;
  this->imaginary = imaginary;
}

int Complex::im() {
  return this-> imaginary;
}

int Complex::re() {
  return this ->real;
}

void Complex:: operator>> (std:: string& s) const {
  s.append(std::to_string(this->real));
  if (this -> imaginary > 0)
  {
    s.append("+")
  }

  s.append(std::to_string(this->imaginary));
  s.append ("i");
}
void Complex:: operator<<(const std::string & s)
{
  if (s[0]== '-')
  {
    int re = s[1]-'0';
    this-> real = -1 * re;

  }
  else
  {
    this-> real = s[0] - '0'; 
  }
  int ipos = s.find ("i");
  int bpos = ipos - 1;
  int bsignpos = ipos -2;
  if (s[bsignpos]== '-')
  {
    this -> imaginary = -1 * (s[bpos] - '0');
  }
  else 
  {
    this ->imaginary =s[bpos] -'0';
  }
}
