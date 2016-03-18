#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>`
float octave[7] = { 130.81,146.83, 164.81, 174.61, 196, 220, 246.94 } ;
int score=0,level=0,flag1=0,p=0,check=0;
void database();
class abc
{
	public:
	int score;
	char name[10];
	void show()
	{
		cprintf("%s  ->  ",name);
		cprintf("%d",score);
	}
};
abc obj,obj1[5],obj2;
fstream fin;
void printscore(int time)
{
   clrscr();
      textbackground(2);
      clrscr();
	   int i,j;
	   textcolor(0);
      for(j=1;j<=20;j++)
      {
	   sound(octave[j%3]);
	    gotoxy(j,9);
	    cprintf("ê");
	    gotoxy(j+2,9);
	    cprintf("ê");
	    gotoxy(j+3,9);
	    cprintf("ê");
	    gotoxy(j+4,9);
	    cprintf("ê");
	    gotoxy(j+5,9);
	    cprintf("ê");
	    gotoxy(j+6,9);
	    cprintf("ê");
	    gotoxy(j+7,9);
	    cprintf("ê");
	    gotoxy(j+8,9);
	    cprintf("ê");
	    gotoxy(j+9,9);
	    cprintf("ê");
	    gotoxy(j+10,9);
	    cprintf("ê");
	    gotoxy(j+11,9);
	    cprintf("ê");
	    gotoxy(j+12,9);
	    cprintf("ê");
	    gotoxy(j+13,9);
	    cprintf("ê");
	    gotoxy(j+14,9);
	    cprintf("ê");
	    gotoxy(j+15,9);
	    cprintf("ê");
	    gotoxy(j+16,9);
	    cprintf("ê");
	    gotoxy(j+17,9);
	    cprintf("ê");
	    gotoxy(j+18,9);
	    cprintf("ê");
	    gotoxy(j+19,9);
	    cprintf("ê");
	    gotoxy(j+20,9);
	    cprintf("ê");
	    gotoxy(j+21,9);
	    cprintf("ê");
	    gotoxy(j+22,9);
	    cprintf("ê");
	    gotoxy(j+23,9);
	    cprintf("ê");
	    gotoxy(j+24,9);
	    cprintf("ê");
	    gotoxy(j+25,9);
	    cprintf("ê");
	    gotoxy(j+26,9);
	    cprintf("ê");
	    gotoxy(j+27,9);
	    cprintf("ê");
	    gotoxy(j+28,9);
	    cprintf("ê");
	    gotoxy(j+29,9);
	    cprintf("ê");
	    gotoxy(j+30,9);
	    cprintf("ê");
	    gotoxy(j+31,9);
	    cprintf("ê");
	    gotoxy(j+32,9);
	    cprintf("ê");
	    gotoxy(j+33,9);
	    cprintf("ê");
	    gotoxy(j+34,9);
	    cprintf("ê");
	    gotoxy(j+35,9);
	    cprintf("ê");
	    gotoxy(j+36,9);
	    cprintf("ê");
	    gotoxy(j+37,9);
	    cprintf("ê");
	    gotoxy(j+38,9);
	    cprintf("ê");
	    gotoxy(j+39,9);
	    cprintf("ê");
	    gotoxy(j+40,9);
	    cprintf("ê");
	    delay(100);
	    gotoxy(j,9);
	    cout<<" ";
      }
      nosound();
	for(j=1;j<=20;j++)
      {
	   sound(octave[j%3]);
	    gotoxy(j,18);
	    cprintf("ê");
	    gotoxy(j+2,18);
	    cprintf("ê");
	    gotoxy(j+3,18);
	    cprintf("ê");
	    gotoxy(j+4,18);
	    cprintf("ê");
	    gotoxy(j+5,18);
	    cprintf("ê");
	    gotoxy(j+6,18);
	    cprintf("ê");
	    gotoxy(j+7,18);
	    cprintf("ê");
	    gotoxy(j+8,18);
	    cprintf("ê");
	    gotoxy(j+18,18);
	    cprintf("ê");
	    gotoxy(j+10,18);
	    cprintf("ê");
	    gotoxy(j+11,18);
	    cprintf("ê");
	    gotoxy(j+12,18);
	    cprintf("ê");
	    gotoxy(j+13,18);
	    cprintf("ê");
	    gotoxy(j+14,18);
	    cprintf("ê");
	    gotoxy(j+15,18);
	    cprintf("ê");
	    gotoxy(j+16,18);
	    cprintf("ê");
	    gotoxy(j+17,18);
	    cprintf("ê");
	    gotoxy(j+18,18);
	    cprintf("ê");
	    gotoxy(j+118,18);
	    cprintf("ê");
	    gotoxy(j+20,18);
	    cprintf("ê");
	    gotoxy(j+21,18);
	    cprintf("ê");
	    gotoxy(j+22,18);
	    cprintf("ê");
	    gotoxy(j+23,18);
	    cprintf("ê");
	    gotoxy(j+24,18);
	    cprintf("ê");
	    gotoxy(j+25,18);
	    cprintf("ê");
	    gotoxy(j+26,18);
	    cprintf("ê");
	    gotoxy(j+27,18);
	    cprintf("ê");
	    gotoxy(j+28,18);
	    cprintf("ê");
	    gotoxy(j+218,18);
	    cprintf("ê");
	    gotoxy(j+30,18);
	    cprintf("ê");
	    gotoxy(j+31,18);
	    cprintf("ê");
	    gotoxy(j+32,18);
	    cprintf("ê");
	    gotoxy(j+33,18);
	    cprintf("ê");
	    gotoxy(j+34,18);
	    cprintf("ê");
	    gotoxy(j+35,18);
	    cprintf("ê");
	    gotoxy(j+36,18);
	    cprintf("ê");
	    gotoxy(j+37,18);
	    cprintf("ê");
	    gotoxy(j+38,18);
	    cprintf("ê");
	    gotoxy(j+38,18);
	    cprintf("ê");
	    gotoxy(j+40,18);
	    cprintf("ê");
	    delay(100);
	    gotoxy(j,18);
	    cout<<" ";
      }
      nosound();
      for(j=1;j<=9;j++)
      {
	  sound(octave[j%5]);
	   gotoxy(21,j);
	   cprintf("ê");
	   gotoxy(60,j);
	   cprintf("ê");
	   gotoxy(21,j+2);
	   cprintf("ê");
	   gotoxy(60,j+2);
	   cprintf("ê");
	   gotoxy(21,j+3);
	   cprintf("ê");
	   gotoxy(60,j+3);
	   cprintf("ê");
	   gotoxy(60,j+4);
	   cprintf("ê");
	   gotoxy(21,j+4);
	   cprintf("ê");
	   gotoxy(60,j+5);
	   cprintf("ê");
	   gotoxy(21,j+5);
	   cprintf("ê");
	   gotoxy(60,j+6);
	   cprintf("ê");
	   gotoxy(21,j+6);
	   cprintf("ê");
	   gotoxy(21,j+7);
	   cprintf("ê");
	   gotoxy(60,j+7);
	   cprintf("ê");
	   gotoxy(21,j+8);
	   cprintf("ê");
	   gotoxy(60,j+8);
	   cprintf("ê");
	   gotoxy(21,j+9);
	   cprintf("ê");
	   gotoxy(60,j+9);
	   cprintf("ê");
	   delay(200);
	   gotoxy(21,j-1);
	   cout<<" ";
	   gotoxy(60,j-1);
	   cout<<"  ";
      }
      nosound();
      textcolor(4+BLINK);
      gotoxy(25,10);
      cprintf("          SCOREBOARD");
      gotoxy(25,12);
      textcolor(9);
      cprintf("TIME TAKEN      :-");
      gotoxy(45,12);
      cprintf("%d",time);
      gotoxy(25,14);
      cprintf("SCORE           :-");
      gotoxy(45,14);
      cprintf("%d",score);
      gotoxy(25,16);
      cprintf("LEVEL CLEARED   :-");
      gotoxy(45,16);
      cprintf("%d",level);
}
void screen()
{
    textbackground(0);
  clrscr();
   int i,j;
   for(i=1;i<=80;i++)
   {
      for(j=1;j<=24;j++)
      {
	 if(j%2==0 && j%3!=0)
	 {
	    textcolor(14);
	    cprintf("Û");
	 }
	 else if(j%3==0)
	 {
	      textcolor(12);
	      cprintf("Û");
	 }
	 else
	 {
	    textcolor(9);
	    cprintf("Û");
	 }
      }
      sound(octave[random(7)]*2);
      delay(30);
   }
   for(i=20;i<=60;i++)
   {
      for(j=8;j<=16;j++)
      {
	  gotoxy(i,j);
	  cprintf(" ");
      }
   }
   gotoxy(22,9);
   cprintf("ENTER PLAYER NAME");
   gotoxy(22,12);
   cprintf("WELCOME");
   char ch1[20];
   nosound();
   gotoxy(40,9);
   cprintf("     ");
   nosound();
   gets(ch1);
   int t=strlen(ch1);
   int k;
   for(i=0;i<t;i++)
   {
      if(ch1[i]==' ')
      i++;
      k=ch1[i];
      k=k-32;
      ch1[i]=k;
   }
   k=0;
   for(i=40;i<(t+40);i++)
   {
	sound(octave[k%3]);
      for(j=16;j>=12;j--)
      {
	   gotoxy(i,j);
	   textcolor(random(14)+1);
	   cprintf("%c",ch1[k]);
	   delay(50);
	   if(j!=12)
	   {
	   gotoxy(i,j);
	   cout<<" ";
	   }
      }
      k++;
   }
    strcpy(obj2.name,ch1);
   nosound();
   getch();

}
void welcome2()
{
      clrscr();
    randomize();
      gotoxy(60,24);
    textcolor(9+BLINK);
    cprintf("PRESS 0 TO CONTINUE");
    textcolor(14);
    gotoxy(6,4);
    cprintf("±");
    gotoxy(7,5);
    cprintf("±");
    gotoxy(8,6);
    cprintf("±");
    gotoxy(9,7);
    cprintf("±");
    gotoxy(10,8);
    cprintf("±");
    gotoxy(11,7);
    cprintf("±");
    gotoxy(12,6);
    cprintf("±");
    gotoxy(13,5);
    cprintf("±");
    gotoxy(14,4);
    cprintf("±");
    gotoxy(15,5);
    cprintf("±");
    gotoxy(16,6);
    cprintf("±");
    gotoxy(17,7);
    cprintf("±");
    gotoxy(18,8);
    cprintf("±");
    gotoxy(19,7);
    cprintf("±");
    gotoxy(20,6);
    cprintf("±");
    gotoxy(21,5);
    cprintf("±");
    gotoxy(22,4);
    cprintf("±");
    gotoxy(23,5);
    cprintf("±");
    gotoxy(24,6);
    cprintf("±");
    gotoxy(25,7);
    cprintf("±");
    gotoxy(26,8);
    cprintf("±");
    gotoxy(27,7);
    cprintf("±");
    gotoxy(28,6);
    cprintf("±");
    gotoxy(29,5);
    cprintf("±");
    gotoxy(30,4);
    cprintf("±");
    gotoxy(31,5);
    cprintf("±");
    gotoxy(32,6);
    cprintf("±");
    gotoxy(33,7);
    cprintf("±");
    gotoxy(34,8);
    cprintf("²");
    gotoxy(35,7);
    cprintf("²");
    gotoxy(36,6);
    cprintf("±");
    gotoxy(37,5);
    cprintf("™");
    gotoxy(38,4);
    cprintf("™");
    gotoxy(38,6);
    cprintf("™");
    gotoxy(39,4);
    cprintf("™");
    gotoxy(39,6);
    cprintf("™");
    gotoxy(40,4);
    cprintf("™");
    gotoxy(40,6);
    cprintf("™");
    int x;
    char ch;
  do
  {
	 sound(octave[random(7)]*3);
      x=random(14)+1;
      textcolor(x);
    for(int i=11;i<=15;i++)
    {
       gotoxy(7,i);
       cprintf("Û");
    }
    for(i=8;i<=13;i++)
    {
	gotoxy(i,11);
	cprintf("Û");
	gotoxy(i,13);
	cprintf("Û");
	gotoxy(i,15);
	cprintf("Û");
    }
    for(i=11;i<=15;i++)
    {
	gotoxy(16,i);
	cprintf("Û");
    }
    for(i=17;i<=22;i++)
    {
       gotoxy(i,11);
       cprintf("Û");
       gotoxy(i,13);
       cprintf("Û");
    }
    for(i=11;i<=15;i++)
    {
	 gotoxy(23,i);
	 cprintf("Û");
    }
    for(i=26;i<=32;i++)
    {
	 gotoxy(i,11);
	 cprintf("Û");
    }
    for(i=11;i<=15;i++)
    {
	gotoxy(29,i);
	cprintf("Û");
    }
    for(i=11;i<=15;i++)
    {
	gotoxy(35,i);
	cprintf("Û");
    }
    for(i=11;i<=15;i++)
    {
	gotoxy(38,i);
	cprintf("Û");
    }
    gotoxy(39,11);
    cprintf("Û");
    gotoxy(40,12);
    cprintf("Û");
    gotoxy(41,13);
    cprintf("Û");
    gotoxy(42,14);
    cprintf("Û");
    gotoxy(43,15);
    cprintf("Û");
    for(i=15;i>=11;i--)
    {
	gotoxy(44,i);
	cprintf("Û");
    }
    for(i=11;i<=15;i++)
    {
      gotoxy(47,i);
      cprintf("Û");
    }
    for(i=48;i<=53;i++)
    {
	gotoxy(i,11);
	cprintf("Û");
	gotoxy(i,15);
	cprintf("Û");
    }
    gotoxy(53,14);
    cprintf("Û");
    gotoxy(53,13);
    cprintf("Û");
    gotoxy(52,13);
    cprintf("Û");
    gotoxy(6,4);
    for(i=18;i<=22;i++)
    {
	gotoxy(15,i);
	cprintf("Û");
    }
    gotoxy(16,18);
    cprintf("Û");
    gotoxy(17,19);
    cprintf("Û");
    gotoxy(18,20);
    cprintf("Û");
    gotoxy(19,21);
    cprintf("Û");
    gotoxy(20,22);
    cprintf("Û");

    for(i=18;i<=22;i++)
    {
      gotoxy(21,i);
      cprintf("Û");
    }
    for(i=18;i<=22;i++)
    {
       gotoxy(24,i);
       cprintf("Û");
    }
    for(i=25;i<=30;i++)
    {
	gotoxy(i,22);
	cprintf("Û");
    }
    for(i=18;i<=22;i++)
    {
	gotoxy(31,i);
	cprintf("Û");
    }
    for(i=18;i<=22;i++)
    {
	 gotoxy(34,i);
	 cprintf("Û");
    }
    gotoxy(35,18);
    cprintf("Û");
    gotoxy(36,19);
    cprintf("Û");
    gotoxy(37,20);
    cprintf("Û");
    gotoxy(38,21);
    cprintf("Û");
    gotoxy(39,20);
    cprintf("Û");
    gotoxy(40,19);
    cprintf("Û");
    gotoxy(41,18);
    cprintf("Û");
    for(i=18;i<=22;i++)
    {
       gotoxy(42,i);
       cprintf("Û");
    }
    for(i=18;i<=22;i++)
    {
	gotoxy(45,i);
	cprintf("Û");
    }
    for(i=46;i<=50;i++)
    {
	 gotoxy(i,18);
	 cprintf("Û");
	 gotoxy(i,20);
	 cprintf("Û");
	 gotoxy(i,22);
	 cprintf("Û");
    }
    for(i=18;i<=22;i++)
    {
	 gotoxy(51,i);
	 cprintf("Û");
	 gotoxy(52,i);
	 cprintf("Û");
    }
    for(i=18;i<=22;i++)
    {
	gotoxy(55,i);
	  cprintf("Û");
    }
    for(i=56;i<=61;i++)
    {
	gotoxy(i,18);
	cprintf("Û");
	gotoxy(i,20);
	cprintf("Û");
	gotoxy(i,22);
	cprintf("Û");
    }
    for(i=18;i<=22;i++)
    {
	gotoxy(64,i);
	cprintf("Û");
	gotoxy(65,i);
	cprintf("Û");
    }
    for(i=65;i<=70;i++)
    {
	gotoxy(i,18);
	cprintf("Û");
	gotoxy(i,20);
	cprintf("Û");
    }
    gotoxy(70,19);
    cprintf("Û");
    gotoxy(66,21);
    cprintf("Û");
    gotoxy(67,21);
    cprintf("Û");
    gotoxy(68,22);
    cprintf("Û");
    gotoxy(69,22);
    cprintf("Û");
    delay(120);
    if(kbhit())
    ch=getch();
  }while(ch!='0');
  nosound();

}
void welcome()
{
   clrscr();
      int i,j;
      textcolor(13);
      for(i=1;i<=80;i++)
      {
	 for(j=1;j<=24;j++)
	 {
	      gotoxy(i,j);
	      cprintf("²");
	 }
	 sound(octave[i%7]*4);
	 delay(50);
     }
      textcolor(14+BLINK);
      for(i=1;i<=80;i++)
      {
	 gotoxy(i,1);
	 cprintf("Û");
      }
      for(i=1;i<=24;i++)
      {
	     gotoxy(80,i);
	     cprintf("Û");
      }
      for(i=80;i>=1;i--)
      {
	  gotoxy(i,24);
	  cprintf("Û");
      }
      for(i=24;i>=1;i--)
      {
	 gotoxy(1,i);
	 cprintf("Û");
      }

      for(i=5;i<=11;i++)
      {
	    gotoxy(8,i);
	    cprintf(" ");
	    delay(10);
      }
      sound(octave[random(7)]*4);
      gotoxy(9,11);
      cprintf(" ");
      delay(10);
      gotoxy(10,10);
      cprintf(" ");
      delay(10);
      gotoxy(11,9);
      cprintf(" ");
      delay(10);
      gotoxy(12,8);
      cprintf(" ");
      delay(10);
      gotoxy(13,9);
      cprintf(" ");
      delay(10);
      gotoxy(14,10);
      cprintf(" ");
      delay(10);
      gotoxy(15,11);
      cprintf(" ");
      delay(10);
      sound(octave[random(7)]*4);
      for(i=5;i<=11;i++)
      {
	   gotoxy(16,i);
	   cprintf(" ");
	   delay(10);
      }
      for(i=5;i<=11;i++)
      {
	  gotoxy(19,i);
	  cprintf(" ");
	  delay(10);
      }
      sound(octave[random(7)]*4);
      for(i=20;i<=25;i++)
      {
	  gotoxy(i,5);
	  cprintf(" ");
	  gotoxy(i,8);
	  cprintf(" ");
	  gotoxy(i,11);
	 cprintf(" ");
	 delay(10);
     }
     sound(octave[random(7)]*4);
     for(i=5;i<=11;i++)
     {
	 gotoxy(28,i);
	 cprintf(" ");
	 delay(10);
     }
     for(i=29;i<=34;i++)
     {
	  gotoxy(i,11);
	  cprintf(" ");
	  delay(10);
     }
     for(i=5;i<=11;i++)
     {
	 gotoxy(37,i);
	 cprintf(" ");
	 delay(10);
     }
     for(i=38;i<=43;i++)
     {
	  gotoxy(i,5);
	  cprintf(" ");
	  gotoxy(i,11);
	  cprintf(" ");
	  delay(10);
     }
     sound(octave[random(7)]*4);
     for(i=5;i<=11;i++)
     {
	 gotoxy(46,i);
	 cprintf(" ");
	 gotoxy(47,i);
	 cprintf(" ");
	 delay(10);
     }
     for(i=48;i<=53;i++)
     {
	 gotoxy(i,5);
	 cprintf(" ");
	 gotoxy(i,6);
	 cprintf(" ");
	 gotoxy(i,10);
	 cprintf(" ");
	 gotoxy(i,11);
	 cprintf(" ");
	 delay(10);
     }
     for(i=5;i<=11;i++)
     {
	 gotoxy(54,i);
	 cprintf(" ");
	 gotoxy(55,i);
	 cprintf(" ");
	 delay(10);
     }
     for(i=5;i<=11;i++)
     {
	 gotoxy(58,i);
	 cprintf(" ");
	 delay(10);
     }
     gotoxy(59,5);
     cprintf(" ");
     delay(10);
     gotoxy(60,6);
     cprintf(" ");
     delay(10);
     gotoxy(61,7);
     cprintf(" ");
     delay(10);
     gotoxy(62,8);
     cprintf(" ");
     delay(10);
     gotoxy(63,7);
     cprintf(" ");
     delay(10);
     gotoxy(64,6);
     cprintf(" ");
     delay(10);
     gotoxy(65,5);
     cprintf(" ");
     delay(10);
     sound(octave[random(7)]*4);
     for(i=5;i<=11;i++)
     {
	gotoxy(66,i);
	cprintf(" ");
	delay(10);
     }
     for(i=5;i<=11;i++)
     {
	  gotoxy(69,i);
	  cprintf(" ");
	  delay(10);
     }
     for(i=70;i<=75;i++)
     {
	  gotoxy(i,5);
	  cprintf(" ");
	  gotoxy(i,8);
	  cprintf(" ");
	  gotoxy(i,11);
	  cprintf(" ");
	  delay(10);
     }

     for(i=14;i<=20;i++)
     {
	 gotoxy(35,i);
	 cprintf(" ");
	 delay(10);
     }
     for(i=30;i<=40;i++)
     {
	 gotoxy(i,14);
	 cprintf(" ");
	 delay(10);
     }
     sound(octave[2]*4);
      for(i=14;i<=20;i++)
      {
	  gotoxy(43,i);
	  cprintf(" ");
	  gotoxy(44,i);
	  cprintf(" ");
	  delay(10);
      }
      for(i=45;i<=50;i++)
      {
	  gotoxy(i,14);
	  cprintf(" ");
	  gotoxy(i,15);
	  cprintf(" ");
	  gotoxy(i,19);
	  cprintf(" ");
	  gotoxy(i,20);
	  cprintf(" ");
	  delay(10);
      }
      sound(octave[random(7)]*4);
      for(i=14;i<=20;i++)
      {
	  gotoxy(51,i);
	  cprintf(" ");
	  gotoxy(52,i);
	  cprintf(" ");
	  delay(10);
      }
      sound(octave[random(7)]*4);
      nosound();
      delay(1000);
}


