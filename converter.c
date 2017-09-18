/* Convert units of measurement.
   By Edward Kim 
   */

#include<stdio.h>

/* Functions for each conversion. */
float x,y;
float kFunc(float x){
  y = x * 2.20462;
  return y;
}
float pFunc(float x){
  y = x * 0.453592;
  return y;
}
float lFunc(float x){
  y = x * 0.264172;
  return y;
}
float gFunc(float x){
  y = x * 3.78541;
  return y;
}
float cFunc(float x){
  y = x * 0.393701;
  return y;
}
float iFunc(float x){
  y = x * 2.54;
  return y;
}
float csFunc(float x){
  y = x * 1.8 + 32;
  return y;
}
float fFunc(float x){
  y = (x-32)/1.8;
  return y;
}

/* Function for getting and returning menu choice number. */
char getMenuChoice(void){
  char choice;
  printf("\n1. Kg or pounds\n");
  printf("2. Litre or gallon\n");
  printf("3. Cm or inch\n");
  printf("4. Celsius or Fahrenheit\n");
  printf("5. Quit\n");
  scanf(" %c", &choice);
  
  return choice;
}

char main(){
  char selection, unit;
  float value, newValue;
  do{
    selection = getMenuChoice();

    /* 
       Switch statement asking for specific conversion,
       value that needs to be converted and printing converted value
       using respective _Func function. Or print error message
       if conversion type is invalid.
       */
    switch(selection){
    case '1': 
      printf("K for kg to lb, P for lb to kg: \n");
      scanf(" %c", &unit);
      if(unit=='K'){
	printf("Enter the value:\n");
	scanf(" %f", &value);
	printf("%.2f kg is %.2f pounds", value, kFunc(value));
      }
      else if(unit=='P'){
	printf("Enter the value:\n");
	scanf(" %f", &value);
	printf("%.2f pounds is %.2f kg", value, pFunc(value));
      }
      else
	printf("Invalid conversion\n");
      break;
    case '2':
      printf("L for litre to gallon, G for gallon to litre: \n");
      scanf(" %c", &unit);
      if(unit=='L'){
	printf("Enter the value:\n");
	scanf(" %f", &value);
	printf("%.2f L is %.2f gallons", value, lFunc(value));
      }
      else if(unit=='G'){
	printf("Enter the value:\n");
	scanf(" %f", &value);
	printf("%.2f gallons is %.2f L", value, gFunc(value));
      }
      else
	printf("Invalid conversion\n");
      break;
    case '3':
      printf("C for cm to inches, I for inches to cm: \n");
      scanf(" %c", &unit);
      if(unit=='C'){
	printf("Enter the value:\n");
	scanf(" %f", &value);
	printf("%.2f cm is %.2f inches", value, cFunc(value));
      }
      else if(unit=='I'){
	printf("Enter the value:\n");
	scanf(" %f", &value);
	printf("%.2f inches is %.2f cm", value, iFunc(value));
      }
      else
	printf("Invalid conversion\n");
      break;
    case '4':
      printf("C for celsius to fahrenheit, F for fahrenheit to celsius: \n");
      scanf(" %c", &unit);
      if(unit=='C'){
	printf("Enter the value:\n");
	scanf(" %f", &value);
	printf("%.2f celsius is %.2f fahrenheit", value, csFunc(value));
      }
      else if(unit=='F'){
	printf("Enter the value:\n");
	scanf(" %f", &value);
	printf("%.2f fahrenheit is %.2f celsius", value, fFunc(value));
      }
      else
	printf("Invalid conversion\n");
      break;
    case '5':
      printf("Program terminated\n");
      break;
    }
  }while(selection!='5');
return 0;
}









