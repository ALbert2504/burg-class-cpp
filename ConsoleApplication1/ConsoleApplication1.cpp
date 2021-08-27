#include <iostream>
using namespace std;

class Burg {
public:
    Burg(double inita = 2, double inith = 4) {
        a = inita;
        h = inith;
    }
    Burg(const Burg& b1) { a = b1.a; h = b1.h; }


    void countR() {
        r = a / 2;
    }
    
    double basePerimeter() {
        return 4 * a;
    }

    double baseArea() {
        return a * a;
    }

    double volume() {
        return (baseArea() * h) / 3;
    }

    double countSide() {
        l = sqrt((h * h) + (r + r));
    }

    double sideArea() {
        return 4 * ((a * h) / 2);
    }

    bool operator< (Burg obj) {
        return volume() < obj.volume();
    }

    bool operator> (Burg obj) {
        return volume() > obj.volume();
    }

    bool operator== (Burg obj) {
        return volume() == obj.volume();
    }

    void printBurg() {
        cout << a << ":Himqi Kogh" << endl;
        cout << h << ":Bardzrutyun" << endl;
        cout << r << ":Nergcac shrjanagci sharavigh" << endl;
        cout << l << ":Kogh" << endl;
        cout << sideArea() << ":Koghmnayin makerevuyti makeres" << endl;
        cout << baseArea() << ":Himqi makeres" << endl;
        cout << volume() << ":cavaly" << endl;
        cout << basePerimeter() << ":Himqi Paragic makeres" << endl;
    }



protected:
    double a;
    double r;
private:
    double h;
    double l;
};

class HatacBurg : public Burg {
public:
    HatacBurg(double inita2 = 1, double inith = 2) {
        a2 = inita2;
        h = inith;
    }
    HatacBurg(const HatacBurg& hb1) { a = hb1.a; h = hb1.h; a2 = hb1.a2; }



    void countR() {
        r = a / 2;
    }

    void countR2() {
        r2 = a2 / 2;
    }

    double basePerimeter() {
        return 4 * a;
    }

    double basePerimeter2() {
        return 4 * a2;
    }

    double baseArea() {
        return a * a;
    }

    double baseArea2() {
        return a2 * a2;
    }

    double volume() {
        return (h * (baseArea() + baseArea2() + sqrt(baseArea() * baseArea2()))) / 3;
    }

    double countSide() {
        l = sqrt((h * h) + ((a - a2) * (a - a2)));
    }

    double sideArea() {
        return (basePerimeter() + basePerimeter2() * h) / 2;
    }

    bool operator< (HatacBurg obj) {
        return volume() < obj.volume();
    }

    bool operator> (HatacBurg obj) {
        return volume() > obj.volume();
    }

    bool operator== (HatacBurg obj) {
        return volume() == obj.volume();
    }

    void printHatacBurg() {
        cout << a << ":Mec Himqi Kogh" << endl;
        cout << a2 << ":Poqr Himqi Kogh" << endl;
        cout << h << ":Bardzrutyun" << endl;
        cout << r << ":Mec himqin Nergcac shrjanagci sharavigh" << endl;
        cout << r2 << ":Mec himqin Nergcac shrjanagci sharavigh" << endl;
        cout << l << ":Kogh" << endl;
        cout << sideArea() << ":Koghmnayin makerevuyti makeres" << endl;
        cout << baseArea() << ":Himqi makeres" << endl;
        cout << volume() << ":cavaly" << endl;
        cout << basePerimeter() << ":Himqi Paragic makeres" << endl;
    }

private:
    double a2;
    double r2;
    double l;
    double h;
};


int main()
{


    cout << "hello world";


    return 0;
}