void finish()
{
 clrscr();
   randomize();
    textcolor(4);
    int x,i,j;
    for(i=10;i<=14;i++)
    {
       sound(octave[i%7]*3);
       gotoxy(10,i);
       cprintf("Û");
       gotoxy(18,i);
       cprintf("Û");
       gotoxy(24,i);
       cprintf("Û");
       gotoxy(27,i);
       cprintf("Û");
       gotoxy(33,i);
       cprintf("Û");
       gotoxy(36,i);
       cprintf("Û");
       gotoxy(48,i);
       cprintf("Û");
       gotoxy(56,i);
       cprintf("Û");
       gotoxy(62,i);
       cprintf("Û");
       gotoxy(65,i);
       cprintf("Û");
       gotoxy(71,i);
       cprintf("Û");
       gotoxy(72,i);
       cprintf("Û");
    }
    for(i=11;i<=15;i++)
    {
	sound(octave[i%7]*3);
       gotoxy(i,10);
       cprintf("Û");
       gotoxy(i,14);
       cprintf("Û");
    }
    gotoxy(15,13);
    cprintf("Û");
    gotoxy(15,12);
    cprintf("Û");
    gotoxy(14,12);
    cprintf("Û");
    for(i=19;i<=23;i++)
    {
	sound(octave[i%7]*3);
       gotoxy(i,10);
       cprintf("Û");
       gotoxy(i,12);
       cprintf("Û");
    }
    gotoxy(28,10);
    cprintf("Û");
    gotoxy(29,11);
    cprintf("Û");
    gotoxy(30,12);
    cprintf("Û");
    gotoxy(31,11);
    cprintf("Û");
    gotoxy(32,10);
    cprintf("Û");
    for(i=37;i<=42;i++)
    {
	sound(octave[i%7]*3);
	gotoxy(i,10);
	cprintf("Û");
	gotoxy(i,12);
	cprintf("Û");
	gotoxy(i,14);
	cprintf("Û");
   }
   for(i=49;i<=53;i++)
   {
	sound(octave[i%7]*3);
       gotoxy(i,10);
       cprintf("Û");
       gotoxy(i,12);
       cprintf("Û");
       gotoxy(i,14);
       cprintf("Û");
   }
   gotoxy(57,10);
   cprintf("Û");
   gotoxy(58,11);
   cprintf("Û");
   gotoxy(59,12);
   cprintf("Û");
   gotoxy(60,13);
   cprintf("Û");
   gotoxy(61,14);
   cprintf("Û");
   for(i=66;i<=70;i++)
   {
     gotoxy(i,10);
     cprintf("Û");
     gotoxy(i,14);
     cprintf("Û");
   }
   for(j=1;j<=1;j++)
   {

      for(i=1;i<=80;i=i+2)
      {

       x=random(14)+1;
       textcolor(x);
	sound(octave[i%7]*3);
	  gotoxy(i,1);
	  cprintf("");
	  delay(50);
      }

      for(i=1;i<=24;i++)
      {

       x=random(14)+1;
       textcolor(x);
	sound(octave[i%7]*3);
	  gotoxy(80,i);
	  cprintf("");
	  delay(50);
      }
      for(i=80;i>=1;i=i-2)
      {

       x=random(14)+1;
       textcolor(x);
	sound(octave[i%7]*3);
	  gotoxy(i,24);
	  cprintf("");
	  delay(50);
      }
      for(i=24;i>=1;i--)
      {

       x=random(14)+1;
       textcolor(x);
	sound(octave[i%7]*3);
	  gotoxy(1,i);
	  cprintf("");
	  delay(50);
      }
      delay(10);
 }
 nosound();
   textcolor(4+BLINK);
   for(j=1;j<=3;j++)
   {
  for(i=10;i<=14;i++)
    {
       sound(octave[i%7]*3);
       gotoxy(10,i);
       cprintf("Û");
       gotoxy(18,i);
       cprintf("Û");
       gotoxy(24,i);
       cprintf("Û");
       gotoxy(27,i);
       cprintf("Û");
       gotoxy(33,i);
       cprintf("Û");
       gotoxy(36,i);
       cprintf("Û");
       gotoxy(48,i);
       cprintf("Û");
       gotoxy(56,i);
       cprintf("Û");
       gotoxy(62,i);
       cprintf("Û");
       gotoxy(65,i);
       cprintf("Û");
       gotoxy(71,i);
       cprintf("Û");
       gotoxy(72,i);
       cprintf("Û");
    }
    for(i=11;i<=15;i++)
    {
	sound(octave[i%7]*3);
       gotoxy(i,10);
       cprintf("Û");
       gotoxy(i,14);
       cprintf("Û");
    }
    gotoxy(15,13);
    cprintf("Û");
    gotoxy(15,12);
    cprintf("Û");
    gotoxy(14,12);
    cprintf("Û");
    for(i=19;i<=23;i++)
    {
	sound(octave[i%7]*3);
       gotoxy(i,10);
       cprintf("Û");
       gotoxy(i,12);
       cprintf("Û");
    }
    gotoxy(28,10);
    cprintf("Û");
    gotoxy(29,11);
    cprintf("Û");
    gotoxy(30,12);
    cprintf("Û");
    gotoxy(31,11);
    cprintf("Û");
    gotoxy(32,10);
    cprintf("Û");
    for(i=37;i<=42;i++)
    {
	sound(octave[i%7]*3);
	gotoxy(i,10);
	cprintf("Û");
	gotoxy(i,12);
	cprintf("Û");
	gotoxy(i,14);
	cprintf("Û");
   }
   for(i=49;i<=53;i++)
   {
	sound(octave[i%7]*3);
       gotoxy(i,10);
       cprintf("Û");
       gotoxy(i,12);
       cprintf("Û");
       gotoxy(i,14);
       cprintf("Û");
   }
   gotoxy(57,10);
   cprintf("Û");
   gotoxy(58,11);
   cprintf("Û");
   gotoxy(59,12);
   cprintf("Û");
   gotoxy(60,13);
   cprintf("Û");
   gotoxy(61,14);
   cprintf("Û");
   for(i=66;i<=70;i++)
   {
     gotoxy(i,10);
     cprintf("Û");
     gotoxy(i,14);
     cprintf("Û");
   }
   delay(5);
  }
  nosound();

 }
