#include <bits/stdc++.h>

using namespace std;
class Box
{
    int l, b, h;

public:
    Box();
    Box(int, int, int);
    Box(Box &ob)
    {
        this->l = ob.l;
        this->b = ob.b;
        this->h = ob.h;
    }
    int getLength();             // Return box's length
    int getBreadth();            // Return box's breadth
    int getHeight();             // Return box's height
    long long CalculateVolume(); // Return the volume of the box
};