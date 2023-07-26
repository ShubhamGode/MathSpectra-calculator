#include <iostream>
#include<math.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void basic_opr();
void area_finding();
void unit_converter();
void Mathematical_tables_and_operations();
void matrix();
void matrixslv();
void matrixopr();
void trignometry();
void ThreebyThreematrix();
void twobytwo();
void length();
void weight();
void time();
void temperature();
void ampere();
void substance();
void initMenu();
void menuDecision(int);
double Circle(double);
double Square(double);
double Rectangle(double,double);
double Triangle(double,double);
const double PI = 3.14;
void opr_decision();
int main()
{
    beginning:
    system("cls");
    cout << "Welcome here!!!" << endl;
    opr_decision();

    char decision2;
    do
    {
        cout << "Do you want to continue another program ? (Y/N): "<< endl;
        cin >> decision2;
     system("cls");
    if ( decision2 == 'Y' || decision2 == 'y')
        goto beginning;
    }
    while(decision2 != 'N' && decision2 != 'n'&& decision2 != 'y'&& decision2 != 'Y');
        cout << "Thank You :)" << endl;

    return 0;
}

//<------------------------------1.PROGRAM FOR BASIC OPERATIONS.------------------------------------->
void basic_opr()
{
    double ANS, var;
    char decision;
    cout << "NOTE : FOR EACH ENTRY(NUMBER,OPERATOR) PRESS ENTER AND THEN ENTER VALUES." <<  endl;
    cout << "Operators = + -> Addition, - -> Subtraction, * -> Multiplication, / -> Division, = ->Answer \n\n " << endl;
    cout << "Enter Number" << endl;
    cin >> ANS;
    while (true) {
    cout << "\nEnter operator (+,-,*,/,=)" << endl;
    cin >> decision;
     if (decision == '=')
            break;
    cout << "\nEnter next number: " << endl;
    cin >> var;
    switch (decision)
    {
    //Operations:
    case '+':
      (ANS = ANS + var);
        break;
    case '-':
        (ANS = ANS - var);
        break;
    case '*':
        (ANS = ANS * var);
        break;
    case '/':
        if (var != 0)
        (ANS = ANS / var);
        else
            cout << "You can't divide by 0" << endl;
        break;

    default:
        cout << "You typed wrong character" << endl;
    }
    }
        cout << "Your answer is : " << ANS << endl;
}

//<-------------------------PROGRAM FOR AREA OF SHAPES.----------------------------------------------->
void area_finding()
{
   int choice;
    {
     initMenu();
     cin >> choice; //Input of which select shape to find Area.
    system("cls");
     menuDecision(choice);
    }
}
void initMenu()
{
    cout << "Which shape area wants to find out ?" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
}
void menuDecision(int choice)
{
    double r,l,b,h;
    switch(choice)
    {
    case 1:
        cout << "Enter radius of circle :" << endl;
        cin >> r;
        Circle(r);
        break;
    case 2:
        cout << "Enter side of Square :" << endl;
        cin >> l;
        Square(l);
        break;
    case 3:
        cout << "Enter length & breadth of Rectangle :" << endl;
        cin >> l >> b;
        Rectangle(l,b);
        break;
    case 4:
        cout << "Enter length & height of Triangle :" << endl;
        cin >> l >> h;
        Triangle(l,h);
        break;
    default:
        cout << "You didn't choose correct option !!!" << endl;
    }
}
double Circle(double r) //Main program to find area of circle.
{
    double ans = PI*r*r;
    cout << "The area of circle of radius "<< r << " is "<< ans <<endl;
    return ans;
}
double Square(double l) //Main program to find area of Square.
{
    double ans = l*l;
    cout << "The area of square of side "<< l << " is "<< ans <<endl;
    return ans;
}

double Rectangle(double l,double b) //Main program to find area of Rectangle.
{
    double ans = l*b;
    cout << "The area of rectangle of length "<< l << " & breadth "<< b << " is "<< ans <<endl;
    return ans;
}
double Triangle(double l,double h) //Main program to find area of Triangle.
{
    double ans = l*h;
    cout << "The area of Triangle of length "<< l << " & height "<< h << " is "<< ans <<endl;
    return ans;

}

//<-----------------------------3. PROGRAM FOR UNIT CONVERTER-------------------------------------->
void unit_converter()
   {
        cout << "What is your type of Unit?" << endl;
        cout << "1. Length." << endl;
        cout << "2. Mass(weight)." << endl;
        cout << "3. Time." << endl;
        cout << "4. Temperature." << endl;
        cout << "5. amount of substance (mole)." << endl;
        cout << "6. electric current." << endl;
        int us,a =1,b = 2;
        cin >> us; // Input from user as which unit type they want..
        system("cls");
        switch(us)
        {
       case 1:
            length();
            break;
       case 2:
           weight();
           break;
       case 3:
           time();
            break;
       case 4:
           temperature();
           break;
       case 5:
           substance();
            break;
       case 6:
           ampere();
           break;
     default:
        cout << "You did not choose correct option !!!" << endl;
    }
}

//Main program for length.
void length()
{
    double userlength;
    cout << "Enter your length: " << endl;
    cin >> userlength;
    start2:
    system("cls");
    cout << "What is your current unit (cm, m , km): " << endl;
    cout << "1. millimeters." << " " << "2. centimeters." << endl;
    cout << "3. meters. " <<" " << "4. kilometers." << endl;
    int ul;
    cin >> ul; //Input of current unit
    switch(ul)
    {
      case 1:
           cout << userlength<< "mm"<< " " << "=" << " "<< (userlength / 10) << "cm" << endl;
           cout << userlength << "mm"<< " " << "=" << " "<< (userlength / 1000) << "m" << endl;
           cout << userlength<<  "mm"<< " " << "=" << " "<< (userlength / 1000000) << "km" << endl;
         break;
      case 2:
            cout << userlength << "cm"<< " " << "=" << " "<< (userlength * 10) << "mm" << endl;
           cout << userlength << "cm"<< " " << "=" << " "<< (userlength / 100) << "m" << endl;
           cout << userlength << "cm"<< " " << "=" << " "<< (userlength / 100000) << "km" << endl;

         break;
      case 3:
           cout << userlength << "m"<< " " << "=" << " "<< (userlength * 1000) << "mm" << endl;
           cout << userlength << "m"<< " " << "=" << " "<< (userlength * 100) << "cm" << endl;
           cout << userlength << "m"<< " " << "=" << " "<< (userlength / 1000) << "km" << endl;
        break;
      case 4:
           cout << userlength << "km"<< " " << "=" << " "<< (userlength * 1000000) << "mm" << endl;
           cout << userlength << "km"<< " " << "=" << " "<< (userlength * 100000) << "cm" << endl;
           cout << userlength << "km"<< " " << "=" << " "<< (userlength * 1000) << "m" << endl;
        break;
    default:
        cout << "You did not choose correct option !!!" << endl;

    }
    char decision5;
    do
    {
        cout << "Do you want to continue this unit conversion operation ? (Y/N): "<< endl;
        cin >> decision5;
     system("cls");

    if ( decision5 == 'Y' || decision5 == 'y')
        goto start2;
    }
    while((decision5 != 'Y')&&(decision5 != 'y')&&(decision5 != 'N')&&(decision5 != 'n'));
    cout << "You can choose another operation by typing Yes(Y & y)!!!" << endl;

}

