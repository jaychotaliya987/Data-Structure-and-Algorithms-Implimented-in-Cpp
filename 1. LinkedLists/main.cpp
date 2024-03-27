#include <iostream>
 
struct Point
{
    int x;
    int y;
    bool operator==(const Point&) const = default;
    // ... non-comparison functions ...
};
// compiler generates element-wise equality te
sting
 
int main()
{
    Point pt1{3, 5}, pt2{2, 5};
    std::cout << std::boolalpha
        << (pt1 != pt2) << '\n'  // true
        << (pt1 == pt1) << '\n'; // true
 
    struct [[maybe_unused]] { int x{}, y{}; } p, q;
    //if (p == q) { } // Error: 'operator==' is not defined
}