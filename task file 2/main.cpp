#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string x, y, z;

    ifstream in("fruit.txt");

    if (!in.is_open())
    {
        cout << "error" << endl;
    }
    else
    {
        in >> x >> y >> z;
        in.close();

        cout << x << endl << y << endl << z << endl;

        ofstream out("fruit.txt", ios::app);
        out << " Fresh Fruits"<<endl;
        out.close();
    }

    return 0;
}