//Main program for weight.
void weight()
{
    double userweight;
    cout << "Enter your weight: " << endl;
    cin >> userweight;
    start1:
    cout << "What is your current unit (mg, g , kg).: " << endl;
    cout << "1. milligram." << " " << "2. gram." << " " << "3. kilogram." << endl;
    int uw;
    cin >> uw; //Input of current user weight unit.
    system("cls");
    switch(uw)
    {
      case 1:
           cout << userweight << "mg"<< " " << "=" << " "<< (userweight / 1000) << "g" << endl;
           cout << userweight << "mg"<< " " << "=" << " "<< (userweight / 1000000) << "kg" << endl;
         break;
      case 2:
            cout << userweight << "g"<< " " << "=" << " "<< (userweight * 1000) << "mg" << endl;
           cout << userweight << "g"<< " " << "=" << " "<< (userweight / 1000) << "kg" << endl;
         break;
      case 3:
           cout << userweight << "kg"<< " " << "=" << " "<< (userweight * 1000000) << "mg" << endl;
           cout << userweight << "kg"<< " " << "=" << " "<< (userweight * 1000) << "g" << endl;
        break;

    }
    char decision3;
    do
    {
        cout << "Do you want to continue this unit conversion operation ? (Y/N): "<< endl;
        cin >> decision3;
     system("cls");

    if ( decision3 == 'Y' || decision3 == 'y')
        goto start1;

    }
    while(decision3 != 'N' && decision3 != 'n'&& decision3 != 'y'&& decision3 != 'Y');
    cout << "You can choose another operation by typing Yes(Y & y)!!!" << endl;


}

