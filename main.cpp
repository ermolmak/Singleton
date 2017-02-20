#include <iostream>

class Singleton {
 public:
  static Singleton *getObject() {
    return object;
  }

 private:
  Singleton() {}
  Singleton(Singleton &) = delete;

  static Singleton *object;
};

int main() {
  return 0;
}