#include"my_stl"
using namespace std;

int main()
{
    mySTL::DList<int> dli(3, 1ull);
    dli.insert(0, 5);
    dli.erase(1);
    dli.ergodic();
    return 0;
}
