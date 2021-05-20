#include "IntField.h"

IntField::IntField(std::string name, long id, int type): BaseField(name,id,type)
{
	mValue = 0;
	printf("IntField Custom1 constructor completed \n");
}

IntField::IntField(std::string name, long id, int type, uint64_t value): BaseField(name,id,type)
{
	mValue = value;
	printf("IntField Custom2 constructor completed \n");
}

IntField::IntField(std::string name, long id, int type, int offset, int length, long formatID, bool isEncoded, bool isMandatory, uint64_t value): BaseField(name,id,type,offset,length,formatID,isEncoded,isMandatory)
{
	mValue = value;
	printf("IntField Custom3 constructor completed \n");
}

IntField::~IntField(void)
{
	printf("IntField destructor completed \n");
}

//IntField IntField::operator=(const IntField& f)
//{
//	IntField field;
//	field.mValue = f.mValue;
//
//	return field;
//}

std::string IntField::getValue()
{
	return std::to_string(mValue);
}

void IntField::setValue(std::string value)
{
	try 
	{
		std::string tmpStr = std::to_string(mValue);
		std::cout << "mValue (not initialized): " << (tmpStr.c_str()) << std::endl;
		mValue = std::stoull(value);
	}
	catch (std::exception e)
	{
		printf("Invalid value provided for Numeric Field\n");
	}
}


