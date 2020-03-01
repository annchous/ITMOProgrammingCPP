//
// Created by Анна on 26.02.2020.
//

#pragma once

class Menu {
private:
    int number;
public:
    Menu();

    static void ShowMenu(Menu&);
    static void MenuCase(Menu&, int);
};
