#include "Wine.hpp"

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