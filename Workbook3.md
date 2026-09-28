problem 1:

K

problem 1.2

B E D F I C

Problem 1.3:

Lines not used is A, G, H, and J.

Problem 1.4:

A

Problem 2:

4 int
1 int
4.5 double4.5 double
-4 int
-1 int
8 int
9 int
11 int
1 Boolean
0 Boolean
0 Boolean

Problem 3:

Problem 3.1:

4294967294

Problem 3.2:

the undsigned 32 bit int can hold 0 - 4294967295. as unsigned int cannot do negative values, subtracting 5 from 3 wraps around modulo 2³² and produces 4294967294.

Problem 3.3

void Problem03()
{
    int stock{ 3 };
    int purchased{ 5 };

    int remaining = stock - purchased;

    std::cout << std::format("Stock: {}\n", stock);
    std::cout << std::format("Purchased: {}\n", purchased);
    std::cout << std::format("Remaining: {}\n", remaining);
}

Problem 3.4:

The comparison works because both unsigned operands are valid positive values which is diffrernt to using subtraction, the operation never needs to represent a negative result.

Problem 4:

constexpr int WeaponCount{ 4 };

void Problem04()
{
    int currentWeapon{ 3 };

    int nextWeapon =
        (currentWeapon + 1) % WeaponCount;

    int previousWeapon =
        (currentWeapon - 1 + WeaponCount) % WeaponCount;

    std::cout << std::format(
        "from {}: next is {}, previous is {}\n",
        currentWeapon,
        nextWeapon,
        previousWeapon
    );

    currentWeapon = 0;

    nextWeapon =
        (currentWeapon + 1) % WeaponCount;

    previousWeapon =
        (currentWeapon - 1 + WeaponCount) % WeaponCount;

    std::cout << std::format(
        "from {}: next is {}, previous is {}\n",
        currentWeapon,
        nextWeapon,
        previousWeapon
    );
}

The formula (currentWeapon-1) % WeaponCount fails when currentWeapon is 0, because it makes -1 and not the expected 3. having added WeaponCount before taking the remainder keeps the value positive.