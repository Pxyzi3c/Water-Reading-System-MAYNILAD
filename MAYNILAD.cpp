#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//PROGRAMMER: Harvy Jones Pontillas DICT 1-2
int main()
{   //variables declaration
    string acnt_name="";
    char ans, acnt_type;
    int acnt_num, totalNum_ofTransactiosP, counter;
    int prsnt_Mreading, prvs_Mreading, consumption;
    float envrnmtl_charges, vat, totalAmnt_due;
    float basic_Charge=0.00;
    float R_Charge=17.75;
    float C_Charge=24.75;

    //Loop for processing transactions
    do{
    //Counter to count how many transactions are processed
    counter++;

    cout <<"\n\t\t\tMAYNILAD WATRER SERVICES INC."<<endl;
    cout <<"\n\tACCOUNT NUMBER\t\t\t\t   : ";
    cin >>acnt_num;

    //Clear one or more characters from the input buffer
    cin.ignore(100,'\n');
    cout <<"\tACCOUNT NAME\t\t\t\t   : ";
    //Get the input typed by the user from the line
    getline(cin, acnt_name);

    //Input items
    cout <<"\tACCOUNT TYPE (R-RESIDENTIAL, C-COMMERCIAL) : ";
    cin >>acnt_type;
    cout <<"\tPRESENT METER READING\t\t\t   : ";
    cin >>prsnt_Mreading;
    cout <<"\tPREVIOUS METER READING\t\t\t   : ";
    cin >>prvs_Mreading;

    //consumption computation and display output
    consumption = prsnt_Mreading - prvs_Mreading;
    cout <<"\tCONSUMPTION (cu. m.)\t\t\t   : ";
    cout <<consumption<<endl;

    //basic charge display
    cout <<"\tBASIC CHARGE\t\t\t\t   : ";
    cout <<fixed <<setprecision(2);
    if(acnt_type=='R')
    {
        //Basic Charge computation and display output
        basic_Charge = consumption * R_Charge;
        cout <<basic_Charge<<endl;

        //Environmental Charges computation and display output
        envrnmtl_charges = basic_Charge * .20;
        cout <<"\n\tENVIRONMENTAL CHARGES (20% of Basic Charge): ";
        cout <<envrnmtl_charges;

        //VAT computation and display
        vat = basic_Charge * .12;
        cout <<"\n\tVAT (12% of Basic Charge)\t\t   : ";
        cout <<vat;

        //Total Amount due computation and display output
        totalAmnt_due = basic_Charge + vat + envrnmtl_charges;
        cout <<"\n\tTOTAL AMOUNT DUE\t\t\t   : ";
        cout <<totalAmnt_due<<endl;
    }
    if(acnt_type=='C')
    {
        //Basic Charge computation and display output
        basic_Charge = consumption * C_Charge;
        cout <<basic_Charge<<endl;

        //Environmental Charges computation and display output
        envrnmtl_charges = basic_Charge*.20;
        cout <<"\n\tENVIRONMENTAL CHARGES (20% of Basic Charge): ";
        cout <<envrnmtl_charges;

        //VAT computation and display
        vat = basic_Charge*.12;
        cout <<"\n\tVAT (12% of Basic Charge)\t\t   : ";
        cout <<vat;

        //Total Amount due computation and display output
        totalAmnt_due = basic_Charge + vat + envrnmtl_charges;
        cout <<"\n\tTOTAL AMOUNT DUE\t\t\t   : ";
        cout <<totalAmnt_due<<endl;
    }

    //Program to question if the user wants to process another
    cout <<"\n\tPROCESS ANOTHER? Y/N\t\t\t   : ";
    cin >>ans;
    cout <<"\n\t***************************************************************\n";
    }while(ans=='Y'||ans=='y');

    //Output total numbers of transaction processed
    cout <<"\n\tTOTAL NO. OF TRANSACTION PROCESSED\t   : ";
    cout <<counter;
    return 0;
}

/*MAYNILAD WATER SERVICES INC.
ACCOUNT NUMBER :
ACCOUNT NAME :
ACCOUNT TYPE (R-RESIDENTIAL, C-COMMERCIAL) :
PRESENT METER READING :
PREVIOUS METER READING :
CONSUMPTION (cu. m.) :
BASIC CHARGE :
ENVIRONMENTAL CHARGES (20% of Basic Charge) :
VAT (12% of Basic Charge) :
TOTAL AMOUNT DUE :
PROCESS ANOTHER? Y/N :
TOTAL NO. OF TRANSACTION PROCESSED :

Other requirements
**CHARGES
Residential 17.75
Commercial 24.75
Consumption = Present Meter Reading – Previous Meter Reading
Basic Charge = Consumption * Charges*/
