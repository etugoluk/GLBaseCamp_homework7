#pragma once

#include <valarray>
#include <iostream>

class Wine
{
	using ArrayIntT = std::valarray<int>;
	using PairArrayT = std::pair<ArrayIntT, ArrayIntT>;

	std::string name;
	PairArrayT pair;
	int age;

public:
	Wine(const char* l, int y, const int yr[], const int bot[]); // l - means label, y - number of years, yr[] - years of bottling, bot[] - number of bottles
	Wine(const char* l, int y); // l - label, y - number of years, array is created with that size
	
	void			getBottles();
	std::string &	label();
	int				sum();
	void			show();
};