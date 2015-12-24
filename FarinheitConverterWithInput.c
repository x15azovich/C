
#include <stdio.h>
float FarToCelc(float far2);
float CelcToFar(float celc2);
int main(){
float far=0;
float celc=0;
float celcius=0;
float fahrenheit=0;
int choice=0;

printf("Choose the temperature that you would like to convert \n 1. Celcius to $
scanf("%d", &choice);


if(choice==1){
printf("Please Enter The Degrees In Celcius That You Would Like To Convert \n");
scanf("%f", &celc);
fahrenheit=CelcToFar(celc);
printf("%.2f Celcius is %.2f Fahrenheit\n", celc, fahrenheit);
