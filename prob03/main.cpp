// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{
  int height;
  std::cout << "What is your height? ";
  std::cin >> height;
  //obtains the height of the user
  int heightinfeet = height / 12;
  //finds the height
  double heightininches = height % 12;
  //finds the inches
  std::cout << heightinfeet <<"'"<< heightininches<<"\"\n";
  //sends out your height in feet and inches

  return 0;
}
