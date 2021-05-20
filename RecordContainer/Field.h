#pragma once
#include "stdafx.h"
#include "basefield.h"

template <class cType> class Field : public BaseField
{
protected:
	//std::string mName;
	//long mFieldID;
	//int mType;
	//int mOffset;
	//int mLength;
	//long mFormatID;
	//bool mIsEncoded;
	//bool mIsMandatory;
	cType mValue;

public:
	Field<cType>(std::string name, long id, int type);
	Field<cType>(std::string name, long id, int type, cType value);
	Field<cType>(std::string name, long id, int type, int offset, int length, long formatID, bool isEncoded, bool isMandatory, cType value);
	~Field<cType>(void);

	//std::string getName();
	//long getFieldID();
	//int getOffset();
	//int getLength();
	//long getFormatID();
	//bool getIsEncoded();
	//bool getIsMandatory();
	cType getValue();
	//void setName(std::string name);
	//void setFieldID(long id);
	//void setOffset(int offset);
	//void setLength(int length);
	//void setFormatID(long formatID);
	//void setEncodedFlag(bool isEncoded);
	//void setMandatoryFlag(bool isMandatory);
	void setValue(cType value);

};

