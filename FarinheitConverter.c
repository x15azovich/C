#include <stdio.h>
int main(){

float far=0;
float celc=0;
printf("Type in the degrees in fahrenheit \n");
scanf("%f", &far);
celc=((far-32)*5)/9;
printf("%.2f fahrenheit is %.2f celcuis", far, celc);

}