//Main program for time.
void time()
{
    double usertime,uyr ,umon, uweek, umin, uday,uhr , usec, umls, umicr, ns;
    cout << "Enter your time: " << endl;
    cin >> usertime;
    start:
    cout << "What is your current time in: " << endl;
    cout << "1. year" << " "<< "2. months" << " " << "3. week"<< " " << "4. day"<<endl;
    cout << "5. hour" << " " << "6. minutes" << " " << "7. seconds" << " "<< "8. milliseconds" << endl;
    cout << "9. microseconds" << " " << "10. nanoseconds" << endl;
    int ut;
    cin >> ut; //Input of current user time unit.
    system("cls");
    switch(ut)
    {
      case 1:
          umon = usertime * 12;
          uweek = umon * 4.345;
          uday = uweek * 7;
          uhr = uday * 24;
          umin = uhr * 60;
          usec = umin * 60;
          umls = usec * 1000;
          umicr = umls * 1000;
          ns = umicr * 1000;
           cout << usertime << "yr"<< " " << "=" << " "<< (umon = usertime * 12) << "m" << endl;
           cout << usertime << "yr"<< " " << "=" << " "<< ( umon * 4.345) << "w" << endl;
           cout << usertime << "yr"<< " " << "=" << " "<< (uday = usertime * 365) << "d" << endl;
           cout << usertime << "yr"<< " " << "=" << " "<< (uhr = uday * 24) << "hr" << endl;
           cout << usertime << "yr"<< " " << "=" << " "<< (umin = uhr * 60) << "min" << endl;
           cout << usertime << "yr"<< " " << "=" << " "<< (usec = umin * 60) << "sec" << endl;
           cout << usertime << "yr"<< " " << "=" << " "<< (umls = usec * 1000) << "millisec" << endl;
           cout << usertime << "yr"<< " " << "=" << " "<< (umicr = umls * 1000) << "microsec" << endl;
           cout << usertime << "yr"<< " " << "=" << " "<< ( umicr * 1000) << "ns" << endl;
         break;
      case 2:
          uyr = usertime / 12;
          uweek = usertime * 4.345;
          uday = uweek * 7;
          uhr = uday * 24;
          umin = uhr * 60;
          usec = umin * 60;
          umls = usec * 1000;
          umicr = umls * 1000;
          ns = umicr * 1000;
           cout << usertime << "m"<< " " << "=" << " "<< ( uyr) << "yr" << endl;
           cout << usertime << "m"<< " " << "=" << " "<< ( uweek) << "w" << endl;
           cout << usertime << "m"<< " " << "=" << " "<< (uday) << "d" << endl;
           cout << usertime << "m"<< " " << "=" << " "<< (uhr ) << "hr" << endl;
           cout << usertime << "m"<< " " << "=" << " "<< (umin) << "min" << endl;
           cout << usertime << "m"<< " " << "=" << " "<< (usec ) << "sec" << endl;
           cout << usertime << "m"<< " " << "=" << " "<< (umls) << "millisec" << endl;
           cout << usertime << "m"<< " " << "=" << " "<< (umicr) << "microsec" << endl;
           cout << usertime << "m"<< " " << "=" << " "<< ( ns) << "ns" << endl;
         break;
      case 3:
          uday = usertime * 7;
          umon = usertime /4.34524;
          uyr = umon / 12;
          uhr = uday * 24;
          umin = uhr * 60;
          usec = umin * 60;
          umls = usec * 1000;
          umicr = umls * 1000;
          ns = umicr * 1000;
           cout << usertime << "w"<< " " << "=" << " "<< (uyr) << "year" << endl;
           cout << usertime << "w"<< " " << "=" << " "<< ( umon) << "m" << endl;
           cout << usertime << "w"<< " " << "=" << " "<< (uday) << "d" << endl;
           cout << usertime << "w"<< " " << "=" << " "<< (uhr =  uday * 24) << "hr" << endl;
           cout << usertime << "w"<< " " << "=" << " "<< (umin = uhr * 60) << "min" << endl;
           cout << usertime << "w"<< " " << "=" << " "<< (usec = umin * 60) << "sec" << endl;
           cout << usertime << "w"<< " " << "=" << " "<< (umls = usec * 1000) << "millisec" << endl;
           cout << usertime << "w"<< " " << "=" << " "<< (umicr = umls * 1000) << "microsec" << endl;
           cout << usertime << "w"<< " " << "=" << " "<< ( umicr * 1000) << "ns" << endl;
            break;

      case 4:
         uhr = usertime * 24;
         uweek = usertime / 7;
          umon = uweek / 4.345;
          uyr = umon / 12;
          umin = uhr * 60;
          usec = umin * 60;
          umls = usec * 1000;
          umicr = umls * 1000;
          ns = umicr * 1000;
           cout << usertime << "d"<< " " << "=" << " "<< (uyr) << "year" << endl;
           cout << usertime << "d"<< " " << "=" << " "<< (umon) << "m" << endl;
           cout << usertime << "d"<< " " << "=" << " "<< (uweek) << "w" << endl;
           cout << usertime << "d"<< " " << "=" << " "<< (uhr ) << "hr" << endl;
           cout << usertime << "d"<< " " << "=" << " "<< (umin) << "min" << endl;
           cout << usertime << "d"<< " " << "=" << " "<< (usec) << "sec" << endl;
           cout << usertime << "d"<< " " << "=" << " "<< (umls) << "millisec" << endl;
           cout << usertime << "d"<< " " << "=" << " "<< (umicr) << "microsec" << endl;
           cout << usertime << "d"<< " " << "=" << " "<< (ns) << "ns" << endl;
        break;

      case 5:
          umin = usertime * 60;
          uday = usertime / 24;
          uweek = uday / 7;
          umon = uweek /4.34524;
          uyr = umon / 12;
          usec = umin * 60;
          umls = usec * 1000;
          umicr = umls * 1000;
          ns = umicr * 1000;
           cout << usertime << "hr"<< " " << "=" << " "<< ( uyr ) << "year" << endl;
           cout << usertime << "hr"<< " " << "=" << " "<< (umon) << "m" << endl;
           cout << usertime << "hr"<< " " << "=" << " "<< (uweek) << "w" << endl;
           cout << usertime << "hr"<< " " << "=" << " "<< (uday) << "d" << endl;
           cout << usertime << "hr"<< " " << "=" << " "<< (umin) << "min" << endl;
           cout << usertime << "hr"<< " " << "=" << " "<< (usec = umin * 60) << "sec" << endl;
           cout << usertime << "hr"<< " " << "=" << " "<< (umls) << "millisec" << endl;
           cout << usertime << "hr"<< " " << "=" << " "<< (umicr) << "microsec" << endl;
           cout << usertime << "hr"<< " " << "=" << " "<< (ns) << "ns" << endl;

         break;
      case 6:
          usec = usertime * 60;
          uhr = usertime / 60;
          uday = uhr / 24;
          uweek = uday / 7;
          umon = uweek /4.34524;
          uyr = umon / 12;
          umls = usec * 1000;
          umicr = umls * 1000;
          ns = umicr * 1000;
           cout << usertime << "min"<< " " << "=" << " "<< ( uyr) << "year" << endl;
           cout << usertime << "min"<< " " << "=" << " "<< (umon ) << "m" << endl;
           cout << usertime << "min"<< " " << "=" << " "<< (uweek) << "w" << endl;
           cout << usertime << "min"<< " " << "=" << " "<< (uday) << "d" << endl;
           cout << usertime << "min"<< " " << "=" << " "<< ( uhr) << "hr" << endl;
           cout << usertime << "min"<< " " << "=" << " "<< (usec) << "sec" << endl;
           cout << usertime << "min"<< " " << "=" << " "<< (umls) << "millisec" << endl;
           cout << usertime << "min"<< " " << "=" << " "<< (umicr) << "microsec" << endl;
           cout << usertime << "min"<< " " << "=" << " "<< (ns) << "ns" << endl;

         break;
      case 7:
          umls = usertime * 1000;
          umin = usertime /60;
          uhr =  umin / 60;
          uday = uhr / 24;
          uweek = uday / 7;
          umon = uweek /4.34524;
          uyr = umon / 12;
          umicr = umls * 1000;
          ns = umicr * 1000;

           cout << usertime << "sec"<< " " << "=" << " "<< ( uyr ) << "year" << endl;
           cout << usertime << "sec"<< " " << "=" << " "<< ( umon ) << "m" << endl;
           cout << usertime << "sec"<< " " << "=" << " "<< ( uweek) << "w" << endl;
           cout << usertime << "sec"<< " " << "=" << " "<< ( uday) << "d" << endl;
           cout << usertime << "sec"<< " " << "=" << " "<< ( uhr) << "hr" << endl;
           cout << usertime << "sec"<< " " << "=" << " "<< (umin) << "min" << endl;
           cout << usertime << "sec"<< " " << "=" << " "<< (umls) << "millisec" << endl;
           cout << usertime << "sec"<< " " << "=" << " "<< (umicr) << "microsec" << endl;
           cout << usertime << "sec"<< " " << "=" << " "<< (ns) << "ns" << endl;

        break;
      case 8:
          umicr = usertime * 1000;
          usec = usertime / 1000;
          umin = usec /60;
          uhr =  umin / 60;
          uday = uhr / 24;
          uweek = uday / 7;
          umon = uweek /4.34524;
          uyr = umon / 12;
          ns = umicr * 1000;
           cout << usertime << "millisec"<< " " << "=" << " "<< ( uyr ) << "year" << endl;
           cout << usertime << "millisec"<< " " << "=" << " "<< ( umon ) << "m" << endl;
           cout << usertime << "millisec"<< " " << "=" << " "<< ( uweek) << "w" << endl;
           cout << usertime << "millisec"<< " " << "=" << " "<< ( uday) << "d" << endl;
           cout << usertime << "millisec"<< " " << "=" << " "<< ( uhr) << "hr" << endl;
           cout << usertime << "millisec"<< " " << "=" << " "<< (umin) << "min" << endl;
           cout << usertime << "millisec"<< " " << "=" << " "<< (usec) << "sec" << endl;
           cout << usertime << "millisec"<< " " << "=" << " "<< (umicr) << "microsec" << endl;
           cout << usertime << "millisec"<< " " << "=" << " "<< (ns) << "ns" << endl;
         break;
      case 9:
          ns = usertime * 1000;
          umls = usertime / 1000;
          usec = umls / 1000;
          umin = usec /60;
          uhr =  umin / 60;
          uday = uhr / 24;
          uweek = uday / 7;
          umon = uweek /4.34524;
          uyr = umon / 12;

           cout << usertime << "microsec"<< " " << "=" << " "<< ( uyr ) << "year" << endl;
           cout << usertime << "microsec"<< " " << "=" << " "<< ( umon ) << "m" << endl;
           cout << usertime << "microsec"<< " " << "=" << " "<< ( uweek) << "w" << endl;
           cout << usertime << "microsec"<< " " << "=" << " "<< ( uday) << "d" << endl;
           cout << usertime << "microsec"<< " " << "=" << " "<< ( uhr) << "hr" << endl;
           cout << usertime << "microsec"<< " " << "=" << " "<< (umin) << "min" << endl;
           cout << usertime << "microsec"<< " " << "=" << " "<< (usec) << "sec" << endl;
           cout << usertime << "microsec"<< " " << "=" << " "<< (umls) << "millisec" << endl;
           cout << usertime << "microsec"<< " " << "=" << " "<< (ns) << "ns" << endl;
         break;
      case 10:
          umicr = usertime / 1000;
          umls = umicr / 1000;
          usec = umls / 1000;
          umin = usec /60;
          uhr =  umin / 60;
          uday = uhr / 24;
          uweek = uday / 7;
          umon = uweek /4.34524;
          uyr = umon / 12;

           cout << usertime << "ns"<< " " << "=" << " "<< ( uyr ) << "year" << endl;
           cout << usertime << "ns"<< " " << "=" << " "<< ( umon ) << "m" << endl;
           cout << usertime << "ns"<< " " << "=" << " "<< ( uweek) << "w" << endl;
           cout << usertime << "ns"<< " " << "=" << " "<< ( uday) << "d" << endl;
           cout << usertime << "ns"<< " " << "=" << " "<< ( uhr) << "hr" << endl;
           cout << usertime << "ns"<< " " << "=" << " "<< (umin) << "min" << endl;
           cout << usertime << "ns"<< " " << "=" << " "<< (usec) << "sec" << endl;
           cout << usertime << "ns"<< " " << "=" << " "<< (umls) << "millisec" << endl;
           cout << usertime << "ns"<< " " << "=" << " "<< (umicr) << "microsec" << endl;
            break;
    }
    char decision4;
    do
    {
        cout << "Do you want to continue this unit conversion operation ? (Y/N): "<< endl;
        cin >> decision4;
     system("cls");

    if ( decision4 == 'Y' || decision4 == 'y')
        goto start;

    }
    while(decision4 != 'N' && decision4 != 'n'&& decision4 != 'y'&& decision4 != 'Y');
    cout << "You can choose another operation by typing Yes(Y & y)!!!" << endl;

}

