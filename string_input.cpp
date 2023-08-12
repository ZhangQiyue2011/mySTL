#include"my_stl"
using namespace std;

int main()
{
    mySTL::String str;
    try
    {
        cin >> str;
    }
    catch(const std::exception& e)
    {
        cerr << "In err!\n";
        std::cerr << e.what() << '\n';
    }
    cout << str << endl;
    cout << str.ret_size() << endl;
    for (mySTL::ullint i = 0; i < str.ret_size(); i++)
    {
        cout << (int)(str[i]) << " ";
    }
    
    return 0;
}
