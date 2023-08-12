#include"my_stl"
using namespace std;

int main()
{
    mySTL::String str(30ull);
    str = "大王HelloWorld\0lblblblb";
    cout << str << endl;
    str.ergodic();
    return 0;
}
