#include "stdafx.h"
#include "StringField.h"

StringField::StringField(std::string name, long id, int type): 
	BaseField(name,id,type)
{
	mValue.clear();
	printf("StringField Custom1 constructor completed \n");
}

StringField::StringField(std::string name, long id, int type, std::string value): 
	BaseField(name,id, type)
{
	mValue = value;
	printf("StringField Custom2 constructor completed \n");
}

StringField::StringField(std::string name, long id, int type, int offset, int length, long formatID, bool isEncoded, bool isMandatory, std::string value): 
	BaseField(name,id,type,offset,length,formatID,isEncoded,isMandatory)
{
	mValue = value;
	printf("StringField Custom3 constructor completed \n");
}

StringField::~StringField(void)
{
	printf("StringField destructor completed \n");
}

std::string StringField::getValue()
{
	return mValue;
}

void StringField::setValue(std::string value)
{
	mValue = value;
}

