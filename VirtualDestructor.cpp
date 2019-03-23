// virtual destructor example   base pointer problem
#include<iostream>

class base {
public:
    base()
    {
        std::cout << "Constructing base \n";
    }
    //using virtual guarantees that the object of the derived class is destructed properly
    virtual ~base()
    {
        std::cout << "Destructing base \n";
    }
};

class derived : public base {
public:
    derived()
    {
        std::cout << "Constructing derived \n";
    }
    ~derived()
    {
        std::cout << "Destructing derived \n";
    }
};

int main(void)
{
    derived *d = new derived();
    base *b = d;
    delete b;
    getchar();
    return 0;
}
