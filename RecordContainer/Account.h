#pragma once
using namespace std;

class Account
{
private:
	int recordType;
	int versionNumber;
	int subCode;
	int finType;
	string accNum;
	int specialInstrIndicator;
	string newAccNum;

	

public:
	Account(void);
	~Account(void);
};

