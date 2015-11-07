#include <list>

template<typename T>
class Stack
{
public:
  bool empty() const {
    return my_list.empty();
  }

  T& top() const {
    if (!empty()) {
      return my_list.front();
    } else {
      std::cerr << "Error: top() cannot return on empty Stack.";
    }
  }

  int size() const {
    return my_list.size();
  }

  void push(const T& value) {
    my_list.push_front(value);
  }

  void pop() {
    if (!empty()) {
      my_list.pop_front();
    } else {
      std::cerr << "Error: Cannot pop on empty Stack.";
    }
  }

private:
  std::list<T> my_list;
};
