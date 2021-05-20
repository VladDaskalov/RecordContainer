#pragma once
#include "stdafx.h"
#include "basefield.h"

class StringField : public BaseField
{
protected:
	std::string mValue;

public:
	StringField(std::string name, long id, int type);
	StringField(std::string name, long id, int type, std::string value);
	StringField(std::string name, long id, int type, int offset, int length, long formatID, bool isEncoded, bool isMandatory, std::string value);
	~StringField(void);
	
	std::string getValue();
	void setValue(std::string value);
};

