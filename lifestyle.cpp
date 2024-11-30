#include <stdio.h>
#include<conio.h>
#include<string.h>

int choice;
char recommand;
char option[3];
void welcome(){
	printf("\n****************************************************");
	printf("\n               WELCOME TO PAWAN ADVICES");
	printf("\n****************************************************");
}
void input(){
printf("\n 1.ms student");
printf("\n 2.IT professional");
printf("\n 3.vegatable seller");
printf("\n 4.lawyer");
printf("\n 5.bank employee");
printf("\n choose your profession (1-5):");
scanf("%d",&choice);
}
void calculation(){
switch (choice ){
   case 1: 
printf("\n they spend 6-8 hours perday studying");
printf("\n they take medication");
printf("\n every week 10 hrs rest");
printf("\n they will learn new things ");
printf("\n 6-7hrs sleep on week days and 8-9hrs on weekend ");

printf("\ndo you want a recommendation for ms student? (y/n):");
getch();
getch();

scanf("%s",&recommand);
if ((recommand == 'y')|| (recommand == 'Y')){
printf("\n recommendation for ms student");
printf("\n you should eat cereal ,eggs as breakfast");
printf("\n you should eat packed lunch,salads, fruis as Lunch");
printf("\n you should eat home-cooked as dinner");
printf("\n you should do aerobics exercise and strength training");
printf("\n At morning 5am you should do exercise  ");
}
break;


case 2 : 
printf("\n 2-3hrs focused study time per day");
printf("\n they eat by standing in 5min in luch time ");
printf("\n every weak satuday and Sunday leave ");
printf("\n free hrs for it professional is every less hrs in day");
printf("\n 8-9 hrs of sleep per night ");
printf("\n do you want a recommendation for IT professional? (y/n);");
scanf("%s",&recommand);
if ((recommand == 'y')|| (recommand == 'Y')){
printf("recommendation for IT professional ");

printf("\n you should eat oatmeal, smoothies,eggs as breakfast ");
printf("\n you should eat salads,wraps, sandwich as lunch ");
printf("\n you should eat stir-fries,grilled protein as dinner");
printf("\n you should do strength training and yoga");
printf("\n At morning 5am us should do exercise");
}
break ;

case 3: 
printf("\n at 2am they will go to wholesale market ");
printf("\n from 4am to 12 pm they sell vegetables ");
printf("\n they eat lunch by 1pm");
printf("\n at evening they start selling 4 pm to 8pm ");
printf("\n 6-7hrs of sleep per night ");
printf("\n do you want a recommendation for vegetable seller? (y/n);");
scanf("%s",&recommand);
if ((recommand == 'y')|| (recommand == 'Y')){


printf("recommendation for vegetables seller ");

printf("\n you should eat puri,idli as breakfast  ");
printf("\n you should eat rice as lunch  ");
printf("\n you should eat home-cooked as dinner");
printf("\n you should not do any exercise ");
printf("\n you should not do any exercise ");
}
break ;

      case 4 :
 printf("\n they work 42-54hours per week ");
 printf("\n they study 3-4hrs per day");
 printf("\n they approach minimum 25 cases per month ");
 printf("\n they have 5-6hrs of tome to spend with their family ");
 printf("\n 6-8 hrs of sleep per night ");
 
 printf("\n do you want a recommendation for lawyer? (y/n);");
 scanf("%s",&recommand);
if ((recommand == 'y')|| (recommand == 'Y')){
printf ("recommendation for lawyer");
printf("\n you should eat oata,roast as breakfast ");
printf("\n you should eat packed lunch,wraps, fruis as lunch");
printf("\n you should eat home-cooked as dinner ");
printf("\n you a should do yoga ");
printf("\n At morning 5am you should do yoga ");
}
break ;

case 5 :
printf("\n 9am to 5pm there is working time ");
printf("\n every Sunday and  12 causal leaves per calendar year ");
printf("\n they usually take luch between 1pm to 3pm");
printf("\n customer services is available for 6hrs from 10am to 4pm");
printf("\n 8-9hrs of sleep per night ");
printf("\n do you want a recommendation for bank employee? (y/n);");
scanf("%s",&recommand);
if ((recommand == 'y')|| (recommand == 'Y')){
 printf("recommendation for Bank employee ");
 printf("\n you should eat puri,idli,dosa as breakfast ");
 printf("\n you should eat rice, fruits as lunch");
 printf("\n you should eat rice as dinner ");
 printf("\n you  should do yoga and exercise ");
 printf("\n AT morning 5am you a should do yoga and exercise");
}
break ;

default :
printf("\n no such professional ");
break ;
}
}
main(){
	do{
	welcome();	
	input();
	calculation();
	printf("\n Do you want to continue?[yes/no]\n");
	scanf("%s",&option);
}while(strcmp("no",option));
}
