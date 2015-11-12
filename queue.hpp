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
    return my_list.front();
  }

  T const& back() const {
    return my_list.back();
  }

  void push(const T& value) {
    my_list.push_back(value);
  }

  void pop() {
    my_list.pop_front();
  }

private:
  std::list<T> my_list;
};
