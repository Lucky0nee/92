#include <iostream>
#include <map>

int main() {
    system("chcp 1251>nul");
    std::map<std::string, double> mp;

    mp["Вінниця"] = 303.8;
    mp["Дніпро"] = 831.9;
    mp["Ужгород"] = 406.7;
    mp["Запоріжжя"] = 895.1;
    mp["Львів"] = 275.4;
    mp["Суми"] = 865.1;
    mp["Харків"] = 1020.9;

    std::cout << "/*\n";
    for (std::pair<std::string, double> str : mp) {
        std::cout << str.first << " - " << str.second << " km \n";
    }
    std::cout << "*/\n";

    std::string str;
    std::cout << "\n" << "Enter the city to find out the distance from Chernivtsi to it: ";
    std::cin >> str;

    if (mp.count(str) > 0) {
        std::cout << "Distance to point: ";
        std::cout << mp[str];
        std::cout << "\n";
    }
    else
    {
        std::cout << "There is no such city";
    }

    return 0;
}

/*
Створити карту, в якій задати відстані від Чернівців до усіх населених пунктів України.
Розробити програму, яка за введеним містом виводить відстань до нього.
*/
