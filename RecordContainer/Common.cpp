#include "Common.h"

std::string random_name_generator(const int length)
{
	std::string str;
	static const char chars[] =
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < length; ++i) 
	{
		if (i == 0)
		{
			str += toupper(chars[rand() % (sizeof(chars) - 1)]);
		}
		else
		{
			str += chars[rand() % (sizeof(chars) - 1)];
		}
    }

    return str;
}

uint64_t random_number_generator(const int size)
{
	if (size <= 0)
	{
		return 0;
	}
	else
	{
		return rand()%size + 1;
	}
}

std::string ZeroPadNumber(int length, int num)
{
    std::ostringstream ss;
    ss << std::setw( length ) << std::setfill( '0' ) << num;
    return ss.str();
}

uint64_t random_amount_generator(const int length)
{
	uint64_t number;

	if (length < 0)
	{
		number = 0;
	}
	else if (length > 15)
	{
		number = 999999999999999;
	}
	else
	{
		number = (rand()%9 + 1)*pow(10,length-1);
	}

	return number;
}

std::string random_date_generator(const int min_year, const int max_year)
{
	int temp_min_year = 0;
	int temp_max_year = 0;
	//int range = 0;
	int year = 0;
	int month = 0;
	int day = 0;

	std::string date;

	if (min_year < 1900)
	{
		temp_min_year = 1900;
	}
	else
	{
		temp_min_year = min_year;
	}

	if (max_year > 2025)
	{
		temp_max_year = 2025;
	}
	else
	{
		temp_max_year = max_year;
	}

	//range = temp_max_year - temp_min_year;
	year = temp_min_year + random_number_generator(temp_max_year - temp_min_year);
	date.append(std::to_string(year));

	month = random_number_generator(12);
	date.append(ZeroPadNumber(2,month));

	if (month == 2)
	{
		day = random_number_generator(28);
	}
	else
	{
		day = random_number_generator(31);
	}
	date.append(ZeroPadNumber(2,day));

	return date;
}
