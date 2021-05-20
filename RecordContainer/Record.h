#pragma once
#include "stdafx.h"
#include "IntField.h"
#include "StringField.h"

class Record
{
private:
	long mRecordID;
	std::string mRecordName;
	int mInstance;
	int mNumOfFields;
	std::map<long,BaseField*> mFieldList;

public:
	//Record(void);
	Record(long recordID, std::string recordName, int instance);
	~Record(void);

	int getRecordID();
	std::string getRecordName();
	int getInstance();
	int getNumOfFields();
	
	//void setRecordID(long recordID);
	//void setRecordName(std::string recordName);

	void addField(std::string fieldName, long fieldID, int fieldType);
	void deleteField(long fieldID);
	BaseField* getField(int instance);
};

