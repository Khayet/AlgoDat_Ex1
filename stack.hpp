#include <list>

template<typename T>
class Stack
{
public:
  bool empty() const {
    return my_list.empty();
  }

  int size() const {
    return my_list.size();
  }

  T const& top() const {
    return my_list.front();
  }

  void push(const T& value) {
    my_list.push_front(value);
  }

  void pop() {
    my_list.pop_front();
  }

private:
  std::list<T> my_list;
};
