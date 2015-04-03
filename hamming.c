/*Program for hamming code generation*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char code[5], msg[8]={"0000000"}; clrscr();
	//int i;
	printf("Enter your 4 bit binary code:");
	scanf("%s",code);
	msg[2]=code[0];				//mapping the code to [7,4] hamming code
	msg[4]=code[1];
	msg[5]=code[2];
	msg[6]=code[3];
	//setting parity values
	if(msg[4]=='1'^msg[5]=='1'^msg[6]=='1')
		msg[3]='1';
	if(msg[2]=='1'^msg[5]=='1'^msg[6]=='1')
		msg[1]='1';
	if(msg[2]=='1'^msg[4]=='1'^msg[6]=='1')
		msg[0]='1';
	printf("Hamming code for given binary code ");
	puts(code);
	printf(" is ");
	puts(msg);

	getch();
}
