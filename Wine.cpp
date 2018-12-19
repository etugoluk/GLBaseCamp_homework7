#include "Wine.hpp"

//composition

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : name(l), age(y)
{
	pair.first = ArrayIntT(yr, y);
	pair.second = ArrayIntT(bot, y);
}

Wine::Wine(const char* l, int y) : name(l), age(y)
{
	pair.first = ArrayIntT(y);
	pair.second = ArrayIntT(y);
}

void	Wine::getBottles()
{
	for (int i = 0; i < age; ++i)
	{
		std::cout << "Enter years of bottling: ";
		std::cin >> pair.first[i];
		std::cout << "Enter number of bottles: ";
		std::cin >> pair.second[i];
	}
}

std::string & Wine::label()
{
	return name;
}

int Wine::sum()
{
	int sum = 0;

	for (int i = 0; i < pair.second.size(); ++i)
	{
		sum += pair.second[i];
	}
	return sum;
}

void	Wine::show()
{
	std::cout << "Label: " << name << std::endl;
	for (int i = 0; i < pair.first.size(); ++i)
	{
		std::cout << "Year of bottling: " << pair.first[i] << "; Number of bottles: " << pair.second[i] << std::endl;
	}
}

//private inheritance

// Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : name(l), age(y)
// {
// 	PairArrayT::first = ArrayIntT(yr, y);
// 	PairArrayT::second = ArrayIntT(bot, y);
// }

// Wine::Wine(const char* l, int y) : name(l), age(y)
// {
// 	PairArrayT::first = ArrayIntT(y);
// 	PairArrayT::second = ArrayIntT(y);
// }

// void	Wine::getBottles()
// {
// 	for (int i = 0; i < age; ++i)
// 	{
// 		std::cout << "Enter years of bottling: ";
// 		std::cin >> PairArrayT::first[i];
// 		std::cout << "Enter number of bottles: ";
// 		std::cin >> PairArrayT::second[i];
// 	}
// }

// std::string & Wine::label()
// {
// 	return name;
// }

// int Wine::sum()
// {
// 	int sum = 0;

// 	for (int i = 0; i < PairArrayT::second.size(); ++i)
// 	{
// 		sum += PairArrayT::second[i];
// 	}
// 	return sum;
// }

// void	Wine::show()
// {
// 	std::cout << "Label: " << name << std::endl;
// 	for (int i = 0; i < PairArrayT::first.size(); ++i)
// 	{
// 		std::cout << "Year of bottling: " << PairArrayT::first[i] << "; Number of bottles: " << PairArrayT::second[i] << std::endl;
// 	}
// }
