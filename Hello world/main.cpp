#include <iostream>

using namespace std;

int counter_v = 10;

void forloopHello(void)
{
	for (int counter = 0; counter < counter_v ; counter++)
    {
        cout << "Hello THJ\r\n";

    }
}

int main()
{
    cout << "Hello world!!!" << endl;
    forloopHello();
    return 0;
}
