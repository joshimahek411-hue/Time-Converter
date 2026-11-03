
#include <iostream>
using namespace std;

class TimeConverter
{
    int h, m, s;

public:

    void set()
    {
        int total;

        cout << "Enter total seconds: ";
        cin >> total;

        h = total / 3600;
        m = (total % 3600) / 60;
        s = total % 60;
    }

    void show()
    {
        cout << "HH:MM:SS => ";

        cout << h << ":";

        if (m < 10)
            cout << "0";

        cout << m << ":";

        if (s < 10)
            cout << "0";

        cout << s;
    }
};

int main()
{
    TimeConverter t;

    t.set();
    t.show();

    return 0;
}
