//---------------------------------------------------------------------------

#pragma hdrstop

#include "Core.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)


/* String, File manipulation functions, Search/filter */

FILE * f = nullptr;



int AddFile(char c_filename[150]) {

	if(f != nullptr){
		fclose(f);
	}
	f = fopen(c_filename, "wb+");
	fclose(f);
	f = fopen(c_filename, "rb+");
	int tmp = -1;
	int code = fwrite(&tmp, sizeof(int), 1, f);

    return code;
}

int SaveFile(char c_filename[150]) {

    if(f != nullptr){
		fclose(f);
	}

	int code = 0;
	f = fopen(c_filename, "wb+");
	fseek(f, sizeof(int),SEEK_SET);

	for (auto rec : RecordsArray) {
	   code	= fwrite(&rec,sizeof(Record),1, f);
	}


	return code;
}

int AddRecord(RawRecord new_rec)
{
	//RawRecord  r = new_rec;

	int pos = FindFreeSpace(); // FindFreeSpace();

	//fseek(f, 0, SEEK_SET);

	fseek(f,sizeof(int) + pos * sizeof(RawRecord), SEEK_SET);
	fwrite(&new_rec, sizeof(RawRecord), 1, f);
	//fclose(f);
    //OpenFile(FILENAME);

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
	int first_del_element;

	//f = fopen(c_filename, "rb+");

	fseek(f, 0, SEEK_SET);
	fread(&first_del_element, sizeof(first_del_element), 1, f);

	if (first_del_element == -1)    // write to end of file
	{
		index = records_amount;
	}
	else
	{
		RawRecord temp_record;
		index = first_del_element;
		fseek(f, sizeof(int) + sizeof(RawRecord)*index, SEEK_SET);
		fread(&temp_record,sizeof(RawRecord), 1, f);
		first_del_element = temp_record.pos;
	}

	return index;
} ;

int ShowTable(){

	int records_remain = records_amount;    // count remained records to show

	 fseek(f, 0, SEEK_SET);
	 int is_empty;
	 fread(&is_empty, sizeof(int), 1, f);

		RawRecord temp_rec;
		for (int i=1; i <= records_remain; ++i) {
			fread(&temp_rec, sizeof(RawRecord), 1, f);
			Form1->StringGrid1->Cells[0][i] = AnsiString(temp_rec.car_name);
			Form1->StringGrid1->Cells[1][i] = AnsiString(temp_rec.car_brand);
			Form1->StringGrid1->Cells[2][i] = AnsiString(temp_rec.num_seats);
			Form1->StringGrid1->Cells[3][i] = AnsiString(temp_rec.mileage);
		}

	 return 1;


};
 /*
int ReadRecords() {


	return recrods_array;

	}    */
