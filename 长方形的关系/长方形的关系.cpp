#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdbool.h>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) : length(l), width(w) {     }
    int getArea() {
        return length * width;
    }
    int get_length() {
        return length;
    }
    int  get_width() {
        return width;
    }
};
class cover {
public:
    bool iscover(Rectangle r1, Rectangle r2) {
        if (r1.getArea() >= r2.getArea()) {
            if ((r1.get_length() >= r2.get_length() && r1.get_width() >= r2.get_width())|| (r1.get_length() >= r2.get_width() && r1.get_width() >= r2.get_length())){
                return true;
            }
            else if (r1.get_length() < r2.get_length() && r1.get_width() < r2.get_width()) {
                return false;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
};
int main() {
    int a = 0, b = 0;
    int c = 0, d = 0;
    cin >> a >> b >> c >> d;
    Rectangle r1(a, b);
    Rectangle r2(c, d);
    cover co1;
    if (co1.iscover(r1, r2)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}