//Main program for temperature.
void temperature()
{
    double usertemp;
    cout << "Enter your temperature: " << endl;
    cin >> usertemp;
    start3:
    cout << "What is your current unit (C, F, K): " << endl;
    cout << "1. Degree Celsius" << " " << "2. Fahrenheit" << " " << "3. Kelvin" << endl;
    int ut;
    cin >> ut; //Input of user temperature unit.
    system("cls");
    switch(ut)
    {
      case 1:
           cout << usertemp << "C"<< " " << "=" << " "<< ((usertemp * 9/5) + 32) << "F" << endl;
           cout << usertemp << "C"<< " " << "=" << " "<< (usertemp + 273.15) << "K" << endl;
         break;
      case 2:
            cout << usertemp << "F"<< " " << "=" << " "<< ((usertemp - 32)* 5/9) << "C" << endl;
           cout << usertemp << "F"<< " " << "=" << " "<< ((usertemp - 32)* 5/9 + 273.15) << "K" << endl;
         break;
      case 3:
           cout << usertemp << "K"<< " " << "=" << " "<< (usertemp - 273.15) << "C" << endl;
           cout << usertemp << "K"<< " " << "=" << " "<< ((usertemp - 273.15)* 9/5 + 32) << "F" << endl;
        break;

    }
    char decision6;
    do
    {
        cout << "Do you want to continue this unit conversion operation ? (Y/N): "<< endl;
        cin >> decision6;
     system("cls");

    if ( decision6 == 'Y' || decision6 == 'y')
        goto start3;

    }
    while(decision6 != 'N' && decision6 != 'n'&& decision6 != 'y'&& decision6 != 'Y');
    cout << "You can choose another operation by typing Yes(Y & y)!!!" << endl;

}

//Main program for mole of substance.
void substance()
{
    start5:
    double usersub;
    double subunit,mole = 1,particles = 2;
    int a = 100000000, b = 100000000, c = 10000000;
    cout << "Enter your value:  " << endl;
    cin >> usersub;
    cout << "What is your current unit == Enter the number (1. mole or 2.particles).: " << endl;
    cin >> subunit;
    {
        if (subunit == mole )
        cout << usersub << "  mole." << " " <<"=" << " " <<(usersub * 6.022140 * a*b*c) <<"  Particles" << endl;
       else if (subunit == particles)
        cout << usersub << "  particles." << " " << "=" << (usersub / 6.022140 *a*b*c) << "  mole" << endl;
        else
            cout << "You entered wrong number!!!" << endl;
    }
    char decision8;
    do
    {
        cout << "Do you want to continue this unit conversion operation ? (Y/N): "<< endl;
        cin >> decision8;
     system("cls");

    if ( decision8 == 'Y' || decision8 == 'y')
        goto start5;

    }
    while(decision8 != 'N' && decision8 != 'n'&& decision8 != 'y'&& decision8 != 'Y');
    cout << "You can choose another operation by typing Yes(Y & y)!!!" << endl;
}

