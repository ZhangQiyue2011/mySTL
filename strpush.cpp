#include"my_stl"
using namespace std;

int main()
{
    mySTL::String str("LbLbLbLb");
    mySTL::String str2("LbLb\0LbLb");
    str.push('H');
    str2.push('H');
    cout << str << endl;
    cout << str2 << endl;
    return 0;
}
