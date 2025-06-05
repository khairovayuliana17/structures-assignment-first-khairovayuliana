
// declare Point structure here
struct Point {
    // your code here
    double x, y;
};

// declare Circle structure here
struct Circle {
    // your code here ("center" and "radius" (look for expected names in test.cpp))
    Point center;
    double radius;
};
double circleArea(Circle c);
double circleLength(Circle c);
bool isPointInside(Circle c, Point p);
