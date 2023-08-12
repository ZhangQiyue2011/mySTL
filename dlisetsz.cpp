#include"my_stl"
using namespace std;

int main()
{
    mySTL::DList<mySTL::ullint> dli(7ull);
    for (mySTL::ullint i = 0; i < dli.ret_size(); i++)
    {
        dli[i] = i + 1;
    }
    cout << endl;
    dli.set_size(10ull);
    dli.ergodic();
    return 0;
}
