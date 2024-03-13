#include <iostream>
using namespace std;
struct Point {
    int x;
    int y;
    void getPoint(){
    cin >> x >> y;
    }
};

struct Rect {
    int x;
    int y;
    int w;
    int h;
    void getHCN(){
    cin >> x >> y >> w >> h;
    }
    bool contains(const Point& point) const {
        return (point.x >= x && point.x <= x + w &&
                point.y >= y && point.y <= y + h);
    }
};

int main() {
    Point p;
    p.getPoint();
    Rect HCN;
    HCN.getHCN();
    if (HCN.contains(p)) {
        cout << "p thuoc HCN" << endl;
    } else {
        cout << "p nam ngoai HCN" << endl;
    }

    return 0;
}