//Main program for mole of substance.
void ampere()
{
    double userampere;
    cout << "Enter your ampere: " << endl;
    cin >> userampere;
    start4:
    cout << "What is your current unit (microamps, mA , A, kA): " << endl;
    cout << "1. micro-ampere" << " " << "2. milliampere" << endl;
    cout << "3. ampere " <<" " << "4. kiloampere" << endl;
    int ua;
    cin >> ua;
    system("cls");
    switch(ua)
    {
      case 1:
           cout << userampere<< "microamps"<< " " << "=" << " "<< (userampere / 1000) << "mA" << endl;
           cout << userampere << "microamps"<< " " << "=" << " "<< (userampere / 1000000) << "A" << endl;
           cout << userampere<<  "microamps"<< " " << "=" << " "<< (userampere / 1000000000) << "kA" << endl;
         break;
      case 2:
            cout << userampere << "mA"<< " " << "=" << " "<< (userampere * 1000) << "microamps" << endl;
           cout << userampere << "mA"<< " " << "=" << " "<< (userampere / 1000) << "A" << endl;
           cout << userampere << "mA"<< " " << "=" << " "<< (userampere / 1000000) << "kA" << endl;

         break;
      case 3:
           cout << userampere << "A"<< " " << "=" << " "<< (userampere * 1000000) << "microamps" << endl;
           cout << userampere << "A"<< " " << "=" << " "<< (userampere * 1000) << "mA" << endl;
           cout << userampere << "A"<< " " << "=" << " "<< (userampere / 1000) << "kA" << endl;
        break;
      case 4:
           cout << userampere << "kA"<< " " << "=" << " "<< (userampere * 1000000000) << "microamps" << endl;
           cout << userampere << "kA"<< " " << "=" << " "<< (userampere * 1000000) << "mA" << endl;
           cout << userampere << "kA"<< " " << "=" << " "<< (userampere * 1000) << "A" << endl;
        break;
    default:
        cout << "You did not choose correct option !!!" << endl;
    }
    char decision7;
    do
    {
        cout << "Do you want to continue this unit conversion operation ? (Y/N): "<< endl;
        cin >> decision7;
     system("cls");

    if ( decision7 == 'Y' || decision7 == 'y')
        goto start4;

    }
    while(decision7 != 'N' && decision7 != 'n'&& decision7 != 'y'&& decision7 != 'Y');
    cout << "You can choose another operation by typing Yes(Y & y)!!!" << endl;
}

