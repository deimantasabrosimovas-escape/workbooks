#include <iostream>
#include <format>
#include <string>

//void Problem01()
//{
//    int health{ 30 };
//    int enemyCount{ 3 };
//
//    if (health <= 0)
//    {
//        { std::cout << "Status: dead\n"; }
//    }
//
//    else if (health < 25)
//    {
//        { std::cout << "Status: critical\n"; }
//    }
//
//    else if (enemyCount > 2)
//    {
//        { std::cout << "Status: outnumbered\n"; }
//    }
//
//    else
//    {
//        { std::cout << "Status: ready\n"; }
//    }
//
//}

//void Problem02()
//{
//    int mana{ 0 };
//    int arrows{ 5 };
//    bool hasStaff{ true };
//
//    if (mana)
//    {
//        std::cout << "A: mana\n";
//    }
//
//    if (arrows)
//    {
//        std::cout << "B: arrows\n";
//    }
//
//    if (hasStaff)
//    {
//        std::cout << "C: staff\n";
//    }
//
//    if (mana = 10)
//    {
//        std::cout << "D: mana again\n";
//    }
//
//    std::cout << std::format("E: mana is {}\n", mana);
//
//    if (arrows > 3)
//    {
//        std::cout << "F: plenty of arrows\n";
//        std::cout << "G: ready\n";
//    }
//
//    if (mana > 5 && arrows > 10)
//    {
//        std::cout << "H: fully equipped\n";
//    }
//    else if (mana > 5 || arrows > 10)
//    {
//        std::cout << "I: partly equipped\n";
//    }
//}

enum class Command { MoveNorth, MoveSouth, Attack, Wait, Quit };

void HandleCommand(Command command)
{
    switch (command)
    {
    case Command::MoveNorth:
        std::cout << "   You move north.\n";

    case Command::MoveSouth:
        std::cout << "   You move south.\n";
        break;

    case Command::Attack:
        std::cout << "   You attack!\n";
        break;

    case Command::Wait:
        std::cout << "   You wait.\n";
        break;
    }
}

void Problem05()
{
    HandleCommand(Command::MoveNorth);
    HandleCommand(Command::Attack);
    HandleCommand(Command::Quit);
}