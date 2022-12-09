#include <iostream>
#include <unistd.h>
#include <windows.h>

int main()
{
    short int i = 1, min, hr;
    std::cout << "SET TIME\n";
    std::cout << "Enter Hour: ";
    std::cin >> hr;
    std::cout << "Enter Minute: ";
    std::cin >> min;
    // std::cout << "Press enter to start stop watch : ";
    std::cout << "Press Enter to Continue";
    std::cin.ignore();
    while (true)
    {
        

        if (hr < 10)
        {
            std::cout << "0" << hr << ":";
        }
        else
        {
            std::cout << hr << ":";
        }
        if (min < 10)
        {
            std::cout << "0" << min << ":";
        }
        else
        {
            std::cout << min << ":";
        }
        if (i < 10)
        {
            std::cout << "0" << i << "\n";
        }
        else
        {
            std::cout << i << "\n";
        }
        sleep(1);

        i++;
        if (i == 60)
        {
            i = 0;
            min++;
        }
        if (min == 60)
        {
            min = 0;
            hr++;
        }
        if (hr == 24)
        {
            hr == 0;
        }
        system("cls");
    }
}