#pragma once
#include "basefield.h"
class IntField : public BaseField
{
protected:
	uint64_t mValue;

public:
	IntField(std::string name, long id, int type);
	IntField(std::string name, long id, int type, uint64_t value);
	IntField(std::string name, long id, int type, int offset, int length, long formatID, bool isEncoded, bool isMandatory, uint64_t value);
	~IntField(void);

	//IntField operator=(const IntField& f);
	
	std::string getValue();
	void setValue(std::string value);
};

