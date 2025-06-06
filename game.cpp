#include <iostream>
#include <string>
using namespace std;


class cup {
private:
    string color = "green";
    string type = "big";
    bool handle = true;
    float height = 4.25;
    bool broken = false;
public:
    void setInfo(string c, string t, bool hand, float h, bool b) {
        color = c;
        type = t;
        handle = hand;
        height = h;
        broken = b;
    }
    void broke() { 
        broken = true; 
    }
    void fix() { 
        broken = false; 
        cout << "u fix it\n";
    }
    void Handle() {
        handle = !handle; 
    }
    void Info() {
        cout << "color: " << color << 
            ", type: " << type << 
            ", handle: " << handle << 
            ", height: " << height << 
            ", broken: " << broken<<"\n";
    }
    bool getbroken() { 
        if (broken == true) {
            cout << "it broken\n";
        }
        else {
            cout << "it not broken\n";
        }
        return broken;
    }
};
//
class lamp {
private:
    string color = "green";
    string type = "tall";
    bool on = true;
    float height = 20;
    bool broken = false;
public:
    void setInfo(string c, string t, bool on_info, float h, bool b) {
        color = c;
        type = t;
        on = on_info;
        height = h;
        broken = b;
    }
    void broke() {
        broken = true;
    }
    void fix() {
        broken = false;
        cout << "u fix it\n";
    }
    void turn() {
        on = !on;
    }
    void Info() {
        cout << "color: " << color <<
            ", type: " << type <<
            ", on: " << on <<
            ", height: " << height <<
            ", broken: " << broken << "\n";
    }
    bool getbroken() {
        if (broken == true) {
            cout << "it broken\n";
        }
        else {
            cout << "it not broken\n";
        }
        return broken;
    }
};
//
class calculator {
private:
    string color = "black";
    string type = "small";
    bool on = true;
    float power = 100;
    bool broken = false;
public:
    void setInfo(string c, string t, bool on_info, float p, bool b) {
        color = c;
        type = t;
        on = on_info;
        power = p;
        broken = b;
    }
    void broke() {
        broken = true;
    }
    void fix() {
        broken = false;
        cout << "u fix it\n";
    }
    void turn() {
        on = !on;
    }
    void Info() {
        cout << "color: " << color <<
            ", type: " << type <<
            ", on: " << on <<
            ", power: " << power <<
            ", broken: " << broken << "\n";
    }
    bool getbroken() {
        if (broken == true) {
            cout << "it broken\n";
        }
        else {
            cout << "it not broken\n";
        }
        return broken;
    }
    void work() {
        if (power == 0) {
            on = false;
        }
        power = power - 10;
       
    }
};
//
class phone {
private:
    string color = "black";
    string type = "small";
    bool on = true;
    float power = 100;
    bool broken = false;
public:
    void setInfo(string c, string t, bool on_info, float p, bool b) {
        color = c;
        type = t;
        on = on_info;
        power = p;
        broken = b;
    }
    void broke() {
        broken = true;
    }
    void fix() {
        broken = false;
        cout << "u fix it\n";
    }
    void turn() {
        on = !on;
    }
    void Info() {
        cout << "color: " << color <<
            ", type: " << type <<
            ", on: " << on <<
            ", power: " << power <<
            ", broken: " << broken << "\n";
    }
    bool getbroken() {
        if (broken == true) {
            cout << "it broken\n";
        }
        else {
            cout << "it not broken\n";
        }
        return broken;
    }
    void work() {
        if (power == 0) {
            on = false;
        }
        power = power - 10;

    }
};
//
class sandwich {
private:
    string color = "normal";
    string type = "small";
    bool bread = true;
    float weight = 100;
    bool eaten = false;
public:
    void setInfo(string c, string t, bool br, float w, bool e) {
        color = c;
        type = t;
        bread = br;
        weight = w;
        eaten = e;
    }
    void create_new() {
        eaten = false;
        cout << "u create new\n";
    }
    void Info() {
        cout << "color: " << color <<
            ", type: " << type <<
            ", bread: " << bread <<
            ", weight: " << weight <<
            ", eaten: " << eaten << "\n";
    }
    bool geteaten() {
        if (eaten == true) {
            cout << "it eaten\n";
        }
        else {
            cout << "it not eaten\n";
        }
        return eaten;
    }
    void eat() {
        if (weight == 0) {
            eaten = false;
        }
        weight = weight - 10;

    }
};
//
int main() {
    cup a;
    a.Info();
    a.setInfo("black","small",false,2321,true);
    a.Info();
    a.getbroken();
    cout<<"----------------\n";
    lamp l;
    l.Info();
    l.setInfo("black", "big", false, 23, true);
    l.Info();
    l.getbroken();
    l.fix();
    l.getbroken();
    cout << "----------------\n";
    calculator my;
    my.Info();
    my.work();
    my.Info();
    cout << "----------------\n";
    phone i;
    i.Info();
    i.work();
    i.Info();
    cout << "----------------\n";
    sandwich green;
    green.eat();
    green.Info();
}
