#include <iostream>
using namespace std;

int you, computer;
int choice()
{
    int ch;
    cout << "1:choose the stone" << endl;
    cout << "2:choose the paper " << endl;
    cout << "3:choose the scissor" << endl;
    cout << "4: exit" << endl;
    cout << "enter the choice" << endl;
    cin >> ch;
    return ch;
}

void setupgame()
{
label:
    computer = rand() % 4;
    if (computer == 0)
        goto label;
    you = choice();
}

void logic()
{
    switch (you)
    {

    case 1:
        if (computer == 1)
        {
            // you==stone
            cout << "game draw" << endl;
            cout << "you choose stone and computer also choose stone" << endl;
        }
        else if (computer == 2)
        {
            // you=stone ,computer=paper
            cout << "you loose" << endl;
            cout << "you choose stone and computer choose paper" << endl;
        }
        else if (computer == 3)
        {
            // you==stone computer==scissor;
            cout << "you win in this game" << endl;
            cout << "ypu choose stone and computer choose scissor" << endl;
        }
        break;

    case 2:
        if (computer == 1)
        {
            // you==paper computer=stone
            cout << "you win in this game " << endl;
            cout << "you choose paper and computer choose stone" << endl;
        }
        else if (computer == 2)
        {
            // you==paper computer=paper
            cout << "game draw " << endl;
            cout << "you choose paper and computer  also choose paper" << endl;
        }

        else if (computer == 3)
        {
            // you==paper computer=scissor
            cout << "you loose in this game " << endl;
            cout << "you choose paper and computer choose scissor" << endl;
        }
        break;
    case 3:

        if (computer == 1)
        {
            // you==scissor computer=stone
            cout << "you loose in this game " << endl;
            cout << "you choose scissor and computer choose stone" << endl;
        }
        else if (computer == 2)
        {
            // you==scissor computer=paper
            cout << "you win in this game " << endl;
            cout << "you choose scissor and computer  also choose paper" << endl;
        }

        else if (computer == 3)
        {
            // you==scissor computer=scissor
            cout << "game draw " << endl;
            cout << "you choose scissor and computer  also choose scissor" << endl;
        }
        break;
    case 4:
        exit(0);
        break;
    default:
        cout << "invalid input :" << endl;
    }
}
int main()
{
    while (1)
    {

        setupgame();
        logic();
    }

    return 0;
}