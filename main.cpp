#include <iostream>
#include <string>
#include "stack.hpp"
#include "queue.hpp"

bool argument_errors(int num_args) {
  if (num_args != 2) {
    std::cerr << "Incorrect number of arguments. \n Provide a string to check." << std::endl;
    return true;
  }

  return false;
}

bool is_palindrome(std::string const& str) {
  Queue<char> my_queue;
  for (auto i : str) my_queue.push(i);
  
  Stack<char> my_stack;
  for (auto i : str) my_stack.push(i);

  for (auto i : str) {
    if (my_queue.front() != my_stack.top()) return false;
    my_queue.pop();
    my_stack.pop();
  }

  return true;
}

int main(int argc, char* argv[]) {
  if (argument_errors(argc)) return 0;

  std::string str = argv[1];  

  if (is_palindrome(str)) {
    std::cout << str << " is a palindrome." << std::endl;
  } else {
    std::cout << str << " is NOT a palindrome." << std::endl;
  }

  return 0;
}
