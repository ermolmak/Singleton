#include <iostream>

class Singleton {
 public:
  static Singleton *getObject() {
    if (object == nullptr) {
      object = new Singleton();
    }

    return object;
  }

 private:
  Singleton() {}
  Singleton(Singleton &) = delete;

  static Singleton *object;
};

Singleton *Singleton::object = nullptr;

int main() {
  return 0;
}