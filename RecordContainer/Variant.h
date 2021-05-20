#pragma once
using namespace std;
struct Variant
{
public:
	enum variant_type {t_int64, t_string};
	variant_type type_;
	union 
	{
		uint64_t as_int64;
		struct
		{
		string as_string;
		};
	};

public:
   Variant(variant_type type) : type_(type) 
   {
       if (type == t_string)
           new (&as_string) string();
       else
           new (&as_int64) uint64_t();
   }

   ~Variant() 
   {
       if (type_ == t_string)
           as_string.~string();
       else
           as_int64.~uint64_t();
   }
};

