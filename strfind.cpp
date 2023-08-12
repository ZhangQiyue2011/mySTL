#include"my_stl"
using namespace std;

int main()
{
    mySTL::String str = "abcdefghcdeg";
    mySTL::String strf = "cde";
    /////cout << str.find(strf) << endl;
    cout << str.find(strf, 4ull) << endl;
    mySTL::String strf2 = /*str.cut_str(2, 3)*/"cdf";
    if (strf == strf2)
    {
        cout << "Yes.";
    }
    else
    {
        cout << "No.";
    }
    cout << "\n";
    return 0;
}
