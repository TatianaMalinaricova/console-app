#include "stdafx.h"

#define CATCH_CONFIG_MAIN 
#include "include/catch.hpp"
#include "C:/Users/Tatia/Desktop/MPM/4.roèník/ZS/Tvorba softvérových systémov/zadanie1/counter.h"

TEST_CASE("Test na znaky", "Znaky")
{
	std::string test1="Pocet znakov?";
	REQUIRE(counter_c(test1)==13);

	std::string test2 = "";
	REQUIRE(counter_c(test2) == 0);
}

TEST_CASE("Test na slova", "Slova")
{
	std::string test = "kolko je tu slov";
	REQUIRE(counter_w(test) == 4);
}

TEST_CASE("Test na riadky", "Riadky")
{
	std::string test = "Kolko '\n' je tu '\n' riadkov?";
	REQUIRE(counter_l(test) == 3);
}