void level1()
{
 clrscr();
    int i,j;
    textcolor(2);
    for(i=1;i<=80;i++)
    {
       for(j=1;j<=24;j++)
       {
	 gotoxy(i,j);
	  cprintf("²");
	 }
	   sound(octave[i%7]*4);
       delay(50);
    }
    textbackground(4);
    textcolor(1+BLINK);
    for(i=9;i<=13;i++)
    {
       gotoxy(8,i);
       cprintf("Û");
       gotoxy(9,i);
       cprintf("Û");
    }
    for(i=9;i<=14;i++)
    {
       gotoxy(i,13);
       cprintf("Û");
    }
    for(i=9;i<=13;i++)
    {
       gotoxy(17,i);
       cprintf("Û");
       gotoxy(18,i);
       cprintf("Û");
    }
    sound(octave[4]*3);
    delay(70);
    for(i=18;i<=23;i++)
    {
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,13);
	cprintf("Û");
	gotoxy(i,11);
	cprintf("Û");
    }
    gotoxy(26,9);
    cprintf("Û");
    gotoxy(27,9);
    cprintf("Û");
    gotoxy(27,10);
    cprintf("Û");
    gotoxy(28,10);
    cprintf("Û");
    gotoxy(28,11);
    cprintf("Û");
    gotoxy(29,11);
    cprintf("Û");
    gotoxy(29,12);
    cprintf("Û");
    gotoxy(30,12);
    cprintf("Û");
    gotoxy(30,13);
    cprintf("Û");
    gotoxy(31,12);
    cprintf("Û");
    gotoxy(31,11);
    cprintf("Û");
    gotoxy(32,11);
    cprintf("Û");
    gotoxy(32,10);
    cprintf("Û");
    gotoxy(33,10);
    cprintf("Û");
    gotoxy(33,9);
    cprintf("Û");
    gotoxy(34,9);
    cprintf("Û");
    sound(octave[4]*3);
    delay(70);
    for(i=9;i<=13;i++)
    {
	gotoxy(37,i);
	cprintf("Û");
	gotoxy(38,i);
	cprintf("Û");
    }
    for(i=39;i<=43;i++)
    {
	gotoxy(i,13);
	cprintf("Û");
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,11);
	cprintf("Û");
    }
    for(i=9;i<=13;i++)
    {
	gotoxy(46,i);
	cprintf("Û");
	gotoxy(47,i);
	cprintf("Û");
    }
    sound(octave[5]*3);
    delay(70);
    for(i=47;i<=52;i++)
    {
       gotoxy(i,13);
       cprintf("Û");
    }
    gotoxy(55,11);
    cprintf("Û");
    gotoxy(56,11);
    cprintf("Û");
    gotoxy(57,11);
    cprintf("Û");
    gotoxy(58,11);
    cprintf("Û");
    for(i=10;i<=12;i++)
    {
	gotoxy(65,i);
	cprintf("Û");
    }
    for(i=63;i<=67;i++)
    {
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,13);
	cprintf("Û");
    }
    sound(octave[6]*3);
    nosound();
    delay(500);
}
void level2()
{

     clrscr();
     textbackground(0);
     clrscr();
    int i,j;
    textcolor(2);
    for(i=1;i<=80;i++)
    {
       for(j=1;j<=24;j++)
       {
	 gotoxy(i,j);
	  cprintf("²");
	 }
       delay(50);
	 sound(octave[i%7]*4);
    }
    textbackground(4);
    textcolor(1+BLINK);
    for(i=9;i<=13;i++)
    {
       gotoxy(8,i);
       cprintf("Û");
       gotoxy(9,i);
       cprintf("Û");
    }
    for(i=9;i<=14;i++)
    {
       gotoxy(i,13);
       cprintf("Û");
    }
    for(i=9;i<=13;i++)
    {
       gotoxy(17,i);
       cprintf("Û");
       gotoxy(18,i);
       cprintf("Û");
    }
      sound(octave[4]*3);
    delay(70);
    for(i=18;i<=23;i++)
    {
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,13);
	cprintf("Û");
	gotoxy(i,11);
	cprintf("Û");
    }
    gotoxy(26,9);
    cprintf("Û");
    gotoxy(27,9);
    cprintf("Û");
    gotoxy(27,10);
    cprintf("Û");
    gotoxy(28,10);
    cprintf("Û");
    gotoxy(28,11);
    cprintf("Û");
    gotoxy(29,11);
    cprintf("Û");
    gotoxy(29,12);
    cprintf("Û");
    gotoxy(30,12);
    cprintf("Û");
    gotoxy(30,13);
    cprintf("Û");
    gotoxy(31,12);
    cprintf("Û");
    gotoxy(31,11);
    cprintf("Û");
    gotoxy(32,11);
    cprintf("Û");
    gotoxy(32,10);
    cprintf("Û");
    gotoxy(33,10);
    cprintf("Û");
    gotoxy(33,9);
    cprintf("Û");
    gotoxy(34,9);
    cprintf("Û");
      sound(octave[4]*3);
    delay(70);
    for(i=9;i<=13;i++)
    {
	gotoxy(37,i);
	cprintf("Û");
	gotoxy(38,i);
	cprintf("Û");
    }
    for(i=39;i<=43;i++)
    {
	gotoxy(i,13);
	cprintf("Û");
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,11);
	cprintf("Û");
    }
    for(i=9;i<=13;i++)
    {
	gotoxy(46,i);
	cprintf("Û");
	gotoxy(47,i);
	cprintf("Û");
    }
     sound(octave[5]*3);
    delay(70);
    for(i=47;i<=52;i++)
    {
       gotoxy(i,13);
       cprintf("Û");
    }
    gotoxy(55,11);
    cprintf("Û");
    gotoxy(56,11);
    cprintf("Û");
    gotoxy(57,11);
    cprintf("Û");
    gotoxy(58,11);
    cprintf("Û");
    for(i=10;i<=12;i++)
    {
       gotoxy(66,i);
       cprintf("Û");
	gotoxy(68,i);
	cprintf("Û");
    }
    for(i=64;i<=70;i++)
    {
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,13);
	cprintf("Û");
    }
     sound(octave[6]*3);
    nosound();
    delay(500);
}
void level3()
{
     clrscr();

     textbackground(0);
     clrscr();
      int i,j;
    textcolor(2);
    for(i=1;i<=80;i++)
    {
       for(j=1;j<=24;j++)
       {
	 gotoxy(i,j);
	  cprintf("²");
	 }
       delay(50);
	 sound(octave[i%7]*4);
    }
    textbackground(4);
    textcolor(1+BLINK);
    for(i=9;i<=13;i++)
    {
       gotoxy(8,i);
       cprintf("Û");
       gotoxy(9,i);
       cprintf("Û");
    }
    for(i=9;i<=14;i++)
    {
       gotoxy(i,13);
       cprintf("Û");
    }
    for(i=9;i<=13;i++)
    {
       gotoxy(17,i);
       cprintf("Û");
       gotoxy(18,i);
       cprintf("Û");
    }
      sound(octave[4]*3);
    for(i=18;i<=23;i++)
    {
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,13);
	cprintf("Û");
	gotoxy(i,11);
	cprintf("Û");
    }
    gotoxy(26,9);
    cprintf("Û");
    gotoxy(27,9);
    cprintf("Û");
    gotoxy(27,10);
    cprintf("Û");
    gotoxy(28,10);
    cprintf("Û");
    gotoxy(28,11);
    cprintf("Û");
    gotoxy(29,11);
    cprintf("Û");
    gotoxy(29,12);
    cprintf("Û");
    gotoxy(30,12);
    cprintf("Û");
    gotoxy(30,13);
    cprintf("Û");
    gotoxy(31,12);
    cprintf("Û");
    gotoxy(31,11);
    cprintf("Û");
    gotoxy(32,11);
    cprintf("Û");
    gotoxy(32,10);
    cprintf("Û");
    gotoxy(33,10);
    cprintf("Û");
    gotoxy(33,9);
    cprintf("Û");
    gotoxy(34,9);
    cprintf("Û");
      sound(octave[4]*3);
      delay(70);
    for(i=9;i<=13;i++)
    {
	gotoxy(37,i);
	cprintf("Û");
	gotoxy(38,i);
	cprintf("Û");
    }
    for(i=39;i<=43;i++)
    {
	gotoxy(i,13);
	cprintf("Û");
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,11);
	cprintf("Û");
    }
    for(i=9;i<=13;i++)
    {
	gotoxy(46,i);
	cprintf("Û");
	gotoxy(47,i);
	cprintf("Û");
    }
      sound(octave[5]*3);
    delay(70);
    for(i=47;i<=52;i++)
    {
       gotoxy(i,13);
       cprintf("Û");
    }
    gotoxy(55,11);
    cprintf("Û");
    gotoxy(56,11);
    cprintf("Û");
    gotoxy(57,11);
    cprintf("Û");
    gotoxy(58,11);
    cprintf("Û");
    for(i=10;i<=12;i++)
    {
       gotoxy(66,i);
       cprintf("Û");
	gotoxy(68,i);
	cprintf("Û");
	gotoxy(70,i);
	cprintf("Û");

    }
    for(i=64;i<=72;i++)
    {
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,13);
	cprintf("Û");
    }
     sound(octave[6]*3);
    nosound();
    delay(500);
}