//<--------------------------4. PROGRAM FOR MATHEMATICAL OPERATION------------------------------------->
void Mathematical_tables_and_operations()
{
    char mathematicsdecision;
    mathematicsbegin:
    cout << "Which mathematical operation you want to perform ? "<< endl;
    cout << "1. Mathematical Tables." << endl;
    cout << "2. Square & Square root." << endl;
    cout << "3. any-power of number solution (multiplying & Root)." << endl;
    cout << "4. Inverse." << endl;
    cout << "5. Modulus(mod)." << endl;
    cout << "6. GCD & LCM." << endl;
    cout << "7. Average." << endl;
    cout << "8.Factorial of number." << endl;
    int mto;
    cin >> mto;
    system("cls");
    switch(mto)
    {
    case 1: //program for mathematical tables
        int tablenum, multinum;
        cout << "Enter Your Number: " <<endl;
        cin >> tablenum;
        system("cls");
        for (int i =1; i < 11; ++i)
        {
            multinum = i;
            cout << "\n" << endl;
            cout<<"  " <<tablenum << " * " << multinum << " =  "<< multinum * tablenum << endl;
        }
        do
        {
        cout << "Do you want to continue this Mathematical operations ? (Y/N): "<< endl;
        cin >> mathematicsdecision;
        system("cls");

    if ( mathematicsdecision == 'Y' || mathematicsdecision == 'y')
        goto mathematicsbegin;
        }
    while(mathematicsdecision != 'N' && mathematicsdecision != 'n'&& mathematicsdecision != 'y'&& mathematicsdecision != 'Y');
        cout << "You can perform another operations. " << endl;
        break;
    case 2: //program for square and square root.
        int choicesqnum,sqnum;
        cout << "1.Square Or 2.Square root" << endl;
        cout << "Choose Number: " << endl;
        cin >> choicesqnum;
        cout << "Enter Your number" << endl;
        cin >> sqnum;
        if (choicesqnum == 1)
            cout << sqnum << " " << "=" << " " <<  (sqnum*sqnum) << endl;
        else if (choicesqnum == 2)
            cout << sqnum << " " << "=" << " " <<  sqrt(sqnum) << endl;
        else
            cout << "You Entered wrong number!!!!" << endl;

        do
        {
        cout << "Do you want to continue this Mathematical operations ? (Y/N): "<< endl;
        cin >> mathematicsdecision;
        system("cls");

    if ( mathematicsdecision == 'Y' || mathematicsdecision == 'y')
        goto mathematicsbegin;
        }
    while(mathematicsdecision != 'N' && mathematicsdecision != 'n'&& mathematicsdecision != 'y'&& mathematicsdecision != 'Y');
        cout << "You can perform another operations. " << endl;
        break;

    case 3:  //program for to finding multiplyings and roots.
        int Pnum,pownum,Pchoice;
        cout << "Which operation you want to perform" << endl;
        cout << "1.Multiplyings (Squares,Cubes,etc) Or 2.Root(square root,cube root,etc)" << endl;
        cout << "Choose Number: " << endl;
        cin >> Pchoice;
        cout << "Enter Your number" << endl;
        cin >> Pnum;
        cout << "power of number (X^a where 'a' is a power. e.g: 1,2,3,4...): " << endl;
        cin >> pownum;
        if (Pchoice == 1)
            cout << Pnum << " " << "=" << " " <<  pow(Pnum, pownum) << endl;
        else if (Pchoice == 2)
            cout << Pnum << " " << "=" << " " << pow(Pnum, 1.0/pownum * 1.0) << endl;
        else
            cout << "You Entered wrong number!!!!" << endl;
        do
        {
        cout << "Do you want to continue this Mathematical operations ? (Y/N): "<< endl;
        cin >> mathematicsdecision;
        system("cls");

    if ( mathematicsdecision == 'Y' || mathematicsdecision == 'y')
        goto mathematicsbegin;
        }
    while(mathematicsdecision != 'N' && mathematicsdecision != 'n'&& mathematicsdecision != 'y'&& mathematicsdecision != 'Y');
        cout << "You can perform another operations. " << endl;
        break;
    case 4: //program for inverse of number.
        int invrnum;
        cout << "Enter the number: " << endl;
        cin >> invrnum;
        cout << invrnum << " " << "=" << " " << pow(invrnum,-1) << endl;
        do
        {
        cout << "Do you want to continue this Mathematical operations ? (Y/N): "<< endl;
        cin >> mathematicsdecision;
        system("cls");

    if ( mathematicsdecision == 'Y' || mathematicsdecision == 'y')
        goto mathematicsbegin;
        }
    while(mathematicsdecision != 'N' && mathematicsdecision != 'n'&& mathematicsdecision != 'y'&& mathematicsdecision != 'Y');
        cout << "You can perform another operations. " << endl;
        break;
    case 5: //program for modulus(mod)
        int x,y,z;
        cout << "Format of modulus 'x mod y'" << endl;
        cout << "Enter value of x: " << endl;
        cin >> x;
        cout << "Enter value of y: " << endl;
        cin >> y;
        z = x%y;
        cout << x << " "<< "mod" <<" "<< y << " " << "=" << " " << z  << endl;
        do
        {
        cout << "Do you want to continue this Mathematical operations ? (Y/N): "<< endl;
        cin >> mathematicsdecision;
        system("cls");

    if ( mathematicsdecision == 'Y' || mathematicsdecision == 'y')
        goto mathematicsbegin;
        }
    while(mathematicsdecision != 'N' && mathematicsdecision != 'n'&& mathematicsdecision != 'y'&& mathematicsdecision != 'Y');
        cout << "You can perform another operations. " << endl;
        break;
    case 6: //program for gcd and lcm.
        int a,b,gcd,max;
        char gcdlcm;
        cout << "Enter First Number: " << endl;
        cin >> a;
        cout << "Enter Second Number: " << endl;
        cin >> b;

        cout << "Which operation you want to perform ?" << endl;
        cout << "a. Greatest Common Divisor (GCD)" << " " << "b. Least Common Multiple (LCM)" << endl;
        cout << "Choose Number: " << endl;
        cin >> gcdlcm;
        switch(gcdlcm)
        {
            case 'a':
                if (a == 0)
                    cout << "GCD is " << b << endl;
                if (b == 0)
                    cout << "GCD is " << a << endl;
                while (a != b){
                    if (a > b)
                        a -=b;
                    else
                        b -=a;
                    }
                    cout << "GCD is :" << a << endl;
        do
        {
        cout << "Do you want to continue this Mathematical operations ? (Y/N): "<< endl;
        cin >> mathematicsdecision;
        system("cls");

    if ( mathematicsdecision == 'Y' || mathematicsdecision == 'y')
        goto mathematicsbegin;
        }
    while(mathematicsdecision != 'N' && mathematicsdecision != 'n'&& mathematicsdecision != 'y'&& mathematicsdecision != 'Y');
        cout << "You can perform another operations. " << endl;
                break;
            case 'b':
                if (a == 0)
                    cout << "LCM is " << b << endl;
                if (b == 0)
                    cout << "LCM is " << a << endl;
                max = (a > b)? a : b;
                do
                {
                    if (max% a == 0 && max % b == 0)
                    {
                        cout << "LCM = "<< max << endl;
                        break;
                    }
                    else
                        ++max;
                }while(true);
                break;
        }
        do
        {
        cout << "Do you want to continue this Mathematical operations ? (Y/N): "<< endl;
        cin >> mathematicsdecision;
        system("cls");

    if ( mathematicsdecision == 'Y' || mathematicsdecision == 'y')
        goto mathematicsbegin;
        }
    while(mathematicsdecision != 'N' && mathematicsdecision != 'n'&& mathematicsdecision != 'y'&& mathematicsdecision != 'Y');
        cout << "You can perform another operations. " << endl;
        break;

    case 7: // program for average of numbers.
    {
    int a,sum = 0;
    float x,y,avg;
    cout << "How many numbers you will add ? " << endl;
    cin >> a;
    int number[a];
    cout << "Enter " << a << " Numbers: " << endl;
    for (int i = 0; i < a; ++i)
    {
        cin >> number[i];
    }
    cout << "The numbers are: " << endl;

    for (int n = 0; n < a; ++n)
    {
        cout << number[n] << " " << endl;
    }
    for (int i = 0; i < a; i++)
    {
        sum = sum + number[i];
        x = float(sum);
        y = float(a);
        avg = x /y;
    }
    cout << "Mean is " << avg << endl;
        do
        {
        cout << "Do you want to continue this Mathematical operations ? (Y/N): "<< endl;
        cin >> mathematicsdecision;
        system("cls");

    if ( mathematicsdecision == 'Y' || mathematicsdecision == 'y')
        goto mathematicsbegin;
        }
    while(mathematicsdecision != 'N' && mathematicsdecision != 'n'&& mathematicsdecision != 'y'&& mathematicsdecision != 'Y');
        cout << "You can perform another operations. " << endl;
    break;
}
    case 8: //program for factorial.
        {
            int num;
            long long fact = 1;
            cout << "Enter positive number:" << endl;
            cin >> num;
            for(int i = 1; i <= num; ++i )
            {
                fact *= i;
            }
            cout << "Factorial of  "<< num << " is " << fact << endl;
        do
        {
        cout << "Do you want to continue this Mathematical operations ? (Y/N): "<< endl;
        cin >> mathematicsdecision;
        system("cls");

    if ( mathematicsdecision == 'Y' || mathematicsdecision == 'y')
        goto mathematicsbegin;
        }
    while(mathematicsdecision != 'N' && mathematicsdecision != 'n'&& mathematicsdecision != 'y'&& mathematicsdecision != 'Y');
        cout << "You can perform another operations. " << endl;
            break;
        }
    default:
        cout << "You have entered wrong option!!!!" << endl;

    }
}

