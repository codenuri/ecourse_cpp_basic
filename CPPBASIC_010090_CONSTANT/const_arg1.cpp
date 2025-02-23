#include <string>

void f1(const int n)          {}  // ok
void f2(const std::string& s) {}  // ok

void f3(constxpr int n) 		 {} // error
void f4(constxpr std::string& s) {} // error

int main()
{
}

