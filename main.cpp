#include <iostream>
#include <string>
#include "stack.hpp"

bool is_palindrome_stack(std::string const& str) {
  Stack<char> my_stack;
  return false;
}

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Missing argument to check for palindrome." << std::endl;
    return 0;
  }

  if (argc > 2) {
    std::cerr << "Too many arguments." << std::endl;
    return 0;
  }

  std::string str = argv[1];

  std::cout << "Computed with a Stack: " << std::endl;
  if (is_palindrome_stack(str)) {
    std::cout << str << " is a palindrome" << std::endl;
  } else {
    std::cout << str << " is NOT a palindrome" << std::endl;
  }


  return 0;
}
