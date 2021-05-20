#include "Record.h"
#include "Common.h"

//Record::Record(void)
//{
//	mRecordID = 0;
//	mRecordName.clear();
//	mInstance = 0;
//	mNumOfFields = 0;
//	printf("Record default constructor completed \n");
//}

Record::Record(long recordID, std::string recordName, int instance)
{
	mRecordID = recordID;
	mRecordName = recordName;
	mInstance = instance;
	mNumOfFields = 0;
	printf("Record Custom1 constructor completed \n");
}

Record::~Record(void)
{
	std::map<long,BaseField*>::iterator it;

	while (!mFieldList.empty())
	{
		it = mFieldList.begin();
		printf("Deleting field: %ld %s \n",it->first,it->second->getName().c_str());
		delete mFieldList[it->first];
		mFieldList.erase(it);
	}
	
	printf("Record desctructor completed \n");
}

int Record::getRecordID()
{
	return mRecordID;
}

std::string Record::getRecordName()
{
	return mRecordName;
}

int Record::getInstance()
{
	return mInstance;
}

int Record::getNumOfFields()
{
	return mNumOfFields;
}

//void Record::setRecordID(long recordID)
//{
//	mRecordID = recordID;
//}
//
//void Record::setRecordName(std::string recordName)
//{
//	mRecordName = recordName;
//}

void Record::addField(std::string fieldName, long fieldID, int fieldType)
{
	printf("Adding new field: %ld %s \n",fieldID,fieldName.c_str());
	BaseField* newfield;

	if (fieldType == NUMERIC)
	{
		newfield = new IntField(fieldName, fieldID, fieldType);
	}
	else
	{
		newfield = new StringField(fieldName, fieldID, fieldType);
	}

	newfield->setFieldID(fieldID);
	newfield->setName(fieldName);

	mFieldList.insert(std::pair<long,BaseField*>(fieldID,newfield)); 
	mNumOfFields++;

	printf("Field %ld %s added successfully \n",fieldID,fieldName.c_str());
}

void Record::deleteField(long fieldID)
{
	printf("Deleting field: %ld \n",fieldID);
	std::map<long,BaseField*>::iterator it;

	it = mFieldList.find(fieldID);
	
	if (it != mFieldList.end())
	{
		printf("...deleting field object...");
		delete mFieldList[it->first];
		printf("...deleting field map element...");
		mFieldList.erase(it);
		printf("Field %ld deleted successfully \n",it->first);
	}
	else
	{
		printf("No field was found for deletion");
	}
}

BaseField* Record::getField(int instance)
{
	return mFieldList[instance];
}
