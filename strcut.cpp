#include"my_stl"
using namespace std;

int main()
{
    mySTL::String str = "Hello World!\0lblblb";
    //std::cout << str.ret_min_size() << endl;
    //str.set_min_size();
    mySTL::String strcut(str.cut_str(6ull, 3ull));
    cout << strcut;
    return 0;
}
