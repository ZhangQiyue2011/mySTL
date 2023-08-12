#include"my_stl"
#include<iostream>
using namespace std;
typedef mySTL::List<int> Type;

int main()
{
    Type vec(3, 5ull);
    Type vec2(4, 3ull);
    Type vec3(vec + vec2);
    for (mySTL::ullint i = 0; i < vec3.ret_size(); i++)
    {
        cout << vec3[i] << " ";
    }
    cout << endl;
    return 0;
}
