#include <iostream>

using namespace std;

template <class T>
class Arithametic
{
private:
    T a;
    T b;

public:
    Arithametic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithametic<T>::Arithametic(T a, T b)
{
    this->a = a;
    this->b = b;
};

template <class T>
T Arithametic<T>::add()
{
    return a + b;
}

template <class T>
T Arithametic<T>::sub()
{
    return a - b;
}

int main(void)
{
    Arithametic<int> ar(10, 5);
    Arithametic<float> arFloat(10.5, 3.5);

    cout << ar.add() << endl;
    cout << arFloat.add() << endl;
    
    return 0;
}