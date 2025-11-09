#include <iostream>

class Base {
private:
    int a;
protected:
    int b;
public:
    int c;
    Base(int aa = 1, int bb = 2, int cc = 3) : a(aa), b(bb), c(cc) {}
    virtual ~Base() {}
};

class Derived: public Base {
    int j;
public:
    Derived(int jj = 0) : j(jj) {}
    void change()
    {
        // 'b' is protected
        j = b;
    }
    void printValue()
    {
        std::cout << "Derived::j = " << j
                  << std::endl;
    }
};

int main()
{
    Base base;
    Derived derived;

    // 'a' and 'b' are private and protected
    // std::cout << base.a << std::endl;
    // std::cout << base.b << std::endl;
    std::cout << "Base::c = "<< base.c << std::endl;
    derived.change();
    derived.printValue();
}