#include"my_stl"
using namespace std;

int main()
{
    mySTL::String str = "LbLb\0LbLb";
    str.set_size(6ull);
    cout << str.ret_size() << endl;
    cout << str << endl;
    return 0;
}
