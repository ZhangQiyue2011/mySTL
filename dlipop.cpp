#include"my_stl"
using namespace std;

int main()
{
    mySTL::DList<mySTL::ullint> dli(0ull);
    for (mySTL::ullint i = 0; i < dli.ret_size(); i++)
    {
        dli[i] = i + 3ull;
        cout << dli[i] << " ";
    }
    cout << endl;
    mySTL::ullint out = dli.pop();
    mySTL::ullint out2 = dli.pop_front();
    dli.ergodic();
    cout << out << " " << out2 << endl;
    return 0;
}