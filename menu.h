#include "menuA.h"
#include "menuM.h"

class menu
{
private:
    char choise;
    menuA menuAA;
    menuB menuBB;
    void choiseMenu(char choiseOfMneu);
public:

    void setChoiseMenu();

};

void setChoiseMenu()
{
    std::cout << "Do you want to enter the numbers manually (m) or automatically (a)?" << std::endl;
    std::cin >> choise;
    choiseMenu(choise);
}

void choiseMenu(char choiseOfMneu)
{
    if (choiseOfMneu=='A' || choiseOfMneu=='a')
    {

    }
    else if (choiseOfMneu=='M' || choiseOfMneu=='m')
    {

    }
    else
    {
        cout << "Incorrectly entered character" << endl;
    }
}
