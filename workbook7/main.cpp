//#include <iostream>
//#include <format>
//
//int LapsRemaining(float fuel, float burnRate)
//{
//	return static_cast<int>(fuel / burnRate);
//}
//
//void BurnOneLap(float& fuel, float burnRate)
//{
//	fuel -= burnRate;
//	
//}
//
//
//void Problem01()
//{
//    float fuel{ 60.0f };
//    float burnRate{ 2.4f };
//    std::cout << std::format("laps: {}\n", LapsRemaining(fuel, burnRate));
//    BurnOneLap(fuel, burnRate);
//    std::cout << std::format("fuel now: {:.1f}\n", fuel);
//}
//
//
//int main()
//{
//    Problem01();
//    return 0;
//}

void Swap(int& first, int& second)
{
    int temporary{ first };
    first = second;
    second = temporary;
}

int Fastest(int lapA, int lapB)
{
    if (lapA < lapB)
    {
        return lapA;
    }

    return lapB;
}

int& FastestRef(int& lapA, int& lapB)
{
    if (lapA < lapB)
    {
        return lapA;
    }

    return lapB;
}