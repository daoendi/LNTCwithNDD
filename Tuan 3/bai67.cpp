#include <iostream>
using namespace std;
struct Rect{
    double x;
    double y;
    double sizeship;
    double height;
};
struct Ship{
    Rect ship;
    string id;
    double dx , dy;
    void getDL(){
    cin >> ship.x >> ship.y >> ship.sizeship >> ship.height >> id >> dx >> dy;
    }
    void moveship(){
        ship.x += dx;
        ship.y += dy;
    }
};
void display(const Ship& Ship){
        cout << Ship.id << " " << "(" << Ship.ship.x << "," << Ship.ship.y << ")";
        cout << endl;
}
int main(){
//    Ship a;
//    a.getDL();
//    display(a);
//    a.moveship();
//    display(a);
    Ship ship1,ship2;
    ship1.getDL();
    ship2.getDL();
    int loop = 0;
    while (loop < 10) {
    ship1.moveship(); ship2.moveship();
    display(ship1); display(ship2);
    loop++;
}
}
