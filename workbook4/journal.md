problem 1:

f
c
a
e
i
h
g
j

i left out B as it woulnt account for numbers less than 0 (negative numbers)

problem 2:

i(mana = 10) should be ==

unbraced if around arrows

hasStaff = true, isnt needed. the if statement just needs if(hasStaff)

Problem 4:

switching would work, but isnt logical as the ressitance is per armour, so the damage wouldnt work
according to what you would want.

Problem 5:

move north has no break, so it will print twice it only stops at the next break, at south.

quit doesnt show anuything as there is no case for it. together with the fact that there is no default

void HandleCommand(Command command)
{
    switch (command)
    {
    case Command::MoveNorth:
        std::cout << "   You move north.\n";
        break;

    case Command::MoveSouth:
        std::cout << "   You move south.\n";
        break;

    case Command::Attack:
        std::cout << "   You attack!\n";
        break;

    case Command::Wait:
        std::cout << "   You wait.\n";
        break;

    case Command::Quit:
        std::cout << "   Goodbye.\n";
        break;
    }
}

