#include "stdafx.h"
#include "Field.h"

template <class cType> 
Field<cType>::Field(std::string name, long id, int type): BaseField(name,id,type)
{
	printf("Field Custom1 constructor completed \n");
}

template <class cType> 
Field<cType>::Field(std::string name, long id, int type, cType value): BaseField(name,id,type)
{
	mValue = value;
	printf("Field Custom2 constructor completed \n");
}

template <class cType> 
Field<cType>::Field(std::string name, long id, int type, int offset, int length, long formatID, bool isEncoded, bool isMandatory, cType value)
	:BaseField(name,id,type,offset,length,formatID,isEncoded,isMandatory)
{
	mValue = value;
	printf("Field Custom3 constructor completed \n");
}

template <class cType> 
Field<cType>::~Field(void)
{
	printf("Field Destructor completed \n");
}

//template <class cType> 
//std::string Field<cType>::getName()
//{
//	return mName;
//}
//
//template <class cType>
//long Field<cType>::getFieldID()
//{
//	return mFieldID;
//}
//
//template <class cType>
//int Field<cType>::getOffset()
//{
//	return mOffset;
//}
//
//template <class cType>
//int Field<cType>::getLength()
//{
//	return mLength;
//}
//
//template <class cType>
//long Field<cType>::getFormatID()
//{
//	return mFormatID;
//}
//
//template <class cType>
//bool Field<cType>::getIsEncoded()
//{
//	return mIsEncoded;
//}
//
//template <class cType>
//bool Field<cType>::getIsMandatory()
//{
//	return mIsMandatory;
//}

template <class cType>
cType Field<cType>::getValue()
{
	return mValue;
}

//template <class cType>
//void Field<cType>::setName( std::string name)
//{
//	mName = name;
//}
//
//template <class cType>
//void Field<cType>::setFieldID(long fieldID)
//{
//	mFieldID = fieldID;
//}
//
//template <class cType>
//void Field<cType>::setOffset(int offset)
//{
//	mOffset = offset;
//}
//
//template <class cType>
//void Field<cType>::setLength(int length)
//{
//	mLength = length;
//}
//
//template <class cType>
//void Field<cType>::setFormatID(long formatID)
//{
//	mFormatID = formatID;
//}
//
//template <class cType>
//void Field<cType>::setEncodedFlag(bool isEncoded)
//{
//	mIsEncoded = isEncoded;
//}
//
//template <class cType>
//void Field<cType>::setMandatoryFlag(bool isMandatory)
//{
//	mIsMandatory = isMandatory;
//}

template <class cType>
void Field<cType>::setValue(cType value)
{
	mValue = value;
}
