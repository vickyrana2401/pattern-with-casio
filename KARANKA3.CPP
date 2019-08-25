				 #include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
int matrix[8][8], n, i, j ;
 clrscr();

gotoxy(20,-3);cout<<"*************************************"<<"\n";
gotoxy(20,-2);cout<<"*  WELCOME TO LISTIKA MINESWEEPER   *"<<"\n";
gotoxy(20,-1);cout<<"*************************************"<<"\n";

   //matrix enter krwaya hai (star)
for (int z=0; z<=7; z++)
	{
   for (int j=0; j<=7; j++)
	{
   gotoxy(20,15+j);   matrix[z][j]='k*';
      }
    }

   //matrix print krwaya hai
for (int k=0; k<=7; k++)
	{
   for (int j=0; j<=7; j++)
	{
      cout<<matrix[k][j]<<" ";
      }
      cout<<"\n";
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    //rows and columns enter krwaye

   cout<<"Enter the guess of the row in which the number is contained";
   cin>>i;
   cout<<"\n";

   cout<<"Enter the guess of column in which the number is contained";
   cin>>j;
   cout<<"\n";

   //Loop mein condition taki is position pr yeh number aa jaye

for ( i=0; i<=7; i++)
	{
   for (j=0; j<=7; j++)
	{  clrscr();
      if (i==0 && j==1)                 //0,1
		matrix[0][1]=3;
      else
      if (i==3 && j==4)                 //3,4
      matrix[3][4]=5;
      else
      if (i==5 && j==5)                 //5,5
      matrix[5][5]=9;
		else
      if (i==7 && j==7)                 //7,7
      matrix[7][7]=1;
		else
      if (i==7 && j==6)                 //7,6
      matrix[7][6]=8;
		else
      if (i==6 && j==7)                 //6,7
      matrix[6][7]=10;
      else
      if (i==2 && j==7)                 //2,7
      matrix[2][7]=7;
      else
      if (i==5 && j==1)                //5,1
      matrix[5][1]=4;
      }
    }

    //Matrix print krwaya hai

for (int y=0; y<=7; y++)
	{
   for (int j=0; j<=7; j++)
	{
      cout<<matrix[y][j]<<" ";
      }
      cout<<"\n";
    }

    getchar ();
    return 0;
}