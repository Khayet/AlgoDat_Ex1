#include <iostream>
#include <string>
#include "stack.hpp"
#include "queue.hpp"

bool argument_errors(int num_args) {
  if (num_args < 2) {
    std::cerr << "Missing argument to check for palindrome." << std::endl;
    return true;
  }

  if (num_args > 2) {
    std::cerr << "Too many arguments." << std::endl;
    return true;
  }

  return false;
}

bool is_palindrome_stack(std::string const& str) {
  Stack<char> my_stack;

  for (auto i : str) {
    my_stack.push(i);
  }

  if (str.size() != my_stack.size()) return false;

  for (auto i : str) {
    if (i == my_stack.top()) {
      my_stack.pop();
    } else {
      return false;
    }
  }

  if (my_stack.empty()) {
    return true;
  }

  return false;
}

bool is_palindrome_queue(std::string const& str) {
  Queue<char> my_queue;

  for (auto i : str) {
    my_queue.push(i);
  }

  if (str.size() != my_queue.size()) return false;

  for (auto i : str) {
    if (i != my_queue.back()) return false;
    my_queue.pop();
  }

  if (my_queue.empty()) {
    return true;
  }

  return false;
}

int main(int argc, char* argv[]) {
  if (argument_errors(argc)) return 0;

  std::string str = argv[1];

  std::cout << std::endl;

  std::cout << "Computed with a Stack: " << std::endl;
  if (is_palindrome_stack(str)) {
    std::cout << str << " is a palindrome" << std::endl;
  } else {
    std::cout << str << " is NOT a palindrome" << std::endl;
  }

  std::cout << std::endl;

  std::cout << "Computed with a Queue: " << std::endl;
  if (is_palindrome_stack(str)) {
    std::cout << str << " is a palindrome" << std::endl;
  } else {
    std::cout << str << " is NOT a palindrome" << std::endl;
  }

  std::cout << std::endl;

  return 0;
}
