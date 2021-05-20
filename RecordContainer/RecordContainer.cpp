#include "stdafx.h"
#include "Record.h"
#include "Common.h"

using namespace std;

int main(int argc, char* argv[])
{
	
	printf("Creating Record \n");
	Record testRecord(300100,"Record1",0);
	
	BaseField* currentField;

	testRecord.addField("IntField1",0,NUMERIC);
	
	currentField = testRecord.getField(0);
	currentField->setOffset(1);
	currentField->setLength(6);
	currentField->setFormatID(1);
	currentField->setEncodedFlag(true);
	currentField->setMandatoryFlag(true);
	currentField->setValue("567");


	testRecord.addField("StringField2",1,TEXT);
	
	currentField = testRecord.getField(1);
	currentField->setOffset(7);
	currentField->setLength(2);
	currentField->setFormatID(2);
	currentField->setEncodedFlag(false);
	currentField->setMandatoryFlag(false);
	currentField->setValue("TestValue");

	for (int i=0; i<2; i++)
	{
		currentField = testRecord.getField(i);

		cout << "\nPrinting record details:" << endl;
		cout << "RecordID: " << testRecord.getRecordID() << endl;
		cout << "RecordName: " << testRecord.getRecordName() << endl;
		cout << "Field Name: " << currentField->getName() << endl;
		cout << "Field ID: " << currentField->getFieldID() << endl;
		cout << "Field Offset: " << currentField->getOffset() << endl;
		cout << "Field Length: " << currentField->getLength() << endl;
		cout << "Field Format ID: " << currentField->getFormatID() << endl;
		cout << "Encoded Flag: " << currentField->getIsEncoded() << endl;
		cout << "Mandatory Flag: " << currentField->getIsMandatory() << endl;
		cout << "Value: " << currentField->getValue() << endl;
	}

	//testRecord.~Record();
	//getchar();
 	return 0;
 }