void level4()
{
   textbackground(0);
   clrscr();
  int i,j;
    textcolor(2);
    for(i=1;i<=80;i++)
    {
       for(j=1;j<=24;j++)
       {
	 gotoxy(i,j);
	  cprintf("²");
	 }
	  sound(octave[i%7]*4);
       delay(50);
    }
    textbackground(4);
    textcolor(1+BLINK);
    for(i=9;i<=13;i++)
    {
       gotoxy(8,i);
       cprintf("Û");
       gotoxy(9,i);
       cprintf("Û");
    }
    for(i=9;i<=14;i++)
    {
       gotoxy(i,13);
       cprintf("Û");
    }
    for(i=9;i<=13;i++)
    {
       gotoxy(17,i);
       cprintf("Û");
       gotoxy(18,i);
       cprintf("Û");
    }
      sound(octave[4]*3);
    for(i=18;i<=23;i++)
    {
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,13);
	cprintf("Û");
	gotoxy(i,11);
	cprintf("Û");
    }
    gotoxy(26,9);
    cprintf("Û");
    gotoxy(27,9);
    cprintf("Û");
    gotoxy(27,10);
    cprintf("Û");
    gotoxy(28,10);
    cprintf("Û");
    gotoxy(28,11);
    cprintf("Û");
    gotoxy(29,11);
    cprintf("Û");
    gotoxy(29,12);
    cprintf("Û");
    gotoxy(30,12);
    cprintf("Û");
    gotoxy(30,13);
    cprintf("Û");
    gotoxy(31,12);
    cprintf("Û");
    gotoxy(31,11);
    cprintf("Û");
    gotoxy(32,11);
    cprintf("Û");
    gotoxy(32,10);
    cprintf("Û");
    gotoxy(33,10);
    cprintf("Û");
    gotoxy(33,9);
    cprintf("Û");
    gotoxy(34,9);
    cprintf("Û");
     sound(octave[4]*3);
      delay(70) ;
    for(i=9;i<=13;i++)
    {
	gotoxy(37,i);
	cprintf("Û");
	gotoxy(38,i);
	cprintf("Û");
    }
    for(i=39;i<=43;i++)
    {
	gotoxy(i,13);
	cprintf("Û");
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,11);
	cprintf("Û");
    }
    for(i=9;i<=13;i++)
    {
	gotoxy(46,i);
	cprintf("Û");
	gotoxy(47,i);
	cprintf("Û");
    }
     sound(octave[5]*3);
    delay(70);
    for(i=47;i<=52;i++)
    {
       gotoxy(i,13);
       cprintf("Û");
    }
    gotoxy(55,11);
    cprintf("Û");
    gotoxy(56,11);
    cprintf("Û");
    gotoxy(57,11);
    cprintf("Û");
    gotoxy(58,11);
    cprintf("Û");
    for(i=10;i<=12;i++)
    {
	gotoxy(65,i);
	cprintf("Û");
    }
    for(i=63;i<=73;i++)
    {
	gotoxy(i,9);
	cprintf("Û");
	gotoxy(i,13);
	cprintf("Û");
    }
    gotoxy(67,10);
    cprintf("Û");
    gotoxy(68,10);
    cprintf("Û");
    gotoxy(68,11);
    cprintf("Û");
    gotoxy(69,11);
    cprintf("Û");
    gotoxy(69,12);
    cprintf("Û");
    gotoxy(70,11);
    cprintf("Û");
    gotoxy(71,10);
    cprintf("Û");
    gotoxy(70,10);
    cprintf("Û");
      sound(octave[6]*3);
    nosound();
    delay(500);
}
void lost()
{
  clrscr();
   int i,j;
   textcolor(10);
   for(i=2;i<=7;i++)
   {
      gotoxy(i,2);
      cprintf("Û");
   }
   for(i=2;i<=8;i++)
   {
       gotoxy(1,i);
       cprintf("Û");
   }
   for(i=2;i<=7;i++)
   {
       gotoxy(i,8);
       cprintf("Û");
   }
   gotoxy(7,7);
   cprintf("Û");
   gotoxy(7,6);
   cprintf("Û");
   gotoxy(6,6);
   cprintf("Û");
   for(i=2;i<=8;i++)
   {
       gotoxy(9,i);
       cprintf("Û");
       gotoxy(14,i);
       cprintf("Û");
       gotoxy(16,i);
       cprintf("Û");
       gotoxy(24,i);
       cprintf("Û");
       gotoxy(26,i);
       cprintf("Û");
   }
   for(i=10;i<=13;i++)
   {
       gotoxy(i,2);
       cprintf("Û");
       gotoxy(i,5);
       cprintf("Û");
   }
   gotoxy(17,2);
   cprintf("Û");
   gotoxy(18,3);
   cprintf("Û");
   gotoxy(19,4);
   cprintf("Û");
   gotoxy(20,5);
   cprintf("Û");
   gotoxy(21,4);
   cprintf("Û");
   gotoxy(22,3);
   cprintf("Û");
   gotoxy(23,2);
   cprintf("Û");
   for(i=27;i<=31;i++)
   {
	gotoxy(i,2);
	cprintf("Û");
	gotoxy(i,5);
	cprintf("Û");
	gotoxy(i,8);
	cprintf("Û");
   }
   for(i=2;i<=8;i++)
   {
	gotoxy(35,i);
	cprintf("Û");
	gotoxy(36,i);
	cprintf("Û");
		gotoxy(43,i);
	cprintf("Û");
	gotoxy(44,i);
	cprintf("Û");
   }
   for(i=36;i<=43;i++)
   {
	gotoxy(i,2);
	cprintf("Û");
	gotoxy(i,3);
	cprintf("Û");
	gotoxy(i,8);
	cprintf("Û");
	gotoxy(i,7);
	cprintf("Û");
   }
   gotoxy(46,2);
   cprintf("Û");
   gotoxy(47,3);
   cprintf("Û");
   gotoxy(48,4);
   cprintf("Û");
   gotoxy(49,5);
   cprintf("Û");
   gotoxy(50,6);
   cprintf("Û");
   gotoxy(51,7);
   cprintf("Û");
   gotoxy(52,8);
   cprintf("Û");
   gotoxy(53,7);
   cprintf("Û");
   gotoxy(54,6);
   cprintf("Û");
   gotoxy(55,5);
   cprintf("Û");
   gotoxy(56,4);
   cprintf("Û");
   gotoxy(57,3);
   cprintf("Û");
   gotoxy(58,2);
   cprintf("Û");
   gotoxy(47,2);
   cprintf("Û");
   gotoxy(48,3);
   cprintf("Û");
   gotoxy(49,4);
   cprintf("Û");
   gotoxy(50,5);
   cprintf("Û");
   gotoxy(51,6);
   cprintf("Û");
   gotoxy(52,7);
   cprintf("Û");
   gotoxy(53,6);
   cprintf("Û");
   gotoxy(54,5);
   cprintf("Û");
   gotoxy(55,4);
   cprintf("Û");
   gotoxy(56,3);
   cprintf("Û");
   gotoxy(57,2);
   cprintf("Û");
   for(i=2;i<=8;i++)
   {
       gotoxy(60,i);
       cprintf("Û");
       gotoxy(67,i);
       cprintf("Û");
       gotoxy(68,i);
       cprintf("Û");

   }
   for(i=61;i<=65;i++)
   {
       gotoxy(i,2);
       cprintf("Û");
       gotoxy(i,8);
       cprintf("Û");
       gotoxy(i,5);
       cprintf("Û");
   }
   for(i=69;i<=71;i++)
   {
       gotoxy(i,2);
       cprintf("Û");
       gotoxy(i,5);
       cprintf("Û");
   }
   for(i=2;i<=5;i++)
   {
       gotoxy(73,i);
       cprintf("Û");
       gotoxy(72,i);
       cprintf("Û");
       gotoxy(68,i);
       cprintf("Û");
   }
   gotoxy(69,6);
   cprintf("Û");
   gotoxy(70,6);
   cprintf("Û");
   gotoxy(71,7);
   cprintf("Û");
   gotoxy(70,7);
   cprintf("Û");
   gotoxy(72,8);
   cprintf("Û");
   gotoxy(71,8);
   cprintf("Û");
   textcolor(9);
   gotoxy(35,13);
   cout<<"TRY  AGAIN";
   gotoxy(38,16);
   cout<<"YES";
   gotoxy(38,18);
   cout<<"NO";
   textcolor(4);
   gotoxy(35,17);
   cprintf("Û");
       sound(octave[6]*3);
    delay(400);
    sound(octave[5]*3);
    delay(400);
    sound(octave[2]*3);
    delay(400);
    sound(octave[1]*2);
    delay(500);
    sound(octave[0]*1);
    delay(600);
    sound(octave[0]);
    nosound();
  flag1=0;
  gotoxy(60,24);
  cprintf("PRESS 0 FOR ENTER");
   char ch='e';
   while (ch!='0')
   {
       if(kbhit())
       ch=getch();
       if(ch=='s')
       {
	 gotoxy(35,17);
	 textcolor(0);
	 cprintf(" ");
	 gotoxy(35,16);
	 cprintf(" ");
	 delay(20);
	 textcolor(4);
	 gotoxy(35,18);
	 cprintf("Û");
	 flag1=0;

       }
       else  if(ch=='w')
       {
	  flag1=1;
	  gotoxy(35,17);
	  textcolor(0);
	  cprintf(" ");
	  gotoxy(35,18);
	  cprintf(" ");
	  delay(20);
	  textcolor(4);
	  gotoxy(35,16);
	  cprintf("Û");
       }
   }

}


