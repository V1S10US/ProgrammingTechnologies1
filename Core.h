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
	char car_name[40];       //  ������������ ������
	char car_brand[40];      // �����
	char num_seats[40];     //  ����� ����  int?
	char mileage[40];       //  ������ ������� int?
	int pos;

};

struct  Record
{
	char car_name[40];       //  ������������ ������
	char car_brand[40];      // �����
	int num_seats;     //  ����� ����  int?
	double mileage;
};

const int MAX_RECORDS = 100;

char  FILENAME[255]; // default filename

int records_amount = 0;

RawRecord RecordsArray[MAX_RECORDS];  // global array with all current records




int AddRecord(RawRecord rec);

int CreateFile(char c_filename[150]);

int AddFile(char c_filename[150]);

int SaveFile(char c_filename[150]);

int OpenFile(char c_filename[150]);

int FindFreeSpace();

int ShowTable();
