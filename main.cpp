#include <iostream>

class Singleton {
 public:
  static Singleton *getObject();

 private:
  Singleton() {}
  Singleton(Singleton &) = delete;

  static Singleton *object;
};

Singleton *Singleton::getObject() {
  if (object == nullptr) {
    object = new Singleton();
  }

  return object;
}

Singleton *Singleton::object = nullptr;

int main() {
  return 0;
}