Coming to the first part

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

Data members and their access levels
    
        a -> private [visibility - Base]
        b -> protected [visibility - Base and derived]
        c -> public [visibility - anywhere]

This line is a constructor 

        Base(int aa = 1, int bb = 2, int cc = 3) : a(aa), b(bb), c(cc) {}

initializes a with aa, b with bb, c with cc

This line

        virtual ~Base() {}

ensures proper cleanup if you delete a Derived object through a Base* pointer.

-----------------------------------------

Coming to the second part,

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

This line

    Derived : public Base

means:- 

(i) Public members of Base remain public in Derived.

(ii) Protected members of Base remain protected.

(iii) Private members of Base are not accessible.

Member variable

    int j

is private to Derived.

    Derived(int jj = 0): j(jj)

initializes j only, not the base class members.

Since we didn’t explicitly call a Base constructor, it uses the default one → Base(1, 2, 3).

In method change(),

    j=b

Here, b is accessible because it’s protected.

So Derived can use it directly.

If we tried "j = a;" it would cause an error — a is private in Base.

In method printValue(), it simply prints value of j.

Now, the last part,

    int main()
    {
        Base base;
        Derived derived;

        std::cout << "Base::c = " << base.c << std::endl;

        derived.change();
        derived.printValue();
    }

(i) Base base -> creates a Base object with a=1, b=2, c=3

(ii) Derived derived; -> creates a Derived object:

    Base part: a=1, b=2, c=3

    Derived part: j=0

(iii)  std::cout << "Base::c = " << base.c << std::endl; -> Accesses public member c and prints "Base::c = 3"

(iv) derived.change(); -> inside it j = b; as b = 2 is coming from Base constructor

(v) derived.printValue(); -> prints "Derived::j = 2"