#include <list>

template<typename T>
class Queue {
public:
  bool empty() const {
    return my_list.empty();
  }

  int size() const {
    return my_list.size();
  }

  T const& front() const {
    if (!empty()) {
      return my_list.front();
    } else {
      std::cerr << "Error: front() cannot return on empty Queue." << std::endl;
    }
  }

  T const& back() const {
    if (!empty()) {
      return my_list.back();
    } else {
      std::cerr << "Error: back() cannot return on empty Queue." << std::endl;
    }
  }

  void push(const T& value) {
    my_list.push_front(value);
  }

  void pop() {
    if (!empty()) {
      my_list.pop_back();
    } else {
      std::cerr << "Error: Cannot pop on empty Queue." << std::endl;
    }
  }

private:
  std::list<T> my_list;
};
