#include<iostream.h>
#include<conio.h>

char arr[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
int pos1[20];
int pos2[20];

void main()
{
  int i,j,no,z;
  textattr(1<<4|14);
  clrscr();
  cout<<"Assume a word ! \n\n\rStep 1 :\n\r========\n\r Tabel 1:\n\n\r";
  textattr(1<<4|12);
  for(i=0;i<5;i++)
  cout<<i+1;
  textattr(7<<4);
  for(i=0;i<30;i++)
  {
   if(i%5==0)
   cout<<endl;
   cout<<arr[i];
  }
 textattr(1<<4|14);
 gotoxy(1,15);
 cout<<"\n\n\rEnter Total Number of letters in word :";
 cin>>no;
 for(i=0;i<no;i++)
  {
   gotoxy(1,15);
   cout<<"\n\n\rEnter Letter"<<i+1<<" Column number ";
   cin>>pos1[i];
   pos1[i]-=1;
  }
  clrscr();
  cout<<"Step 2:\n\rTabel 2:\n\r";
  textattr(1<<4|12);
  for(i=0;i<6;i++)
  cout<<i+1;
  textattr(7<<4);
  for(i=0;i<no;i++)
  {
    cout<<endl;
    for(j=pos1[i];j<30;j+=5)
    cout<<arr[j];
  }
  textattr(1<<4|14);
  for(i=0;i<no;i++)
  {
    gotoxy(1,15);
    cout<<"\n\n\rEnter "<<i+1<<" letters column number : ";
    cin>>pos2[i];
    pos2[i]-=1;
  }
  clrscr();
  gotoxy(30,13);
  cout<<"We got you !";
  gotoxy(30,15);
  cout<<" SURPRISED !";
  textcolor(WHITE+BLINK);
  gotoxy(30,14);
  for(i=0;i<no;i++)
  {
  cout<<arr[pos2[i]*5+pos1[i]];
  }
  textcolor(YELLOW+BLINK);
  cout<<"\n\n\n\n\n\n\n\n\rPress Esc to Exit...";
  while(getch()!=27);
  }