//<-----------------------------------------5.PROGRAM FOR MATRICES ------------------------------------------------>
void matrix()
{
    start11:
    system("cls");
    int matrixselecion;
    cout << "Which Opeartion You want ?" << endl;
    cout << "1. Matrix opeartion." << "  " << "2. Matrix Determinant. " << endl;
    cin >> matrixselecion;
    system("cls");
    switch(matrixselecion)
    {
    case 1:
        matrixslv();
        break;
    case 2:
        matrixopr();
        break;
    }
    char decision11;
    do
    {
    cout << "Do you want to continue matrix operations (Y/N)?" << endl;
    cin >> decision11;
        system("cls");
    if (decision11 == 'Y' || decision11 == 'y')
        goto start11;
    }
    while(decision11 != 'N' && decision11 != 'n'&& decision11 != 'y'&& decision11 != 'Y');
    system("cls");
    cout << "choose another operation!!!" << endl;

}

//Main program for to find determinant of matrix.
void matrixopr()
{
    start9:
    system("cls");
  int detmatrix,y,p,q,r,cdet;
  cout << "Select your matrix " << endl;
  cout << "1. 2 * 2." << "   " << "2. 3 * 3." << endl;
  cin >> detmatrix;
  system("cls");
  switch(detmatrix)
  {
  case 1: //program determinant of matrix [2 * 2].
    int c[2][2],cdet;
    cout << " |Input marix A | " << "\n\n" << endl;
    for(int i =0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            cout << "Enter A" << i+1 << j+1 << ": \t" << endl;
            cin >> c[i][j];
        }
    }
        cdet = ((c[0][0] * c[1][1] ) - (c[0][1] * c[1][0]));
    cout << "The determinant of matrix is " << cdet;
    cout << "\n";

    break;

  case 2:  //program determinant of matrix [3 * 3].
    {
    int c[3][3],cdet;
    cout << " |Input marix A | " << "\n\n" << endl;
    for(int i =0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter A" << i+1 << j+1 << ": \t" << endl;
            cin >> c[i][j];
        }
    }
        p = ((c[1][1] * c[2][2]) - (c[2][1] * c[1][2]));
        q = ((c[1][0] * c[2][2]) - (c[2][0] * c[1][2]));
        r = ((c[1][0] * c[2][1]) - (c[2][0] * c[1][1]));
        cdet = ((c[0][0] * p) - (c[0][1] * q) + (c[0][2] * r));
        cout << "The determinant of matrix is " << cdet;
        cout << "\n";

    break;
    }
  }
  char decision9;
  do
  {
    cout << "Do you want to continue determinant operation (Y/N)?" << endl;
    cin >> decision9;
        system("cls");
    if (decision9 == 'Y' || decision9 == 'y')
        goto start9;
  }
    while(decision9 != 'N' && decision9 != 'n'&& decision9 != 'y'&& decision9 != 'Y');
    system("cls");
        cout << "choose another matrix operation!!!" << endl;
}

