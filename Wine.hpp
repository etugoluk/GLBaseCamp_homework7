#pragma once

#include <valarray>
#include <iostream>

using ArrayIntT = std::valarray<int>;
using PairArrayT = std::pair<ArrayIntT, ArrayIntT>;

//composition
class Wine
{
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

//private inheritance
// class Wine : private PairArrayT
// {
// 	std::string name;
// 	int age;

// public:
// 	Wine(const char* l, int y, const int yr[], const int bot[]); // l - means label, y - number of years, yr[] - years of bottling, bot[] - number of bottles
// 	Wine(const char* l, int y); // l - label, y - number of years, array is created with that size
	
// 	void			getBottles();
// 	std::string &	label();
// 	int				sum();
// 	void			show();
// };