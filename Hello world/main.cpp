#include <iostream>

using namespace std;


void forloopHello(void)
{
	for (int counter = 0; counter < 10 ; counter++)
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
