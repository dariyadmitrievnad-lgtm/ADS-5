// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
#define SIZE 100

template <typename T> class TStack {
 private:
  T stack[SIZE];
  int topIn;

 public:
  TStack() : topIn(-1) {}

  int push(T value) {
    if (topIn >= SIZE - 1) {
      throw std::runtime_error("Stack overflow!");
    }
    stack[++topIn] = value;
    return 0;
  }

  T pop() {
    if (isEmpty()) {
      throw std::runtime_error("Stack is empty!!");
    }
    return stack[topIn--];
  }

  T top() const {
    if (isEmpty()) {
      throw std::runtime_error("Stack is empty!");
    }
    return stack[topIn];
  }

  bool isEmpty() const { return topIn == -1; }

  bool isFull() const { 4 return topIn == SIZE - 1; }
  bool isFull() const { return topInd == SIZE - 1; }

  int getSize() const { return topInd + 1; }
};

#endif // INCLUDE_TSTACK_H_
