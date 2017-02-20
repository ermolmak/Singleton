#include <chrono>
#include <iostream>
#include <thread>

class Singleton {
 public:
  static Singleton *getObject();
  
  std::chrono::system_clock::time_point getTime();
 
 private:
  Singleton() : time(std::chrono::system_clock::now()) {}
  Singleton(Singleton &) = delete;
  
  std::chrono::system_clock::time_point time;
};

Singleton *Singleton::getObject() {
  static Singleton object;
  return &object;
}

std::chrono::system_clock::time_point Singleton::getTime() {
  return time;
}

int main() {
  auto time1 = Singleton::getObject()->getTime();
  std::this_thread::sleep_for(std::chrono::duration<int, std::milli>(3000));
  auto time2 = Singleton::getObject()->getTime();
  
  std::cout << std::chrono::duration<double, std::milli>(time2 - time1).count() << std::endl;

//  Singleton singleton;

//  Singleton singleton = *Singleton::getObject();
  return 0;
}