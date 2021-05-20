#pragma once
#include "stdafx.h"

enum FieldTypes
{
	NUMERIC = 1,	//1
	TEXT,			//2
	DATE			//3
};

std::string random_name_generator(const int length);
uint64_t random_number_generator(const int size);
std::string ZeroPadNumber(int length, int num);
uint64_t random_amount_generator(const int length);
std::string random_date_generator(const int min_year, const int max_year);
