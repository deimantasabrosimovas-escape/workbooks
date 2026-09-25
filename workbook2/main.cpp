#include <iostream>
#include <format>
#include <limits>
#include <cstdint>

// ... constant declarations go here, above the function ...


constexpr int MaximumShields{ 120 };
constexpr int MaximumHull{ 200 };





void Problem01()

	{
		
		int currentHull{ 150 };
		int currentShields{ 73 };

		// ... body lines go here ...

		float hullPercent = static_cast<float>(currentHull) / MaximumHull * 100.0f;
		float shieldPercent = (float)currentShields / MaximumShields * 100.0f;
		std::cout << std::format("Shields {:.1f}% Hull {:.1f}%\n", shieldPercent,hullPercent);

	}
