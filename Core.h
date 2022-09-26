//---------------------------------------------------------------------------

#ifndef CoreH
#define CoreH
//---------------------------------------------------------------------------
#endif

#include <stdio.h>
#include <stdlib.h>
#include "Unit1.h"

struct RawRecord

{
	char car_name[100];       //  ������������ ������
	char car_brand[100];      // �����
	char num_seats[100];     //  ����� ����  int?
	char mileage[100];       //  ������ ������� int?
	int pos;

};

struct  Record
{
	char car_name[100];       //  ������������ ������
	char* car_brand[100];      // �����
	int num_seats;     //  ����� ����  int?
	int mileage;
};

const int MAX_RECORDS = 100;

char  filename[100]; // default filename
FILE * f;
int records_amount = 0;



struct DeletedBlocks
{

	int count;

};

int AddRecord(RawRecord rec);

int CreateFile(char c_filename[150]);

int AddFile(char c_filename[150]);

int OpenFile(char c_filename[150]);

int FindFreeSpace();

int ShowTable();