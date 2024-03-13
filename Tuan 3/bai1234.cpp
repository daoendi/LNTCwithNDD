#include <iostream>
using namespace std;
 struct Point {
    double x,y;
    void get(){

    cin >> x >> y;
    }
};
 void print(Point a){
    cout << "(" << a.x << "," << a.y << ")";
}
Point mid_point(Point a, Point b){
    Point c;
    c.x = a.x/2 + b.x/2;
    c.y = a.y/2 + b.y/2;
    return c;
}
int main(){
    Point a;
    a.get();
  //  print(a);
    Point b;
    b.get();
    print(mid_point(a,b));
}
