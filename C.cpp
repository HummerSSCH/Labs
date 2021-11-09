#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

class Goods {
    string name;
    string date;
    int price;
    int kolvo;
    int id;
public:
    Goods(string _name, string _date, int _price, int _kolvo, int _id) {
        name = _name;
        date = _date;
        price = _price;
        kolvo = _kolvo;
        id = _id;
        cout << "Counstructor" << endl;
    }
    Goods() {
        name = "Name?";
        date = "0000-00-00";
        price = 0;
        kolvo = 0;
        id = 0;
        cout << "Def construct" << endl;
    }
    Goods(Goods& _ob) {
        name = _ob.name;
        date = _ob.date;
        price = _ob.price;
        kolvo = _ob.kolvo;
        id = _ob.id;
        cout << "CopyCounstruct" << endl;
    }
    ~Goods() {
        cout << "Destruct" << endl;
    };

public:
    void Show() {
        cout << endl << "Наименование товара: " << name << endl;
        cout << "Дата оформления товара: " << date << endl;
        cout << "Цена товара: " << price << endl;
        cout << "Количество единиц товара: " << kolvo << endl;
        cout << "Номер накладной: " << id << endl << endl;
    }

    Goods operator=(Goods& _ob);

};

Goods tovar(Goods& _s) {
    return _s;
}

Goods Goods::operator=(Goods& _ob) {
    name = _ob.name;
    date = _ob.date;
    price = _ob.price;
    kolvo = _ob.kolvo;
    id = _ob.id;
    cout << "Operator" << endl;
    return *this;
}


int main() {
    setlocale(LC_ALL, "Russian");
    Goods korp1("TUF GAMING", "27.04.2018", 777, 11, 777);
    Goods korp2(korp1);
    Goods korp3;
    tovar(korp2);
    korp1 = korp3;
    korp1.Show();
    korp2.Show();
    return 0;
}