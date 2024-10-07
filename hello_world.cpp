/*=================================================
** Program: hello_world.cpp
** Author: Saxon Payne
** Description: This program prints "Hello World" to the console
** Input: None
** Output: Prints "Hello World" text to the console
==================================================*/

#include <iostream>

int main() {
  std::cout << "Hello world";
  return 0;
}

// 1. Question 1: What happens when you forget the semicolon at the end of the
// cout statement? Be specific. YOU GET A SYNTAX ERROR.
//
// 2. Question 2: What happens when you forget to include iostream, i.e. remove
// #include <iostream> from the program? Be specific.
// THERE IS AN UNDECLARED IDENTIFIER ERROR
//
// 3. What happens when you put hello world on a new line?
//
//  ANOTHER ERROR NO SEMICOLON.
//
// 4. Question 4: What happens when you put World!” on a new line? Be specific
//
//  YOU GET A SYNTAX ERROR "" MISSING
//
// 5.What happens when you remove the << std::endl? What is the difference in
// having it and not having it?
//
// WHEN YOU REMOVE ENDL IT SENDS NEXT COUT TO SAME LINE
//
//
// 6. What happens if you forget to include the main function? Note: Instead of
// removing the lines from the file, comment them out using //. Put a // in
// front of the lines with int main() {, return 0;, and }. Be specific.
//
// There is a unqualified-id error. It also won't run becuase it must have a
// main function.
