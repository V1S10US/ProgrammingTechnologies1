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
	char car_name[40];       //  наименование машины
	char car_brand[40];      // марка
	int num_seats;     //  число мест  int?
	double mileage;       //  Расход бензина int?
	int next;              // позиция следующей свободной записи

};

struct  VirtualRecord
{
	char car_name[40];       //  наименование машины
	char car_brand[40];      // марка
	int num_seats;           //  число мест  int?
	double mileage;
	int pos;                 // позиция в массиве
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
