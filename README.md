# Metric-Converter
## General Purpose ##
This is a metric converter written in C using recursion when asking the user which conversion they would like to make and a switch statement for the cases depending on what conversion the user would like to make.

## Guide ##
User will be asked what he/she wants to convert and will have to enter one of five charactes as listed below:
* 1 for conversion between Kilogram and Pound
* 2 for conversion between Litre and Gallon (liquid gallon or US gallon)
* 3 for conversion between Centimetre and Inch
* 4 for conversion between Celsius and Fahrenheit
* 5 to quit

If 5 is entered, the program will terminate. 

If 1, 2, 3 or 4 are entered, user will be given the following options:
* If 1
  * K for conversion from kilogram to pound
  * P for conversion from pound to kilogram
* If 2
  * L for conversion from litre to gallon
  * G for conversion from gallon to litre
* If 3
  * C for conversion from centimetre to inch
  * I for conversion from inch to centimetre
* If 4
  * C for conversion from celsius to fahrenheit
  * F for conversion from fahrenheit to celsius

Then, user inputs value that they want to convert, and converted value will be displayed as a result. Program will also return to the beginning and asked to enter a character from 1-5 again. If invalid characters are ever entered, program will return to the first prompt where it asks user for a character from 1-5.
