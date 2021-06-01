//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int c=0;
int level = 0;
int massTrue1[10][10]={{0,1,1,0,0,0,0,1,1,1},
						{1,1,1,0,0,0,0,1,0,1},
						{1,1,1,0,0,0,0,0,0,1},
						{0,0,1,1,1,1,1,1,1,1},
						{0,0,1,1,1,1,1,1,0,0},
						{0,1,1,1,0,0,1,1,0,0},
						{0,1,0,1,0,0,1,1,1,0},
						{0,0,0,1,0,0,0,0,1,0},
						{1,1,1,1,1,1,1,1,1,1},
						{1,1,1,1,1,1,1,1,1,1}};

int mass1G[3][10]={{2,3,6,7,2,2,4,2,1,4},
				  {2,2,2,0,2,2,2,4,1,2},
				  {0,2,0,0,0,0,0,2,4,0}};

int mass1V[10][3]={{0,2,3},
				  {3,1,1},
				  {0,3,1},
				  {0,0,8},
				  {0,0,6},
				  {0,3,2},
				  {1,1,3},
				  {0,1,1},
				  {0,0,10},
				  {0,0,10}};

int mass2G[3][10]={{0,0,0,0,0,0,0,0,0,0},
				  {0,0,0,0,0,0,0,0,0,0},
				  {10,10,2,2,10,10,2,2,10,10}};

int mass2V[10][3]={{2,2,2},
				  {2,3,2},
				  {2,3,3},
				  {2,2,3},
				  {2,2,2},
				  {3,2,2},
				  {3,3,2},
				  {2,3,2},
				  {2,2,2},
				  {2,2,2}};

int massTrue2[10][10]={{1,1,0,0,1,1,0,0,1,1},
						{1,1,0,1,1,1,0,0,1,1},
						{1,1,0,1,1,1,0,1,1,1},
						{1,1,0,0,1,1,0,1,1,1},
						{1,1,0,0,1,1,0,0,1,1},
						{1,1,1,0,1,1,0,0,1,1},
						{1,1,1,0,1,1,1,0,1,1},
						{1,1,0,0,1,1,1,0,1,1},
						{1,1,0,0,1,1,0,0,1,1},
						{1,1,0,0,1,1,0,0,1,1}};

int mass3G[3][10]={{4,4,4,2,1,4,3,3,4,5},
				  {5,4,1,1,4,1,1,1,4,4},
				  {0,0,3,3,0,0,2,4,0,0}};

int mass3V[10][3]={{0,5,4},
				  {0,4,4},
				  {3,1,4},
				  {3,1,2},
				  {0,4,1},
				  {0,1,4},
				  {2,1,3},
				  {4,1,3},
				  {0,4,4},
				  {0,4,5}};

int massTrue3[10][10]={{1,1,1,1,1,0,1,1,1,1},
						{1,1,1,1,0,0,1,1,1,1},
						{1,1,1,0,1,0,1,1,1,1},
						{1,1,1,0,1,0,0,0,1,1},
						{0,0,0,0,1,1,1,1,0,1},
						{1,0,1,1,1,1,0,0,0,0},
						{1,1,0,0,0,1,0,1,1,1},
						{1,1,1,1,0,1,0,1,1,1},
						{1,1,1,1,0,0,1,1,1,1},
						{1,1,1,1,0,1,1,1,1,1}};

