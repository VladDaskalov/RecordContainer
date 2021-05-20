#pragma once
#include "stdafx.h"

class BaseField
{
protected:
	std::string mName;
	long mFieldID;
	int mType;
	int mOffset;
	int mLength;
	long mFormatID;
	bool mIsEncoded;
	bool mIsMandatory;

public:
	BaseField(std::string name, long id, int type);
	BaseField(std::string name, long id, int type, int offset, int length, long formatID, bool isEncoded, bool isMandatory)
		: mName(name), mFieldID(id), mType(type), mOffset(offset), mLength(length), mFormatID(formatID), mIsEncoded(isEncoded), mIsMandatory(isMandatory) { 	printf("BaseField Custom2 Constructor completed \n"); };
	virtual ~BaseField(void);
	//virtual BaseField operator=(const BaseField& f);

	std::string getName();
	long getFieldID();
	int getType();
	int getOffset();
	int getLength();
	long getFormatID();
	bool getIsEncoded();
	bool getIsMandatory();
	virtual std::string getValue() = 0;
	void setName(std::string name);
	void setFieldID(long id);
	void setType(int type);
	void setOffset(int offset);
	void setLength(int length);
	void setFormatID(long formatID);
	void setEncodedFlag(bool isEncoded);
	void setMandatoryFlag(bool isMandatory);
	virtual void setValue(std::string value) = 0;
	
};