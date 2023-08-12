#include"my_stl"
using namespace std;

int main()
{
    mySTL::String str("LbLbLbLb");
    mySTL::String str2("LbLb\0LbLb");
    str.set_size(10ull);
    cout << str.ret_purifi_size() << endl;
    str2.set_size(10ull);
    cout << str2.ret_purifi_size() << endl;
    return 0;
}