int mass[10][10]={{11,11,11,11,11,11,11,11,11,11},
				  {11,11,11,11,11,11,11,11,11,11},
				  {11,11,11,11,11,11,11,11,11,11},
				  {11,11,11,11,11,11,11,11,11,11},
				  {11,11,11,11,11,11,11,11,11,11},
				  {11,11,11,11,11,11,11,11,11,11},
				  {11,11,11,11,11,11,11,11,11,11},
				  {11,11,11,11,11,11,11,11,11,11},
				  {11,11,11,11,11,11,11,11,11,11},
				  {11,11,11,11,11,11,11,11,11,11}};
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StringGrid1Click(TObject *Sender)
{

	if(c==1){
		StringGrid1->Canvas->Brush->Color=clNavy;
		StringGrid1->Canvas->Font->Color=clNavy;
	}

	if(c==2){
		StringGrid1->Canvas->Brush->Color=clMedGray;
		StringGrid1->Canvas->Font->Color=clMedGray;
	}

	TRect getRect = StringGrid1-> CellRect(StringGrid1->Col,StringGrid1->Row);
	StringGrid1->Canvas->FillRect(getRect);
	int Left = StringGrid1->Selection.Left;
	int Top = StringGrid1->Selection.Top;

	if(c==1){
		mass[Top][Left]=1;
	}
	if(c==2){
		mass[Top][Left]=0;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	level=1;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			StringGrid1->Canvas->Brush->Color=clWhite;
			StringGrid1->Canvas->Font->Color=clWhite;
			StringGrid1->Canvas->FillRect(StringGrid1->CellRect(i,j));
			mass[i][j]=11;
		}
	}
	Memo1->Clear();
	Memo2->Clear();

	StringGrid1->Canvas->Brush->Color=clGray;
	StringGrid1->Canvas->Font->Color=clGray;

	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(4,0));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(5,0));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(6,0));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(4,1));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(5,1));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(3,2));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(4,2));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(5,2));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(8,2));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(1,4));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(5,5));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(8,5));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(2,6));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(5,6));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(9,6));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(2,7));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(4,7));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(6,7));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(7,7));
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(9,7));


	if(level==1){

		for(int i=0;i<10;i++){

			for(int j=0;j<3;j++){

			String s1="";
			String s2="";
			String s3="";

			if(mass1V[i][j]>0){
				s1=IntToStr(mass1V[i][j]);
			}
			if(mass1V[i][++j]>0){
				s2=IntToStr(mass1V[i][j]);
			}
			if(mass1V[i][++j]>0){
				s3=IntToStr(mass1V[i][j]);
			}
			Memo1->Lines->Add(s1+s2+s3);
		}
	}


	for(int i=0;i<3;i++){

		for(int j=0;j<10;j++){

		String s1="";   String s4="";   String s7="";   String s10="";
		String s2="";   String s5="";   String s8="";
		String s3="";   String s6="";   String s9="";

		s1=IntToStr(mass1G[i][j])+"   ";

		s2=IntToStr(mass1G[i][++j])+"   ";

		s3=IntToStr(mass1G[i][++j])+"   ";

		s4=IntToStr(mass1G[i][++j])+"   ";

		s5=IntToStr(mass1G[i][++j])+"   ";

		s6=IntToStr(mass1G[i][++j])+"   ";

		s7=IntToStr(mass1G[i][++j])+"   ";

		s8=IntToStr(mass1G[i][++j])+"   ";

		s9=IntToStr(mass1G[i][++j])+"   ";

		s10=IntToStr(mass1G[i][++j])+"   ";

		Memo2->Lines->Add(s1+s2+s3+s4+s5+s6+s7+s8+s9+s10);
	}
 }

 }

}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
level=2;
Memo1->Clear();
Memo2->Clear();
for (int i = 0; i < 10; i++){

	for (int j = 0; j < 10; j++){

	StringGrid1->Canvas->Brush->Color=clWhite;
	StringGrid1->Canvas->Font->Color=clWhite;
	StringGrid1->Canvas->FillRect(StringGrid1->CellRect(i,j));
	mass[i][j]=11;
	}
}
if(level==2){

	for(int i=0;i<10;i++){

		for(int j=0;j<3;j++){

		String s1="";
		String s2="";
		String s3="";
		if(mass2V[i][j]>0){
			s1=IntToStr(mass2V[i][j]);
		}
		if(mass2V[i][++j]>0){
		s2=IntToStr(mass2V[i][j]);
		}
		if(mass2V[i][++j]>0){
		s3=IntToStr(mass2V[i][j]);
		}
		Memo1->Lines->Add(s1+s2+s3);
	}
}

for(int i=2;i<3;i++)
{
	for(int j=0;j<10;j++){
	String s1="";   String s4="";   String s7="";   String s10="";
	String s2="";   String s5="";   String s8="";
	String s3="";   String s6="";   String s9="";

	s1=IntToStr(mass2G[i][j])+" ";

	s2=IntToStr(mass2G[i][++j])+"  ";

	s3=IntToStr(mass2G[i][++j])+"  ";

	s4=IntToStr(mass2G[i][++j])+"  ";

	s5=IntToStr(mass2G[i][++j])+"  ";

	s6=IntToStr(mass2G[i][++j])+"  ";

	s7=IntToStr(mass2G[i][++j])+"   ";

	s8=IntToStr(mass2G[i][++j])+"  ";

	s9=IntToStr(mass2G[i][++j])+"  ";

	s10=IntToStr(mass2G[i][++j])+"  ";

	Memo2->Lines->Add(s1+s2+s3+s4+s5+s6+s7+s8+s9+s10);

	}

}
}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	level = 3;

	Memo1->Clear();
	Memo2->Clear();

	for (int i = 0; i < 10; i++){

		for (int j = 0; j < 10; j++){

		StringGrid1->Canvas->Brush->Color=clWhite;
		StringGrid1->Canvas->Font->Color=clWhite;
		StringGrid1->Canvas->FillRect(StringGrid1->CellRect(i,j));
		mass[i][j]=11;
		}
	}

	if(level==3){

		for(int i=0;i<10;i++){

			for(int j=0;j<3;j++){

		String s1="";
		String s2="";
		String s3="";

		if(mass3V[i][j]>0){
			s1=IntToStr(mass3V[i][j]);
		}
		if(mass3V[i][++j]>0){
		s2=IntToStr(mass3V[i][j]);
		}
		if(mass3V[i][++j]>0){
		s3=IntToStr(mass3V[i][j]);
		}
		Memo1->Lines->Add(s1+s2+s3);
	}
}

for(int i=0;i<3;i++){

	for(int j=0;j<10;j++){

	String s1="";   String s4="";   String s7="";   String s10="";
	String s2="";   String s5="";   String s8="";
	String s3="";   String s6="";   String s9="";

	s1=IntToStr(mass3G[i][j])+"   ";

	s2=IntToStr(mass3G[i][++j])+"   ";

	s3=IntToStr(mass3G[i][++j])+"   ";

	s4=IntToStr(mass3G[i][++j])+"   ";

	s5=IntToStr(mass3G[i][++j])+"   ";

	s6=IntToStr(mass3G[i][++j])+"   ";

	s7=IntToStr(mass3G[i][++j])+"   ";

	s8=IntToStr(mass3G[i][++j])+"   ";

	s9=IntToStr(mass3G[i][++j])+"   ";

	s10=IntToStr(mass3G[i][++j])+"   ";

	Memo2->Lines->Add(s1+s2+s3+s4+s5+s6+s7+s8+s9+s10);
	}
}
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
c=1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
c=2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
for(int i=0;i<10;i++){

	for(int j=0;j<10;j++){

		if(mass[i][j]==11){
		 Panel1->Caption="Not all cells are colored";
		 }
	}
}


int counter=0;

 for (int i = 0; i < 10; i++){

		for (int j = 0; j < 10; j++){
			if(level==1){
				if(massTrue1[i][j]==mass[i][j]){
					counter++;
				}
			 } else if(level == 2){
				if(massTrue2[i][j]==mass[i][j]){
					counter++;
				}
			 } else if(level == 3){
				if(massTrue3[i][j]==mass[i][j]){
					counter++;
				}
			 }
		}
	}

if(counter==100)
{
	Panel1->Caption="Congratulations";

	for (int i = 0; i < 10; i++){

		for (int j = 0; j < 10; j++){

		StringGrid1->Canvas->Brush->Color=clWhite;
		StringGrid1->Canvas->Font->Color=clWhite;
		StringGrid1->Canvas->FillRect(StringGrid1->CellRect(i,j));
		mass[i][j]=11;
		}
	}
	}
	else{
		Panel1->Caption=counter;
    }

	counter=0;
}
//---------------------------------------------------------------------------

