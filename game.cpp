#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;


class cup {
private:
    string* id_type;

    int* data;
    unsigned int length = 0;

    string color = "green";
    
    string type = "big";
    bool handle = true;
    float height = 4.25;
    bool broken = false;

public:
    void AddToFront(int value) {
        int* temp = new int[length + 1];
        for (int i = 0; i < length; i++)
        {
            temp[i + 1] = data[i];
        }
        temp[0] = value;
        delete[] data;
        data = temp;
        length++;
    }

    cup(string t) {
        id_type = new string(t);
    }
    cup() {
        string id_type = "big";
    }
    void print() {
        cout << "id_type: " << *id_type << ", data: " << data << "\n";
    }
    void SetId_type(const string& id) {
        *id_type = id;
    }
    string GetId_type() const {
        return *id_type;
    }

    /////////////////////
    void printInfo() {
        cout << "color: " << color <<
            ", type: " << type <<
            ", handle: " << handle <<
            ", height: " << height <<
            ", broken: " << broken << "\n";
    }
    void SetInfo(string c, string t, bool hand, float h, bool b) {
        color = c;
        type = t;
        handle = hand;
        height = h;
        broken = b;
    }
    string SetColor(string c) {
        color = c;
        return color;

    }
    string GetColor() const {
        return color;
    }
    string SetType(string t) {
        type = t;
        return type;
    }
    string GetType() const {
        return type;
    }
    bool SetHandle(bool hand) {
        handle = hand;
        return handle;
    }
    bool GetHandle() const {
        return handle;
    }
    float SetHeight(float h) {
        height = h;
    }
    float GetHeight() const {
        return height;
    }
    bool SetBroken(bool b) {
        broken = b;
        return broken;
    }
    bool GetBroken() const {
        return broken;
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
    string* id_type;

    int* data;
    unsigned int length = 0;

    string color = "green";
    string type = "tall";
    bool on = true;
    float height = 20;
    bool broken = false;
public:
    void AddToFront(int value) {
        int* temp = new int[length + 1];
        for (int i = 0; i < length; i++)
        {
            temp[i + 1] = data[i];
        }
        temp[0] = value;
        delete[] data;
        data = temp;
        length++;
    }

    lamp(string t) {
        id_type = new string(t);
    }
    lamp() {
        string id_type = "big";
    }
    void print() {
        cout << "id_type: " << *id_type << ", data: " << data << "\n";
    }
    void SetId_type(const string& id) {
        *id_type = id;
    }
    string GetId_type() const {
        return *id_type;
    }

    /////////////////////
    string SetColor(string c) {
        color = c;
        return color;
    }
    string GetColor() const {
        return color;
    }
    string SetType(string t) {
        type = t;
        return type;
    }
    string GetType() const {
        return type;
    }
    bool SetOn(bool on_info) {
        on = on_info;
        return on;
    }
    bool GetOn() const {
        return on;
    }
    float SetHeight(float h) {
        height = h;
        return height;
    }
    float GetHeight() const {
        return height;
    }
    bool SetBroken(bool b) {
        broken = b;
        return broken;
    }
    bool GetBroken() const {
        return broken;
    }


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
    bool Makebroke() {
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
    string SetColor(string c) {
        color = c;
        return color;
    }
    string GetColor() const {
        return color;
    }
    string SetType(string t) {
        type = t;
        return type;
    }
    string GetType() const {
        return type;
    }
    bool SetOn(bool on_info) {
        on = on_info;
        return on;
    }
    bool GetOn() const {
        return on;
    }
    float SetPower(float h) {
        power = h;
        return power;
    }
    float GetPower() const {
        return power;
    }
    bool SetBroken(bool b) {
        broken = b;
        return broken;
    }
    bool GetBroken() const {
        return broken;
    }


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
    string SetColor(string c) {
        color = c;
        return color;
    }
    string GetColor() const {
        return color;
    }
    string SetType(string t) {
        type = t;
        return type;
    }
    string GetType() const {
        return type;
    }
    bool SetOn(bool on_info) {
        on = on_info;
        return on;
    }
    bool GetOn() const {
        return on;
    }
    float SetPower(float h) {
        power = h;
        return power;
    }
    float GetPower() const {
        return power;
    }
    bool SetBroken(bool b) {
        broken = b;
        return broken;
    }
    bool GetBroken() const {
        return broken;
    }


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
    string SetColor(string c) {
        color = c;
        return color;
    }
    string GetColor() const {
        return color;
    }
    string SetType(string t) {
        type = t;
        return type;
    }
    string GetType() const {
        return type;
    }
    bool SetBread(bool br) {
        bread = br;
        return bread;
    }
    bool GetBread() const {
        return bread;
    }
    float SetWeight(float w) {
        weight = w;
        return weight;
    }
    float GetWeight() const {
        return weight;
    }
    bool SetEaten(bool e) {
        eaten = e;
        return eaten;
    }
    bool GetEaten() const {
        return eaten;
    }


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
    cup a("name");
    a.printInfo();
    a.GetBroken();
    a.SetBroken(true);
    a.printInfo();
    a.print();
    a.AddToFront(12);
    a.print();
    cout << "----------------\n";
    lamp l;
    l.GetBroken();
    l.Info();
    cout << "----------------\n";
    calculator my;
    my.Info();
    cout << "----------------\n";
    phone i;
    i.Info();
    cout << "----------------\n";
    sandwich green;
    green.Info();
}