//Program for solving two matrices.
void matrixslv()
{
    start10:
    system("cls");
  int selectmatrix,x;
  cout << "Select your matrix. " << endl;
  cout << "1. 3 * 3" << "  " << "2. 2 * 2" << endl;
  cin >> selectmatrix;
    if (selectmatrix == 1)
        x = 3;
    else if(selectmatrix == 2)
        x = 2;
    else
        cout << "Please choose correct option " << endl;
    system("cls");
    int a[x][x];
    int b[x][x];
    int result[x][x];
    cout << " |Input marix A | " << "\n\n" << endl;
    for(int i =0; i < x; ++i)
    {
        for(int j = 0; j < x; ++j)
        {
            cout << "Enter A" << i+1 << j+1 << ": \t" << endl;
            cin >> a[i][j];
        }
    }

    cout << " |Input marix B | " << "\n\n" << endl;
    for(int i =0; i < x; ++i)
    {
        for(int j = 0; j < x; ++j)
        {
            cout << "Enter B" << i+1 << j+1 << ": \t" << endl;
            cin >> b[i][j];
        }
    }
    system("cls");
    cout << " |Entered marix A and B | " << "\n\n" << endl;
    for(int i =0; i < x; ++i)
    {
        for(int j = 0; j < x; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << "\t";
        for(int j = 0; j < x; ++j)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nWhich operation you want to perform ? " << endl;
    cout << "1. Multiplication." << " " << "2. Addition." << " " <<"3. Subtraction."<< endl;
    int oprtwomatrix;
    cin >> oprtwomatrix;
    system("cls");
    switch(oprtwomatrix)
    {
    case 1:
        for(int i = 0; i < x; ++i)
    {
        for(int j =0; j < x; ++j)
        {
            int sum = 0;
            for(int k = 0; k < x; ++k)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }
    break;
    case 2:
    for(int i = 0; i < x; ++i)
    {
        for(int j =0; j < x; ++j)
            {
            result[i][j] = a[i][j] + b[i][j];
            }
        }
        break;
    case 3:
    for(int i = 0; i < x; ++i)
    {
        for(int j =0; j < x; ++j)
            {
            result[i][j] = a[i][j] - b[i][j];
            }
        }
        break;
    }
    cout << "|Resultant Matrix|" << "\n\n";
    for(int i = 0; i < x; ++i)
    {
        for(int j = 0; j < x; ++j)
        {
            cout << " " << result[i][j];
        }
        cout << endl;
    }
  char decision10;
  do
  {
    cout << "Do you want to continue matrix operation (Y/N)?" << endl;
    cin >> decision10;
        system("cls");
        if (decision10 == 'Y' || decision10 == 'y')
        goto start10;
    }
  while(decision10 != 'N' && decision10 != 'n'&& decision10 != 'y'&& decision10 != 'Y');
    system("cls");
    cout << "choose another matrix operation!!!" << endl;
}

//<----------------------------------6.PROGRAM FOR TRIGONOMETRY.----------------------------------------->
void trignometry()
{
    start12:
    system("cls");
    int trignoselect;
    cout << "Which operation you want to perform ? " << endl;
    cout << "\n 1. Trigonometry Table " << "\n 2. Trigonometry Values By Triangle " << "\n" << endl;
    cin >> trignoselect;
    system("cls");
    switch(trignoselect)
    {
    case 1: //program for Trigonometry table.
        {
            cout << "============================================TRIGNOMETRY TABLE=========================================================="<< "\n" << endl;
            cout << "|" << " Angle(In Degree) " << "| " << 0 << "   |      " << 30 << "        |    " << 45 << "         |        " << 60 << "      |    " << 90 << "     |    " <<  180 << "    |    "<< 270 << "   |     "<< 360 << " |" <<endl;
            cout << "|"<< "      sin         " << "| " << 0 << "   |      " << "1/2" << "       |   " << "1/sqrt(2)" << "   |    " << "sqrt(3)/2"  << "   |     " << 1 << "     |     " <<  0 << "     |    "<< -1 << "    |    "<< 0 << "    |" <<endl;
            cout << "|"<< "      cos         " << "| " << 1 << "   |     " << "sqrt(3)/2" << "  | " << "1/sqrt(2)" << "     |     " << "1/2" << "        |    " << 0 << "      |   " <<  -1 << "      |    "<< 0 << "     |    "<< 1 <<"    |" << endl;
            cout << "|"<< "      tan         " << "| " << 0 << "   |     " << "1/sqrt(3" << "   |    " << 1 << "          |    " << " sqrt(3)" << "    |   " << "ND" << "      |    " <<  0 << "      |   "<< "ND" << "     |    "<< 1 << "    |" <<endl;
            cout << "|"<< "      cot         " << "| " << "ND" << "  |     " << "sqrt(3)" << "    |   " << 1 << "           |   " <<"1/sqrt(3)" << "    |    " << 0 << "      |    " <<  "ND" << "     |   "<< 0 << "      |   "<< "ND" << "    |" << endl;
            cout << "|"<< "      sec         " << "| " << 1 << "   |     " << "2/sqrt(3)" << "  |   " << "sqrt(2)" << "     |      " << 2 << "         |   " << "ND" << "      |   " <<  -1 << "      |   "<< "ND" << "     |    "<< 1 << "    |" << endl;
            cout << "|"<< "      sin         " << "| " << "ND" << "  |       " << 2 << "        |   " << "sqrt(2)" << "     |  " << "2/sqrt(3)" << "     |    " << 1 << "      |  " <<  "ND" << "       |  "<< -1 << "      |   "<< "ND" << "    |" << endl;
        break;
        }
    case 2: //program to find trigonometric ratios.
        {
            int degree,ctr,oprt,hyp,adjt,scc,csc,tcc;
          cout << "Choose trigonometric ratio: " << endl;
          cout << "1.sine & cosecant " << " " << "2.cosine & secant" << " " << "3.tangent & cotangent" << endl;
          cin >> ctr;
          switch(ctr)
          {
          case 1:
            {
                cout << "Enter Opposite side of triangle: " << endl;
                cin >> oprt;
                cout << "Enter Hypotenuse of triangle" << endl;
                cin >> hyp;
                cout << "1.sine or 2. cosec (choose number)" << endl;
                cin >> scc;
                if (scc == 1)
                    cout << "sin(theta): " << oprt/hyp << endl;
                else if(scc = 2)
                    cout << "cosec(theta): " << hyp/oprt << endl;
                break;
            }
          case 2:
            {
                cout << "Enter Adjacent side of triangle: " << endl;
                cin >> adjt;
                cout << "Enter Hypotenuse of triangle" << endl;
                cin >> hyp;
                cout << "1.cos or 2. sec(choose number)" << endl;
                cin >> csc;
                if (csc == 1)
                    cout << "cos(theta): " << adjt/hyp << endl;
                else if(csc = 2)
                    cout << "sec(theta): " << hyp/adjt << endl;
            break;
            }
          case 3:
            {
                cout << "Enter Opposite side of triangle: " << endl;
                cin >> oprt;
                cout << "Enter Adjacent side of triangle: " << endl;
                cin >> adjt;
                cout << "1.tan or 2. cot(choose number)" << endl;
                cin >> tcc;
                if (tcc == 1)
                    cout << "tan(theta): " << oprt/adjt << endl;
                else if(tcc = 2)
                    cout << "cot(theta): " << adjt/oprt << endl;
                break;
            }
          }break;
        }
        }
        char decision12;
        do
        {
        cout << "Do you want to perform another trigonometry operation (Y/N) ?" << endl;
        cin >> decision12;
        system("cls");
        if(decision12 == 'Y' || decision12 == 'y')
            goto start12;
        }
        while(decision12 != 'N' && decision12 != 'n'&& decision12 != 'y'&& decision12 != 'Y');
        system("cls");
        cout << "Choose another operation!!!!" << endl;
    }

//<<--------------------.......PROGRAM OF MAIN DECISION OF OPERATIONS........-------------->
void opr_decision()
{
{
    cout << "Choose Your operation: " << endl;
    cout << "1. Basic Operation. "<< endl;
    cout << "2. Area Operation. "<< endl;
    cout << "3. unit conversion. "<< endl;
    cout << "4. Mathematical tables and operations." << endl;
    cout << "5. Matrices." << endl;
    cout << "6. Trigonometry" << endl;
    int od;
    cin >> od;
    system("cls");
    switch(od)
    {
    case 1:
        cout << "<-------------------------------BASIC OPERATION------------------------------------>" << endl;
        basic_opr();
        break;
    case 2:
        cout << "<-------------------------------AREA OPERATION------------------------------------>" << endl;
        area_finding();
        break;
    case 3:
        cout << "<-------------------------------UNIT CONVERSION------------------------------------>" << endl;
        unit_converter();
        break;
    case 4:
        cout << "<-------------------------------MATHEMATICAL OPERATION------------------------------->" << endl;
        Mathematical_tables_and_operations();
        break;
    case 5:
        cout << "<-------------------------------------MATRICES -------------------------------------->" << endl;
        matrix();
        break;
    case 6:
        cout << "<------------------------------------TRIGONOMETRY------------------------------------>" << endl;
         trignometry();
         break;
    default:
        cout << "Please choose correct option!!!" << endl;
        break;
    }
}
}










