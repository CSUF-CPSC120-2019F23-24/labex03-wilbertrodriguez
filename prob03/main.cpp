// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{
  double height;
  std::cout << "What is your height? ";
  std::cin >> height;
  //obtains the height of the user
  double heightinfeet1 = height / 12;
  //Divides the height by inches in a foot
  int heightinfeet2=heightinfeet1;
  //removes the decimal
  double heightininches1=heightinfeet1-heightinfeet2;
  //obtains the decimal by removing the feet from the feet with the decimal
  int heightininches2=heightininches1*12;
  //Calculates the inches
  std::cout << heightinfeet2 <<"'"<< heightininches2<<"\"\n";
  //sends out your height in feet and inches

  return 0;
}
