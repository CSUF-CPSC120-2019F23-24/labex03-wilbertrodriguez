// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{
  double height;
  std::cout << "What is your height? ";
  std::cin >> height;
  double heightinfeet1 = height / 12;
  int heightinfeet2=heightinfeet1;
  double heightininches1=heightinfeet1-heightinfeet2;
  int heightininches2=heightininches1*12;
  std::cout << heightinfeet2 <<"'"<< heightininches2<<"\"\n";

  return 0;
}
