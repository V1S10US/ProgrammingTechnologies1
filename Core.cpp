//---------------------------------------------------------------------------

#pragma hdrstop

#include "Core.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)


/* String, File manipulation functions, Search/filter */




class String {
	int len;
	char str[100];

};



int AddFile(char c_filename[150]) {

	f = fopen(c_filename, "wb+");

	int x = -1;  // first deleted element number
	fseek(f,0, SEEK_SET);
	int code = fwrite(&x, sizeof(x), 1, f);
	// record[i] + number

	fclose(f);
	return  code;
}

int AddRecord(RawRecord new_rec)
{
	RawRecord  r;

	int pos = FindFreeSpace(); // FindFreeSpace();

	fseek(f,sizeof(int) + pos * sizeof(RawRecord), SEEK_SET);
	fwrite(&new_rec, sizeof(RawRecord), 0, f);

	records_amount += 1;


	return 1;

};


int OpenFile(char c_filename[150]) {

	 f = fopen(c_filename, "wb+");
	 int code = fseek(f, 0, SEEK_SET);
	 records_amount = 0;

	 return code;
};

int FindFreeSpace() {

	int index = -1;
	int del_element;

	//f = fopen(c_filename, "rb+");

	fseek(f, 0, SEEK_SET);
	fread(&del_element, sizeof(del_element), 1, f);

	if (del_element == -1)    // write to end of file
	{
		index = records_amount;

	}
	else
	{
		RawRecord temp_record;
		int temp_pos;
		index = del_element;
		while (index != -1)   // find last record of deleted records list
			{
				fseek(f, sizeof(temp_record)*(index + 1) - sizeof(int), SEEK_SET);
				fread(&index, sizeof(del_element), 1, f);

				/*if (temp_pos != -1) {
					 del_element = temp_pos;
				}
				else {

				} */
			}
        fseek(f, -sizeof(temp_record),SEEK_CUR);
	}

	return index;
} ;

int ShowTable(){

	int records_remain = records_amount;    // count remained records to show

	 fseek(f, 0, SEEK_SET);
	 int is_empty;
	 fread(&is_empty, sizeof(int), 1, f);

	 if (is_empty == -1)
		return 0 ;
	 else
	 {
		RawRecord temp_rec;
		for (int i=0; i <= records_remain; ++i) {
			fread(&temp_rec, sizeof(RawRecord), 1, f);
			Form1->StringGrid1->Cells[0][i] = AnsiString(temp_rec.car_name);
			Form1->StringGrid1->Cells[1][i] = AnsiString(temp_rec.car_brand);
			Form1->StringGrid1->Cells[2][i] = AnsiString(temp_rec.num_seats);
			Form1->StringGrid1->Cells[3][i] = AnsiString(temp_rec.mileage);

		}
	 }

	 return 1;


};