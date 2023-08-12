#include<iostream>
using namespace std;

int main()
{
    char sch[100], tch;
    bool flag = false;
    for (int i = 0; i < 100; i++)
    {
        tch = getchar();
        sch[i] = tch;
        if (tch == '\0')
        {
            break;
        }
        if (tch == '\n')
        {
            sch[i] = '\0';
            break;
        }
        if (tch == ' ')
        {
            if (flag == true)
            {
                tch = '\0';
                break;
            }
            else
            {
                --i;
                continue;
            }
        }
        flag = true;
    }
    for (int i = 0; i < 100; i++)
    {
        if (sch[i] == '\0')
        {
            break;
        }
        cout << sch[i];
    }
    
    return 0;
}
