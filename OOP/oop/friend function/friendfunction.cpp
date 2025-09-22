// want to in=mplemn the friend function in the same file 
#include <iostream>
using namespace std;
class Box
{
    int width;
    int height;
public:
    Box(int w, int h)
    {
        width = w;
        height = h;
    }
    // friend function
    friend int area(Box b);
};
int area(Box b)
{
    return b.width * b.height;
}
int main()
{
    Box b(10, 5);
    cout << "Area of box: " << area(b) << endl;
    return 0;
}
// Area of box: 50  