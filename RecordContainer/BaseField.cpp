#include "BaseField.h"

BaseField::BaseField(std::string name, long id, int type)
{
	mName = name;
	mFieldID = id;
	mType = type;
	mOffset = 0;
	mLength = 0;
	mFormatID = 0;
	mIsEncoded = false;
	mIsMandatory = false;
	printf("BaseField Custom1 Constructor completed \n");
}

BaseField::~BaseField(void)
{
	printf("BaseField Destructor completed \n");
}

//BaseField BaseField::operator=(const BaseField& f)
//{
//	//printf("Copy BaseField");
//	BaseField field;
//	field.mName = f.mName;
//	field.mFieldID = f.mFieldID;
//	field.mOffset = f.mOffset;
//	field.mLength = f.mLength;
//	field.mFormatID = f.mFormatID;
//	field.mIsEncoded = f.mIsEncoded;
//	field.mIsMandatory = f.mIsMandatory;
//
//	return field;
//}

std::string BaseField::getName()
{
	return mName;
}

long BaseField::getFieldID()
{
	return mFieldID;
}

int BaseField::getType()
{
	return mType;
}

int BaseField::getOffset()
{
	return mOffset;
}

int BaseField::getLength()
{
	return mLength;
}

long BaseField::getFormatID()
{
	return mFormatID;
}

bool BaseField::getIsEncoded()
{
	return mIsEncoded;
}

bool BaseField::getIsMandatory()
{
	return mIsMandatory;
}

void BaseField::setName( std::string name)
{
	mName = name;
}

void BaseField::setFieldID(long fieldID)
{
	mFieldID = fieldID;
}

void BaseField::setType(int type)
{
	mType = type;
}

void BaseField::setOffset(int offset)
{
	mOffset = offset;
}

void BaseField::setLength(int length)
{
	mLength = length;
}

void BaseField::setFormatID(long formatID)
{
	mFormatID = formatID;
}

void BaseField::setEncodedFlag(bool isEncoded)
{
	mIsEncoded = isEncoded;
}

void BaseField::setMandatoryFlag(bool isMandatory)
{
	mIsMandatory = isMandatory;
}
