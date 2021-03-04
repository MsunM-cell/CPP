#include <iostream>

using namespace std;

class A
{
public:
    A(int n)
    {
        x = n;
    }
    int get()
    {
        return x;
    }

private:
    int x;
};

int main(void)
{
    A a[3] = {
        A(1),
        A(4),
        A(5)};
    for (int i = 0; i < 3; i++)
        cout << a[i].get() << endl;

    return 0;
}