//---------------------------------------------------------------------------

#ifndef CoreH
#define CoreH
//---------------------------------------------------------------------------
#endif

#include <stdio.h>
#include <stdlib.h>
#include "Unit1.h"

struct FileRecord

{
	char car_name[40];       //  ������������ ������
	char car_brand[40];      // �����
	int num_seats;     //  ����� ����  int?
	double mileage;       //  ������ ������� int?
	int next;              // ������� ��������� ��������� ������

};

struct  VirtualRecord
{
	char car_name[40];       //  ������������ ������
	char car_brand[40];      // �����
	int num_seats;           //  ����� ����  int?
	double mileage;
	int pos;                 // ������� � �������
};

const int MAX_RECORDS = 100;

char  FILENAME[255]; // default filename

int records_amount = 0;

VirtualRecord RecordsArray[MAX_RECORDS];  // global array with all current records


int AddRecord(FileRecord rec);

int CreateFile(char c_filename[150]);

int AddFile(char c_filename[150]);

int SaveFile(char c_filename[150]);

int OpenFile(char c_filename[150]);

int FindFreeSpace();

VirtualRecord to_virtual(FileRecord rec);

int ShowTable();