void layout()
{
     textbackground(DARKGRAY);
     clrscr();
     textcolor(10);
      int i;
      for(i=2;i<=79;i++)
      {
	 gotoxy(i,1);
	 cprintf("Í");
	 gotoxy(i,24);
	 cprintf("Í");
      }
      gotoxy(80,1);
      cprintf("»");
      gotoxy(1,1);
      cprintf("É");
      for(i=2;i<=23;i++)
      {
	 gotoxy(80,i);
	 cprintf("º");
	 gotoxy(65,i);
	 cprintf("º");
	 gotoxy(1,i);
	 cprintf("º");
      }
      gotoxy(1,24);
      cprintf("È");
      gotoxy(80,24);
      cprintf("¼");
      gotoxy(65,1);
      cprintf("Ë");
      gotoxy(65,24);
      cprintf("Ê");
      gotoxy(65,12);
      cprintf("Ì");
      gotoxy(80,12);
      cprintf("¹");
      for(i=66;i<=79;i++)
      {
	 gotoxy(i,12);
	  cprintf("Í");
      }
      textcolor(4);
      gotoxy(67,4);
      cprintf("SCORE   =");
      gotoxy(67,6);
      cprintf("LEVEL   =");
      gotoxy(67,8);
      cprintf("COUNTER =");
      gotoxy(67,10);
      cprintf("TIME    =");
      gotoxy(67,14);
      textcolor(3);
      cprintf(" W ->up");
      gotoxy(67,16);
      cprintf(" S->down");
      gotoxy(67,18);
      cprintf(" A->left");
      gotoxy(67,20);
      cprintf(" D->right");
}
void first()
{
    randomize();
    int x=20,time=400;
    char ch;
    check=0;
    flag1=0;
    int v=score;
    int y=20;
    int f=1;
    int g=1;
    while(f<3)
      f=random(63);
    while(g<3)
      g=random(23);
    gotoxy(f,g);
    int r=random(10);
    textcolor(14);
    cprintf("%d",r);
    int counter=0;
     do
     {
	 sound(octave[random(7)]*4);
	 if(kbhit())
	 ch=getch();
	 delay(100);
	 gotoxy(x,y);
	 cout<<" ";
	 if(x==f && y==g)
	 {

	     nosound();
	     delay(80);
	     sound (450) ;
	     delay(150);
	     nosound();
		 counter=0;
		 score=score+r;
		 gotoxy(76,4);
		 textcolor(4);
		 cprintf("%d",score);
		 gotoxy(76,6);
		 if(score>=30 && time>0)
		 {
		      gotoxy(x,y);
		      cout<<" ";
		      nosound();
		      printscore(400-time);
		      level=2;
		      nosound();
		      getch();
		      break;
		 }
		 n1:f=1;
		    g=1;
		 while(f<3)
		   f=random(63);
		 while(g<3)
		   g=random(23);
		 gotoxy(f,g);
		 r=random(8)+1;
		 textcolor(14);
		 cprintf("%d",r);
	   }
      switch(ch)
      {
	  case 'a':
		if(x==2)
		  x=64;
	      else
		  x--;
	      break;
	  case 'w':
	      if(y==2)
		  y=23;
	      else
		  y--;
	      break;
	  case 's':
	      if(y==23)
		  y=2;
	      else
		  y++;
	      break;
	  case 'd':
	      if(x==64)
		  x=2;
	      else
		  x++;
	      break;
      }
      gotoxy(x,y);
      textcolor(9);
      cprintf("²");
      counter++;
      gotoxy(77,8);
      textcolor(9);
      cprintf("%d",counter);
      if(counter>50)
      {
      gotoxy(x,y);
      cout<<" ";
      gotoxy(f,g);
      cout<<" ";
      counter=0;
      goto n1;
      }
      time--;
      if(time==99)
      {
	gotoxy(79,10);
	cout<<" ";
      }
      if(time==9)
      {
	  gotoxy(78,10);
	  cout<<" ";
      }
      gotoxy(77,10);
      textcolor(12);
      cprintf("%d",time);
      char ch1;
      if(time<=0)
      {

		nosound();
		gotoxy(x,y);
		cout<<" ";
		gotoxy(5,12);
		textcolor(15+BLINK);
		cprintf("LEVEL IS FAILED WOULD YOU TRY AGAIN PRESS Y/N");
		const ch='e';
		ch1=toupper(getch());
       }

	if(ch1=='y')
		{
		     check=1;
		     score=v;
		     break;
		}
		else if(ch1=='N')
		{
			check=2;
			break;
		}
		else
		ch='0';


   }while(ch!='0');
   nosound();
}
void second()
{
    randomize();
    int x=20,time=350;
    char ch;
    check=0;
    int y=20;
    int v=score;
    ch='e';
    int f=1;
    int g=1;
    textcolor(12);
    for(int i=8;i<=18;i++)
    {
	 gotoxy(20,i);
	 cprintf("");
	 gotoxy(42,i);
	 cprintf("");
   }
   while(((f==20 || f==42)&&(g>=8 && g<=18))||(f<3 && g<3))
   {
      f=random(59)+3;
      g=random(19)+3;
      }
    gotoxy(f,g);
    int r=random(10);
    textcolor(9);
    cprintf("%d",r);
     int counter=0;
     do
     {
	 sound(octave[random(7)]*4);
	 if(kbhit())
	 ch=getch();
	 delay(80);
	 gotoxy(x,y);
	 cout<<" ";
	 if(x==f && y==g)
	 {
	   counter=0;
	   score=score+r;
	   gotoxy(76,4);
	   textcolor(4);
	   cprintf("%d",score);
	   if(score>=40 && time>0)
	  {
		gotoxy(x,y);
		cout<<" ";
		 for(int i=8;i<=18;i++)
		{
		    gotoxy(20,i);
		    cprintf(" ");
		    gotoxy(42,i);
		    cprintf(" ");
		 }
		 nosound();
		 printscore(350-time);
		 nosound();
		 getch();
		 getch();
		level=3;
	       break;
	   }
	   n1:f=1;
	   g=1;

	   while(((f==20 || f==42)&&(g>=8 && g<=18))  || (f<3 && g<3))
	   {
		    f=random(59)+3;
		    g=random(19)+3;
	  }
	   gotoxy(f,g);
	   r=random(8)+1;
	   textcolor(14);
	   cprintf("%d",r);
       }
      switch(ch)
      {
	  case 'a':

	      if(x==2)
		  x=64;
	      else
		  x--;
	      break;
	  case 'w':
	      if(y==2)
		  y=23;
	      else
		  y--;
	      break;
	  case 's':
	      if(y==23)
		  y=2;
	      else
		  y++;
	      break;
	  case 'd':
	      if(x==64)
		  x=2;
	      else
		  x++;
	      break;
      }
      if((x==20 || x==42)&&(y>=8 && y<=18))
      {
	 float octave[7] = { 130.81, 146.83, 164.81, 174.61, 196, 220, 246.94 } ;
		for ( int k = 4 ; k >= 0 ; k-- )
			{
				sound ( octave[k] * 4 ) ;
				delay ( 15 ) ;
			}
			nosound() ;
	  lost();
	  if(flag1==1)
	  {
	     score=0;
	      break;
	  }
	  else if(flag1==0)
	  {
	      finish();
	     database();
	     getch();
	      exit(1);
	  }
      }
      gotoxy(x,y);
      textcolor(9);
      cprintf("²");
      counter++;
      gotoxy(77,8);
      textcolor(4);
      cprintf("%d",counter);
      if(counter>50)
      {
      gotoxy(x,y);
      cout<<" ";
      gotoxy(f,g);
      cout<<" ";
      counter=0;
      goto n1;
   }
      time--;
      if(time==99)
      {
	gotoxy(79,10);
	cout<<" ";
      }
      if(time==9)
      {
	  gotoxy(78,10);
	  cout<<" ";
      }
      gotoxy(77,10);
      textcolor(12);
      cprintf("%d",time);
      char ch1;
      if(time==0)
      {

		nosound();
		gotoxy(x,y);
		cout<<" ";
		for(int i=8;i<=18;i++)
		{
		    gotoxy(20,i);
		    cprintf(" ");
		    gotoxy(42,i);
		    cprintf(" ");
		 }
		gotoxy(20,12);
		textcolor(15+BLINK);
		cprintf(" LEVEL IS FAILED WOULD YOU TRY AGAIN PRESS Y/N");
		ch1=getch();
		const ch='e';
	if(ch1=='y')
		{
		     check=1;
		     score=v;
		     break;
		}
		else
		{
			check=2;
			break;
		}
	}
   }while(ch!='0');
}
void fourth()
{
    randomize();
    int x=20,time=200;
    int v=score;
    check=0;
    char ch='e';
    int y=20;
    int f=1;
    int g=1;
    int i;
    textcolor(12);
    for(i=2;i<=64;i=i+2)
    {
	 gotoxy(i,2);
	 cprintf("");
	 gotoxy(i,23);
	 cprintf("");
	 if(i==30)
	 {
	   gotoxy(i,2);
	   cout<<" ";
	   gotoxy(i,23);
	   cout<<" ";
	 }
    }
    for(i=2;i<=23;i++)
    {
       gotoxy(2,i);
       cprintf("");
       gotoxy(63,i);
       cprintf("");
       if(i==12)
       {
	 gotoxy(2,i);
	 cout<<" ";
	 gotoxy(63,i);
	 cout<<" ";
       }
    }
    for(i=14;i<=50;i=i+2)
    {
       gotoxy(i,5);
       cprintf("");
    }
    for(i=15;i<=50;i=i+2)
    {
       gotoxy(i,10);
       cprintf("");
    }
    for(i=14;i<=50;i=i+2)
    {
       gotoxy(i,15);
       cprintf("");
    }
    for(i=15;i<=50;i=i+2)
    {
       gotoxy(i,20);
       cprintf("");
    }

   while(((g==2 || g==23)&&(f>=2 || f<=64)&& (f!=30)) || ((f==2 || f==63)&&(g>=2 || g<=23)&&(g!=12)) || ((g==5 || g==15)&&(f>=14 && f<=50 && f%2==0)) || ((g==10 || g==20)&&(f>=15 && f<=50 && f%2==1)) ||(f<3 && g<3))
   {
       f=random(55)+3;
       g=random(18)+3;
   }
   gotoxy(f,g);
    int r=random(10);
     textcolor(14);
     cprintf("%d",r);
     int counter=0;
     do
     {
	 sound(octave[random(7)]*4);
	 if(kbhit())
	 ch=getch();
	 delay(50);
	 gotoxy(x,y);
	 cout<<" ";
	 if(x==f && y==g)
	 {
	   counter=0;
	   score=score+r;
	   gotoxy(76,5);
	   textcolor(4);
	   cprintf("%d",score);
	   if(score>=80 && time>0)
	   {
		gotoxy(x,y);
		cout<<" ";
		nosound();
		printscore(200-time);
		nosound();
		finish();
		database();
		getch();
		exit(1);
	   }
	   n1:f=1;
	   g=1;
	   while(((g==2 || g==23)&&(f>=2 || f<=64)&& (f!=30)) || ((f==2 || f==63)&&(g>=2 || g<=23)&&(g!=12)) || ((g==5 || g==15)&&(f>=14 && f<=50 && f%2==0)) || ((g==10 || g==20)&&(f>=15 && f<=50 && f%2==1))||(f<3 && g<3))
	   {
	     f=random(55)+3;
	     g=random(18)+3;
	   }
	   gotoxy(f,g);
	   r=random(8)+1;
	   textcolor(6);
	   cprintf("%d",r);
       }
      switch(ch)
      {
	  case 'a':

	      if(x==2)
		  x=64;
	      else
		  x--;
	      break;
	  case 'w':
	      if(y==2)
		  y=23;
	      else
		  y--;
	      break;
	  case 's':
	      if(y==23)
		  y=2;
	      else
		  y++;
	      break;
	  case 'd':
	      if(x==64)
		  x=2;
	      else
		  x++;
	      break;
      }
      if(((y==2 || y==23)&&(x>=2 || x<=64)&& (x!=30)) || ((x==2 || x==63)&&(y>=2 || y<=23)&&(y!=12)) || ((y==5 || y==15)&&(x>=14 && x<=50 && x%2==0)) || ((y==10 || y==20)&&(x>=15 && x<=50 && x%2==1)))
      {
	   float octave[7] = { 130.81, 146.83, 164.81, 174.61, 196, 220, 246.94 } ;
		for ( int k = 4 ; k >= 0 ; k-- )
			{
				sound ( octave[k] * 4 ) ;
				delay ( 15 ) ;
			}
			nosound() ;
		  lost();
	  if(flag1==1)
	  {
	     score=0;
	      break;
	  }
	  else if(flag1==0)
	  {
	      database();
	      finish();
	      getch();
	       exit(1);
	  }
      }
      gotoxy(x,y);
      textcolor(9);
      cprintf("²");
      counter++;
      textcolor(4);
      gotoxy(77,8);
      cprintf("%d",counter);
      if(counter>50)
      {
      gotoxy(x,y);
      cout<<" ";
      gotoxy(f,g);
      cout<<" ";
      counter=0;
      goto n1;
   }
      time--;
      if(time==99)
      {
	gotoxy(79,10);
	cout<<" ";
      }
      if(time==9)
      {
	  gotoxy(78,10);
	  cout<<" ";
      }
      gotoxy(77,10);
      textcolor(12);
      cprintf("%d",time);
      char ch1;
      if(time==0)
      {

		nosound();
		gotoxy(x,y);
		cout<<" ";
		 for(i=2;i<=64;i=i+2)
    {
	 gotoxy(i,2);
	 cprintf(" ");
	 gotoxy(i,23);
	 cprintf(" ");
	 if(i==30)
	 {
	   gotoxy(i,2);
	   cout<<" ";
	   gotoxy(i,23);
	   cout<<" ";
	 }
    }
    for(i=2;i<=23;i++)
    {
       gotoxy(2,i);
       cprintf(" ");
       gotoxy(63,i);
       cprintf(" ");
       if(i==12)
       {
	 gotoxy(2,i);
	 cout<<" ";
	 gotoxy(63,i);
	 cout<<" ";
       }
    }
    for(i=14;i<=50;i=i+2)
    {
       gotoxy(i,5);
       cprintf(" ");
    }
    for(i=15;i<=50;i=i+2)
    {
       gotoxy(i,10);
       cprintf(" ");
    }
    for(i=14;i<=50;i=i+2)
    {
       gotoxy(i,15);
       cprintf(" ");
    }
    for(i=15;i<=50;i=i+2)
    {
       gotoxy(i,20);
       cprintf(" ");
    }

		gotoxy(20,12);
		textcolor(15+BLINK);
		cprintf("LEVEL IS FAILED WOULD YOU TRY AGAIN PRESS Y/N");
		ch1=getch();
		const ch='e';
	if(ch1=='y')
		{
		     check=1;
		     score=v;
		     break;
		}
		else
		{
			check=2;
			break;
		}
		}
   }while(ch!='0');
   nosound();
}
void third()
{
    randomize();
    int x=20,time=300;
    check=0;
    char ch='e';
    int y=20;
    int f=1;
    int g=1;
    int v=score;
    int i,j;
    textcolor(6);
    for(i=2;i<=64;i=i+2)
    {
	 gotoxy(i,2);
	 cprintf("");
	 gotoxy(i,23);
	 cprintf("");
    }
    for(j=2;j<=23;j++)
    {
       gotoxy(2,j);
       cprintf("");
       gotoxy(64,j);
       cprintf("");
    }
   while(f<3 && g<3)
   {
       f=random(50)+6;
       g=random(15)+6;
   }
   gotoxy(f,g);
   textcolor(8);
    int r=random(10);
     cprintf("%d",r);
     int counter=0;
     do
     {
	 sound(octave[random(7)]*4);
	 if(kbhit())
	 ch=getch();
	 delay(60);
	 gotoxy(x,y);
	 cout<<" ";
	 if(x==f && y==g)
	 {
	   counter=0;
	   score=score+r;
	   gotoxy(76,4);
	   cout<<score;
	   if(score>=60 && time>0)
	   {
		gotoxy(x,y);
		cout<<" ";
		   for(i=2;i<=64;i=i+2)
    {
	 gotoxy(i,2);
	 cprintf(" ");
	 gotoxy(i,23);
	 cprintf(" ");
    }
    for(j=2;j<=23;j++)
    {
       gotoxy(2,j);
       cprintf(" ");
       gotoxy(64,j);
       cprintf(" ");
    }
    nosound();
    printscore(300-time);
		 nosound();
		 getch();
		level=4;
	       break;
    }
	   n1:f=1;
	   g=1;

	 while(f<3 && g<3)
	 {
	     f=random(50)+5;
	     g=random(15)+5;
	 }
	   gotoxy(f,g);
	   r=random(8)+1;
	   textcolor(9);
	   cprintf("%d",r);
       }
      switch(ch)
      {
	  case 'a':

	      if(x==2)
		  x=64;
	      else
		  x--;
	      break;
	  case 'w':
	      if(y==2)
		  y=23;
	      else
		  y--;
	      break;
	  case 's':
	      if(y==23)
		  y=2;
	      else
		  y++;
	      break;
	  case 'd':
	      if(x==64)
		  x=2;
	      else
		  x++;
	      break;
      }
      if(((y==2 || y==23)&&(x>=2 || x<=64)) || ((x==2 || x==63)&&(y>=2 || y<=23)))
      {
		      float octave[7] = { 130.81, 146.83, 164.81, 174.61, 196, 220, 246.94 } ;
		for ( int k = 4 ; k >= 0 ; k-- )
			{
				sound ( octave[k] * 4 ) ;
				delay ( 15 ) ;
			}
			nosound() ;
		  lost();
	  if(flag1==1)
	  {
	     score=0;
	      break;
	  }
	  else if(flag1==0)
	  {
	     finish();
	     database();
	     getch();
	      exit(1);
	  }
      }
      gotoxy(x,y);
      textcolor(9);
      cprintf("²");
      counter++;
      gotoxy(77,8);
      textcolor(4);
      cprintf("%d",counter);
      if(counter>50)
      {
      gotoxy(x,y);
      cout<<" ";
      gotoxy(f,g);
      cout<<" ";
      counter=0;
      goto n1;
   }
      time--;
      if(time==99)
      {
	gotoxy(79,10);
	cout<<" ";
      }
      if(time==9)
      {
	  gotoxy(78,10);
	  cout<<" ";
      }
      gotoxy(77,10);
      textcolor(12);
      cprintf("%d",time);
      char ch1;
      if(time==0)
      {

		nosound();
		gotoxy(x,y);
		cout<<" ";
				   for(i=2;i<=64;i=i+2)
    {
	 gotoxy(i,2);
	 cprintf(" ");
	 gotoxy(i,23);
	 cprintf(" ");
    }
    for(j=2;j<=23;j++)
    {
       gotoxy(2,j);
       cprintf(" ");
       gotoxy(64,j);
       cprintf(" ");
    }

		gotoxy(20,12);
		textcolor(15+BLINK);
		cprintf("LEVEL IS FAILED WOULD YOU TRY AGAIN PRESS Y/N");
		ch1=getch();
		const ch='e';
		if(ch1=='y')
		{
		     check=1;
		     score=v;
		     break;
		}
		else
		{
			check=2;
			break;
		}
		}
   }while(ch!='0');

}
void database()
{
		clrscr();
    int o,k;
    textbackground(0);
    clrscr();
    for(o=30;o<=49;o++)
    {
	sound(random(octave[random(7)]));
	 gotoxy(o,3);
	 textcolor(random(14)+1);
	 cprintf("Í");
	 gotoxy(o,5);
	 cprintf("Í");
	 delay(100);
    }
    nosound();
    textcolor(1);
    gotoxy(30,3);
    cprintf("É");
    gotoxy(49,3);
    cprintf("»");
    gotoxy(49,4);
    delay(100);
    textcolor(2);
    cprintf("º");
    gotoxy(49,5);
    cprintf("¼");
    delay(100);
    textcolor(3);
    gotoxy(30,4);
    cprintf("º");
    gotoxy(30,5);
    cprintf("È");
    delay(100);
    textcolor(4);
    gotoxy(35,4);
    cprintf("HIGH SCORE");
    delay(100);
    for(o=35;o<=43;o++)
    {
	gotoxy(o,5);
    cprintf(" ");
   }
    delay(100);
    for(o=5;o<=8;o++)
    {
	 sound(octave[o-1]);
	textcolor(random(14)+1);
	gotoxy(35,o);
	cprintf("º");
	gotoxy(43,o);
	cprintf("º");
	delay(100);
    }
    nosound();
    int g;
    for(o=34,g=44;o>=25,g<=53;o--,g++)
    {
	sound(octave[g/11]/7);
       textcolor(random(14)+1);
       gotoxy(o,8);
       cprintf("Í");
       gotoxy(g,8);
	cprintf("Í");
       delay(100);
    }
    textcolor(6);
    gotoxy(25,8);
    cprintf("É");
    gotoxy(53,8);
    cprintf("»");
    delay(100);
    textcolor(7);
    gotoxy(25,9);
    cprintf("º");
    gotoxy(53,9);
    cprintf("º");
    delay(100);
    textcolor(8);
    gotoxy(25,10);
    cprintf("º");
    gotoxy(53,10);
    cprintf("º");
    delay(100);
    textcolor(9);
    gotoxy(25,11);
    cprintf("º");
    gotoxy(53,11);
    cprintf("º");
    delay(100);
    textcolor(10);
    gotoxy(25,12);
    cprintf("º");
    gotoxy(53,12);
    cprintf("º");
    delay(100);
    textcolor(11);
    gotoxy(25,13);
    cprintf("º");
    gotoxy(53,13);
    cprintf("º");
    delay(100);
    textcolor(12);
    gotoxy(25,14);
    cprintf("º");
    gotoxy(53,14);
    cprintf("º");
    delay(100);
    textcolor(13);
    gotoxy(25,15);
    cprintf("º");
    gotoxy(53,15);
    cprintf("º");
    delay(100);
    textcolor(14);
    gotoxy(53,15);
    cprintf("¼");
    gotoxy(25,15);
    cprintf("È");
    delay(100);
    for(o=26,g=52;o<=39,g>=39;o++,g--)
    {
	sound(octave[g/11]);
	textcolor(random(14)+1);
	gotoxy(o,15);
	cprintf("Í");
	gotoxy(g,15);
	cprintf("Í");
	delay(100);
    }
    for(o=15;o<=17;o++)
    {
	 sound(octave[o]/3);
	  textcolor(random(14)+1);
	  gotoxy(39,o);
	  cprintf("º");
	  delay(100);
    }
    for(o=38,g=40;o>=31,g<=47;o--,g++)
    {
	 sound(octave[g]/4);
	 textcolor(random(14)+1);
	 gotoxy(o,17);
	 cprintf("Í");
	 gotoxy(g,17);
	 cprintf("Í");
	 delay(100);
    }
    textcolor(2);
    gotoxy(31,17);
    cprintf("É");
    gotoxy(47,17);
    cprintf("»");
    delay(100);
    textcolor(3);
    gotoxy(31,18);
    cprintf("º");
    gotoxy(47,18);
    cprintf("º");
    delay(100);
    textcolor(4);
    gotoxy(31,19);
    cprintf("º");
    gotoxy(47,19);
    cprintf("º");
    delay(100);
    textcolor(5);
    gotoxy(47,19);
    cprintf("¼");
    gotoxy(31,19);
    cprintf("È");
    delay(100);
    textcolor(6);
    for(o=32,g=46;o<=39,g>=39;o++,g--)
    {
	 sound(octave[g]/2);
	 textcolor(random(14)+1);
	 gotoxy(o,19);
	 cprintf("Í");
	 gotoxy(g,19);
	 cprintf("Í");
	 delay(100);

    }
    gotoxy(33,18);
    cprintf("CURRENT SCORE");
    for(o=37;o<=42;o++)
    {
       gotoxy(o,19);
       cout<<" ";
    }
    for(o=19;o<=21;o++)
    {
	  sound(octave[o]/5);
	  textcolor(random(14)+1);
	  gotoxy(37,o);
	  cprintf("º");
	  gotoxy(42,o);
	  cprintf("º");
	  delay(100);
    }
    for(o=36,g=43;o>=28,g<=51;o--,g++)
    {
	 sound(octave[g]/4);
	 textcolor(random(14)+1);
	 gotoxy(o,21);
	 cprintf("Í");
	 gotoxy(g,21);
	 cprintf("Í");
	 delay(100);
    }
    textcolor(7);
    gotoxy(28,21);
    cprintf("É");
    gotoxy(51,21);
    cprintf("»");
    delay(100);
    textcolor(8);
    gotoxy(28,22);
    cprintf("º");
    gotoxy(51,22);
    cprintf("º");
    delay(100);
    textcolor(9);
    gotoxy(28,23);
    cprintf("º");
    gotoxy(51,23);
    cprintf("º");
    delay(100);
    textcolor(10);
    gotoxy(51,24);
    cprintf("¼");
    gotoxy(28,24);
    cprintf("È");
    delay(100);
    for(o=29,g=50;o<=40,g>=40;g--,o++)
    {
	sound(octave[o]/3);
	 textcolor(random(14)+1);
	 gotoxy(o,24);
	 cprintf("Í");
	 gotoxy(g,24);
	 cprintf("Í");
	 delay(100);
    }
    nosound();



    getch();

	int c,j,i,flag=10,v=0;
	obj2.score=score;
		fin.open("bnmv1.txt",ios::in);
		fin.seekg(0,ios::end);
		int rec=fin.tellg()/sizeof(obj);
		fin.seekg(0,ios::beg);
		if(rec>=5)
		{



	for(i=0;i<5;i++)
	{
		fin.read((char*)&obj,sizeof(obj));
		obj1[i].score=obj.score;                       // sort the already data in increasing order
		strcpy(obj1[i].name,obj.name);
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(obj1[i].score<obj1[j].score)
			{
				c=obj1[i].score;
				obj1[i].score=obj1[j].score;           //sorting
				obj1[j].score=c;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		if(obj2.score<obj1[i].score && obj2.score>obj1[i+1].score)
		{
			flag=i;

			break;
		}
	}

	fin.close();
	fin.open("bnmv1.txt",ios::out);

    if(obj2.score>obj1[4].score) // only if it is more than the last one
     {
		   /*for(i=5;i>=0;i--)
		   {
			if(obj2.score>obj1[i].score && obj2.score<obj1[i+1].score)  // to check the appropriate position

			{
			       cout<<"kaa";
			       getch();
			       flag=i;
			       break;
			}
		}*/
		if(flag==10)          // highest score
		{
			for(i=0;i<5;i++)
			{
			       if(i==0)
			       {
					fin.write((char*)&obj2,sizeof(obj2));     // at top position
				   }
				   else
				   {
					  fin.write((char*)&obj1[i],sizeof(obj1[i]));
				   }
			    }
			    fin.close();
			fin.open("bnmv1.txt",ios::in);
			k++;
			for(i=0;i<5;i++)
			{


			    fin.read((char*)&obj1[i],sizeof(obj1[i]));
			    textcolor(random(14)+1);
			    gotoxy(30,k);
			    cprintf("%s",obj1[i].name);
			    gotoxy(45,k);
			    cprintf("%d",obj1[i].score);
			    delay(100);
			    k++;
		    }
		    }
		    else
		    {
			    for(i=0;i<5;i++)
		    {
			   if(i==flag)
			   {
				  fin.write((char*)&obj2,sizeof(obj2));
			   }
			   else
			   {
				  fin.write((char*)&obj1[i],sizeof(obj1[i]));
			   }
		    }
		    fin.close();
		    fin.open("bnmv1.txt",ios::in);
		    k=9;
		    for(i=0;i<5;i++)
		    {
			    fin.read((char*)&obj1[i],sizeof(obj1[i]));
			    textcolor(random(14)+1);
			    gotoxy(30,k);
			    cprintf("%s",obj1[i].name);
			    gotoxy(45,k);
			    cprintf("%d",obj1[i].score);
			    delay(100);
			    k++;


		    }
		  }


     }
     else
     {
	fin.close();
	fin.open("bnmv1.txt",ios::in);
	k++;
	for(i=0;i<5;i++)
	{
		fin.read((char*)&obj1[i],sizeof(obj1[i]));


			    textcolor(random(14)+1);
			    gotoxy(30,k);
			    cprintf("%s",obj1[i].name);
			    gotoxy(45,k);
			    cprintf("%d",obj1[i].score);
			    delay(100);
			    k++;
		 }
	 }

 }
 else
 {
	for(i=0;i<rec;i++)
	{
		fin.read((char*)&obj,sizeof(obj));
		obj1[i].score=obj.score;
		strcpy(obj1[i].name,obj.name);
	}
	for(i=0;i<rec;i++)
	{
		if(obj2.score<obj1[i].score && obj2.score>obj1[i+1].score)
		{
			flag=i+1;
			break;
		}
	}
	fin.close();
	fin.open("bnmv1.txt",ios::out);
	if(flag==10)
	{
		for(i=0;i<rec+1;i++)
		{
			if(i==0)
			{
				fin.write((char*)&obj2,sizeof(obj2));
			}
			else
			{
				fin.write((char*)&obj1[i-1],sizeof(obj1[i-1]));
			}
		}
	}
	else
	{
		for(i=0;i<rec+1;i++)
		{
			if(i==flag)
			{
				fin.write((char*)&obj2,sizeof(obj2));
				v=1;
			}
			else if(v==1)
			{
				fin.write((char*)&obj1[i-1],sizeof(obj1[i-1]));
			}
			else if(v==0)
			{
				fin.write((char*)&obj1[i],sizeof(obj1[i]));
			}
		}
	}
	fin.close();
	fin.open("bnmv1.txt",ios::in);
	k=9;
	for(i=0;i<rec+1;i++)
	{
		fin.read((char*)&obj,sizeof(obj));

			    textcolor(random(14)+1);
			    gotoxy(30,k);
			    cprintf("%s",obj.name);
			    gotoxy(45,k);
			    cprintf("%d",obj.score);
			    delay(100);
			    k++;
	}

 }
    gotoxy(32,23);
    cprintf("%s",obj2.name);
    gotoxy(45,23);
    cprintf("%d",obj2.score);
    getch();
}

void main()
{
    clrscr();
    welcome();
    welcome2();
    screen();
    n2:
    level1();
    delay(50);
    clrscr();
    layout();
    level=1;
    textcolor(4);
    gotoxy(76,4);
    cprintf("%d",score);
    gotoxy(76,6);
    cprintf("%d",level);
    first();
    if(check==1)
    {
       goto n2;
    }
    else if(check==2)
    {
	 finish();
	 database();
	  exit(1);
    }
    if(level==2)
    {
       n4:
	level2();
       delay(50);
	clrscr();
	layout();
      textcolor(4);
      gotoxy(76,4);
      cprintf("%d",score);
      gotoxy(76,6);
      cprintf("%d",level);
      second();
       if(check==1)
       {
       goto n4;
       }
       else if(check==2)
       {
	  finish();
	  database();
	  exit(1);
       }
      if(flag1==1)
      {
	    goto n2;
      }
    }
    if(level==3)
    {
       n5:
	level3();
	delay(50);
	clrscr();
	layout();
	textcolor(4);
	gotoxy(76,4);
	cprintf("%d",score);
	gotoxy(76,6);
	cprintf("%d",level);
	third();
       if(check==1)
       {
       goto n5;
       }
       else if(check==2)
       {
	  finish();
	  database();
	  exit(1);
       }
      if(flag1==1)
      {
	    goto n2;
      }
    }
    if(level==4)
    {
      n6:
       level4();
       delay(50);
       clrscr();
       layout();
       textcolor(4);
       gotoxy(76,4);
       cprintf("%d",score);
       gotoxy(76,6);
       cprintf("%d",level);
       fourth();
       if(check==1)
       {
       goto n6;
       }
       else if(check==2)
       {
	  finish();
	  database();
	  exit(1);

       }
      if(flag1==1)
      {
	    goto n2;
      }
     }
}

