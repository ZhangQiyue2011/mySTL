#include"my_stl"
using namespace std;

int main()
{
    mySTL::String str = "Fdb";
    //mySTL::String str2 = str;
    mySTL::String str2 = "Fde";
    cout << (str != str2) << endl;
    cout << (str <= str2) << endl;
    cout << (str2 <= str) << endl;
    cout << (str >= str2) << endl;
    cout << (str2 >= str) << endl;
    cout << ("Fdb" <= "Fde") << endl;
    return 0;
}
