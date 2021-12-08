// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Dec. 8, 2021
// This program allows a user to guess a number between 0 and 9
#include <iostream>
#include <iomanip>


// declare constants
int CONST_NUM = 8;


int main() {
  // get input from user
  int userNumber;
  std::cout << "I have picked a number between 0 and 9!\n";
  std::cout << "Guess my number!.\n";
  std::cout << " \n";
  std::cout << "Enter your guess: ";
  std::cin >> userNumber;

  // process/ouput
  if (userNumber == CONST_NUM) {
      std::cout << "You guessed correctly!.\n";
  } else {
      std::cout << "Sorry that is incorrect. Try again!\n";
      std::cout << " \n";
      main();
  }
}
