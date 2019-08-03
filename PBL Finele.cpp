// PBL Finele.cpp : Idk .
//

#include "stdafx.h"
#include "stdlib.h"
	

int _tmain(int argc, _TCHAR* argv[]){

char YN;
int opt_m,opt_A,opt_B,opt_C,opt_D,opt_E;

    int A1;
    float v1,i1,p1;	
    float v2,r2,p2;
    float i3,r3,p3;
    float w4,t4,e4;
    float e,v,q;
	float num,cv;

    int B1;
    float VS,I,S,VD; 

	int C3;
    float IT,VT,Is,Ir;

    float ST,PT,RT;//Series Total,Parallel Total,Resistance Total
	float S1,S2,S3,S4,S5;//Series 1-5
    float P1,P2,P3,P4,P5;//Parallel 1-5
	int DP,DS;//Choice for quantity resistor
	float R1,R2,R3,R4,RL,VTH,RTH,VL,IL,X_RTH;//R1-R4,Res Load,Volt-Thv,Res-Thv,Crnt-Thv,Extand Res-Thv
	float IX1,IX2,IT1,IT2,IS,ISX;//Amp-X1,Amp-X2,Amp-total-1,Amp-total-2,Amp-total-power,Amp-total-power-if
    float RT1,RT2,RX,RX1,RX2;
	float VP,V1,V2;
	char CP;//Current Path chooser

	int E2;
	float micro,mili,nopre,kilo,mega;
 main:
do{  
	system ("cls");
	  printf("\t ========================= \n");
      printf("\t Welcome to DC CIRCUIT 101 \n");
	  printf("\t ========================= \n\n");
	  printf("\t Version 4.5.4 Beta (Extand Version) \n");
	  printf("\t Note: Cosmetic changes in progess \n\n");
	  printf("\t1.POWER CHARGE ENERGY CONVERTER\n");
	  printf("\t2.SERIES CIRCUIT\n");
	  printf("\t3.PARALLEL CIRCUIT\n");
	  printf("\t4.COMBINATION CIRCUIT\n");
	  printf("\t5.FAQ @ TUTORIAL \n");
	  printf("\t6.END PROGRAM\n\n");
      printf("\tChoice: ");      
	  scanf("%d",&opt_m); 

switch(opt_m) { 
 
       case 1:
		   {
main_A:
			   system ("cls");
		printf("\t ============================= \n");
        printf("\t POWER ENERGY CHARGE CONVERTER\n");
		printf("\t ============================= \n\n");
	    printf("\t1.POWER DISSIPATION\n");
	    printf("\t2.ENERGY\n");
	    printf("\t3.CHARGE\n");
	    printf("\t4.CONVERTER\n");
		printf("\t5.<<<Return Main Menu \n\n");
		printf("\tChoice: ");  
		 scanf("%d",&opt_A);
		 switch(opt_A){

		 case 1:
        while(1)
	    {
			system("cls");
		printf("\t===================\n");
	    printf("\tPower Dissipation\n");
		printf("\t===================\n\n");
		printf("\t1. If V and I Given\n");
		printf("\t2. If V and R Given\n");
		printf("\t3. If I and R Given\n");
		printf("\t4. <<< Return to submenu\n\n");
		printf("\tChoice : ");
		scanf("%d",&A1);

		switch(A1)

		{

		case 1:

			system ("cls");
			printf("\tIf V and I Given\n\n");
			printf("\tEnter V : ");
			scanf("%f",&v1);
			printf("\tEnter I : ");
			scanf("%f",&i1);
			p1 = i1 * v1;
			printf("\n\tPower = %.2f",p1);

			break;

		case 2:

			system ("cls");
		    printf("\tIf V and R Given\n\n");
			printf("\tEnter V : ");
			scanf("%f",&v2);
			printf("\tEnter R : ");
			scanf("%f",&r2);
			p2=(v2 * v2) / r2;
			printf("\n\tPower = %.2f",p2);

			break;

		case 3:

			system ("cls");
		    printf("\tIf I and R Given\n\n");
		 	printf("\tEnter I : ");
			scanf("%f",&i3);
			printf("\tEnter R : ");
			scanf("%f",&r3);
			p3 = (i3 * i3) * r3;
			printf("\n\tPower = %.2f",p3);

			break;
		
		case 4:

			system ("cls");
			goto main_A;
			
		break;

		}

	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_A;
         } 
        break;

	     case 2:
			while(1)
	    {
			system("cls");
		 printf("\tEnter Power : ");
		scanf("%f",&w4);
		printf("\tEnter Time : ");
		scanf("%f",&t4);
		e4 = w4 * t4;
		printf("\n\tEnergy = %.2f",e4);
	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_A;
         } 
        break;
 
	     case 3:
         while(1)
	    {
			system("cls");
		printf("\tEnter Energy : ");
		scanf("%f",&e);
		printf("\tEnter Voltage :");
		scanf("%f",&v);
		q = e / v;
		printf("\n\tCharge = %.2f",q);
	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_A;
         } 
        break;

		case 4:
         while(1)
	    {
			system("cls");
		printf("\tEnter Number in Mili\n");
		scanf("%f",&num);
		cv = num * 1000;
		printf(" %.2f\n",cv);
	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_A;
         } 
        break;

		 case 5: 
		goto main;  
		break;

		 default:
			system ("cls");
        fflush(stdin);
        printf("\t =================== \n"); 
		printf("\t <INVALID SELECTION> \n");
		printf("\t =================== \n");
		system ("pause");
			 goto main_A;
			 break;
	      }
       } break; 
 
case 2:
		   {
main_B:
			   system ("cls");
		printf("\t ============== \n");
        printf("\t SERIES CIRCUIT\n");
		printf("\t ============== \n\n");
	    printf("\t1.TOTAL RESISTANCE\n");
	    printf("\t2.VOLTAGE DIVIDER\n");
	    printf("\t3.TOTAL CURRENT\n");
	    printf("\t4.<<<Return Main Menu  \n\n");
		printf("\tChoice: ");  
		 scanf("%d",&opt_B);
		 switch(opt_B){

		 case 1:
         while(1)
	    {
			system("cls");
SIR:
	   printf("\t=========================\n");
	   printf("\tTOTAL RESISTANCE (SERIES)\n");
	   printf("\t=========================\n\m");
       printf("Enter number of series resistor (2-5) : ");
	   scanf("%d",&B1);

   switch(B1){

   case 2:
	
		printf("Enter R1 (ohm):");scanf("%f",&S1);
	    printf("Enter R2 (ohm):");scanf("%f",&S2);
	    ST=S1+S2;
		printf("Total resistance is : %.3f ohm\n",ST);
		break;
	

   case 3:
	
		printf("Enter R1 (ohm):");scanf("%f",&S1);
	    printf("Enter R2 (ohm):");scanf("%f",&S2);
		printf("Enter R3 (ohm):");scanf("%f",&S3);
	    ST=S1+S2+S3;
		printf("Total resistance is : %.3f ohm\n",ST);
		break;
	

   case 4:
	
		printf("Enter R1 (ohm):");scanf("%f",&S1);
	    printf("Enter R2 (ohm):");scanf("%f",&S2);
		printf("Enter R3 (ohm):");scanf("%f",&S3);
		printf("Enter R4 (ohm):");scanf("%f",&S4);
	    ST=S1+S2+S3+S4;
		printf("Total resistance is : %.3f ohm\n",ST);
		break;
	

   case 5:
	
		printf("Enter R1 (ohm):");scanf("%f",&S1);
	    printf("Enter R2 (ohm):");scanf("%f",&S2);
		printf("Enter R3 (ohm):");scanf("%f",&S3);
		printf("Enter R4 (ohm):");scanf("%f",&S4);
		printf("Enter R5 (ohm):");scanf("%f",&S5);
	    ST=S1+S2+S3+S4+S5;
		printf("Total resistance is : %.3f ohm\n",ST);
		break;

   default: printf("\nINVALID SELECTION\n");
	   goto SIR;
   }
	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_B;
      } 

        break;

	     case 2:
         while(1)
	    {
			system("cls");
			 printf("\t================\n");
			 printf("\t VOLTAGE DIVIDER\n");
			 printf("\t================\n\n");
		  printf("Voltage divider is\n voltage drop each resistor\n");     //display//
	
	    printf("\nEnter Voltage Supply (volt):");                               //display//
	    scanf("%f",&VS);                                                 //input//

	    printf("\nEnter Resistor Value (ohm):");                            //display//
	    scanf("%f",&S);                                               //input//

	    printf("\nEnter Total Resistance Value (ohm):");                 //display//
	    scanf("%f",&ST);

	    VD=((S/ST)*VS);                                           //math process//

	    printf("Voltage Divider is : %.3f volt \n",VD);//display answer//

	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_B;
         } 
        break;

	     case 3:
         while(1)
	    {
			system("cls");
		  printf("\t==============\n");
		  printf("\t TOTAL CURRENT\n");
		  printf("\t==============\n\n");
		  printf("\nEnter voltage supply (volts) :");
	      scanf("%f",&VS);

	      printf("\nEnter total resistance(ohm) :");
	      scanf("%f",&ST);

	      I=(VS/ST);

	printf("\nTotal current is : %.3f Ampere\n",I);
	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_B;
         } 
        break;

		 case 4: 
		goto main;  
		break;

		 default:
			 system ("cls");
        fflush(stdin);
        printf("\t =================== \n"); 
		printf("\t <INVALID SELECTION> \n");
		printf("\t =================== \n");
		system ("pause");
			 goto main_B;
			 break;
	      }
       } break; 
 
case 3:
		   {
main_C:
			   system ("cls");
		printf("\t ================ \n");
        printf("\t PARALLEL CIRCUIT \n");
		printf("\t ================ \n\n");
	    printf("\t1.CURRENT DROP\n");
	    printf("\t2.TOTAL RESISTANCE\n");
	    printf("\t3.TOTAL VOLTAGE\n");
	    printf("\t4.<<<Return Main Menu  \n\n");
		printf("\tChoice: ");  
		 scanf("%d",&opt_C);
		 switch(opt_C){

		 case 1:
	 
			 while(1)
	    {
			system("cls");
	printf("\t============\n");
    printf("\tCURRENT DROP\n");
	printf("\t============\n");
    printf("\nEnter Resistor 1 value\n");
    printf("Resistor 1 (ohm):"); scanf("%f",&P1);

    printf("\nEnter Resistor 2 value\n");
    printf("Resistor 2 (ohm):"); scanf("%f",&P2);

    printf("\nEnter Supply current value\n");
    printf("Supply current (ampere):"); scanf("%f",&Is);

    Ir = (P2/(P2+P1))*Is;
    printf("\n%.2f ampere\n",Ir);
	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_C;
         } 
        break;

	     case 2:

			 
			while(1)
	    {
			system("cls");
		printf("\t===========================\n");
		printf("\tTOTAL RESISTANCE (PARALLEL)\n");
		printf("\t===========================\n");
		printf("\n Enter number of parallel resistor (2-5) : ");
		scanf("%d",&C3);

		switch(C3){

		case 2:
			printf("\nResistor 1 (ohm):");
			scanf("%f",&P1);
			printf("\nResistor 2 (ohm):");
			scanf("%f",&P2);

			PT=1/(1/P1+1/P2);
			printf("\nTotal resistance is %f ohm\n",PT);
			break;

		case 3:
			printf("\nResistor 1 (ohm):");
			scanf("%f",&P1);
			printf("\nResistor 2 (ohm):");
			scanf("%f",&P2);
			printf("\nResistor 3 (ohm):");
			scanf("%f",&P3);

			PT=1/(1/P1+1/P2+1/P3);
			printf("\nTotal resistance is %f ohm\n",PT);
			break;

		case 4:
			printf("\nResistor 1 (ohm):");
			scanf("%f",&P1);
			printf("\nResistor 2 (ohm):");
			scanf("%f",&P2);
			printf("\nResistor 3 (ohm):");
			scanf("%f",&P3);
			printf("\nResistor 4 (ohm):");
			scanf("%f",&P4);

			PT=1/(1/P1+1/P2+1/P3+1/P4);
			printf("\nTotal resistance is %f ohm\n",PT);
			break;

		case 5:
			printf("\nResistor 1 (ohm):");
			scanf("%f",&P1);
			printf("\nResistor 2 (ohm):");
			scanf("%f",&P2);
			printf("\nResistor 3 (ohm):");
			scanf("%f",&P3);
			printf("\nResistor 4 (ohm):");
			scanf("%f",&P4);
			printf("\nResistor 5 (ohm):");
			scanf("%f",&P5);

			PT=1/(1/P1+1/P2+1/P3+1/P4+1/P5);
			printf("\nTotal resistance is %f ohm\n",PT);
			break;
	
		default: 	
			printf("\n Invalid Selection");
		}

	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_C;
         } 
        break;

	     case 3:

		
			 while(1)
	    {
			system("cls");
	printf("\t=============\n");
    printf("\tTOTAL VOLTAGE\n");
	printf("\t=============\n\n");
	printf("\nEnter total current");
	printf("\nTotal current (ampere):"); scanf("%f",&IT);

	printf("\nEnter total resistance");
	printf("\nTotal resistance (ohm):"); scanf("%f",&PT);

	VT=IT*PT;
	printf("\nTotal voltage is = %.3f volt\n",VT);

	      printf("\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_C;
         } 
        break;

		 case 4: 
		goto main;  
		break;

		 default:
			 system ("cls");
        fflush(stdin);
        printf("\t =================== \n"); 
		printf("\t <INVALID SELECTION> \n");
		printf("\t =================== \n");
		system ("pause");
			 goto main_C;
			 break;
	      }
       } break;

 case 4:
		   {
main_D:
			   system ("cls");
		printf("\t =================== \n");
        printf("\t COMBINATION CIRCUIT\n");
		printf("\t =================== \n\n");
	    printf("\t1.Total Resistance Series Parallel\n");
	    printf("\t2.Thivenin Circuit Theorem\n");
	    printf("\t3.Superposition Theorem\n");
	    printf("\t4.<<<Return Main Menu  \n\n");
		printf("\tChoice: ");  
		 scanf("%d",&opt_D);
		 switch(opt_D){

		 case 1:
			 
		while(1)
	    {
			system("cls");
	printf("\t =============================\n");
	printf("\t Calculate Resistor DC circuit \n");
	printf("\t =============================\n\n");


par:
	printf("How many Parallel resistor (0~5): ");
	scanf("%d",&DP);//Enter qty of resistor-Parallel

	switch(DP){

	case 0:
	PT=0;//Parallel = 0 ,skip to calculate Series 
	goto sir;//Go to series
	break;

	case 2:
    printf("\n\tResistor P1 :");//Input value of P1,P2
	scanf("%f",&P1);
	printf("\t Resistor P2 :");
	scanf("%f",&P2);

	PT=1/(1/P1+1/P2);//Calulate Total Parallel Resistance
	
	goto sir;//Go to Calculate Series Resistance
	break;

	case 3:
	printf("\n\t Resistor P1 : ");//Input value of P1,P2,P3
	scanf("%f",&P1);
	printf("\t Resistor P2 : ");
	scanf("%f",&P2);
	printf("\t Resistor P3 : ");
	scanf("%f",&P3);

	PT=1/(1/P1+1/P2+1/P3);//Calulate Total Parallel Resistance

	goto sir;//Go to Calculate Series Resistance
	break;

	case 4:
	printf("\n\t Resistor P1 : ");//Input value of P1,P2,P3,P4
	scanf("%f",&P1);
	printf("\t Resistor P2 : ");
	scanf("%f",&P2);
	printf("\t Resistor P3 : ");
	scanf("%f",&P3);
	printf("\t Resistor P4 : ");
	scanf("%f",&P4);

	PT=1/(1/P1+1/P2+1/P3+1/P4);//Calulate Total Parallel Resistance

	goto sir;//Go to Calculate Series Resistance
	break;

	case 5:
	printf("\n\t Resistor P1 : ");//Input value of P1,P2,P3,P4,P5
	scanf("%f",&P1);
	printf("\t Resistor P2 : ");
	scanf("%f",&P2);
	printf("\t Resistor P3 : ");
	scanf("%f",&P3);
	printf("\t Resistor P4 : ");
	scanf("%f",&P4);
	printf("\t Resistor P5 : ");
	scanf("%f",&P5);

	PT=1/(1/P1+1/P2+1/P3+1/P4+1/P5);//Calulate Total Parallel Resistance
	
	goto sir;//Go to Calculate Series Resistance
	break;

	default:goto par; //if not in 0,2-5 ask again how many parallel resistor
	}

	sir:
	printf("How many Series resistor (0~5): ");scanf("%d",&DS);//Enter qty of resistor-Series
	
    switch(DS){
	case 0://If 0 skip to total
		ST=0;
	goto res;//Go to Calculate Total Both Resistance
	break;

	case 1:
		printf("\n\t Resistor S1 :");//Input value S1
		scanf("%f",&S1);
		ST=S1;
	goto res;//Go to Calculate Total Both Resistance
	break;

	case 2:
		printf("\n\t Resistor S1 :");//Input value S1,S2
		scanf("%f",&S1);
		printf("\t Resistor S2 :");
		scanf("%f",&S2);
		ST=S1+S2;
	goto res;//Go to Calculate Total Both Resistance
	break;

	case 3:
		printf("\n\t Resistor S1 :");//Input value S1,S2,S3
		scanf("%f",&S1);
		printf("\t Resistor S2 :");
		scanf("%f",&S2);
		printf("\t Resistor S3 :");
		scanf("%f",&S3);

		ST=S1+S2+S3;
	goto res;//Go to Calculate Total Both Resistance
	break;

	case 4:
		printf("\n\t Resistor S1 :");//Input value S1,S2,S3,S4
		scanf("%f",&S1);
		printf("\t Resistor S2 :");
		scanf("%f",&S2);
		printf("\t Resistor S3 :");
		scanf("%f",&S3);
		printf("\t Resistor S4 :");
		scanf("%f",&S4);

		ST=S1+S2+S3+S4;
	goto res;//Go to Calculate Total Both Resistance
	break;

    case 5:
		printf("\n\t Resistor S1 :");//Input value S1,S2,S3,S4,S5
		scanf("%f",&S1);
		printf("\t Resistor S2 :");
		scanf("%f",&S2);
		printf("\t Resistor S3 :");
		scanf("%f",&S3);
		printf("\t Resistor S4 :");
		scanf("%f",&S4);
		printf("\t Resistor S5 :");
		scanf("%f",&S5);

		ST=S1+S2+S3+S4+S5;
	goto res;//Go to Calculate Total Both Resistance
	break;
	default:goto sir;

	}
res:
	RT=PT+ST;//Calculate Series+Pararalle and display the value

	printf("\tTotal Parallel : %.3f ohm\n",PT);
	printf("\n\tTotal Series: %.3f ohm\n ",ST);
	printf("\n\tTotal Series + Parallel : %.3f ohm\n\n",RT);

	      printf("\n\n\t Do you want to repeat? y/n \n");//Ask for repeat
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;//Repeat
	     else
		 goto main_D;//Goto submenu D
         } 
        break;

	     case 2:
			
			 while(1)
	    {
			system("cls");
		  printf(" \t \n");
	printf(" ______[R1]___________[R4]______\n");//Generating diagram
	printf(" |              |               |\n");
	printf(" |              |               |\n");
	printf(" |              |               |\n");
	printf("|V|            |R| VTH         |R|\n");
	printf("|S|            |2|             |L|\n");
	printf(" |              |               |\n");
	printf(" |              |               |\n");
	printf(" |_____[R3]_____|_______________|\n\n");
	printf(" For input R1,R2,R3,R4 please calulate total resistance for ecah line.\n");//Intruction
	printf(" Example if R1 have two paralell resistor calculate the total resistance first before entering the data on RT1\n");
	printf("Voltage Supply:");scanf(" %f",&VS);//get VS
	printf("R1:");scanf(" %f",&R1);//Get Value of each resistor
	printf("R2:");scanf(" %f",&R2);
	printf("R3:");scanf(" %f",&R3);
	printf("R4:");scanf(" %f",&R4);
	printf("RL:");scanf(" %f",&RL);//Ger Value resistor Load

	printf(" \nStep 1: Open resistor load \n");
	printf(" ______[R1]________/    _[R4]____\n");//Generating diagram
	printf(" |              |              |\n");
	printf(" |              |              |\n");
	printf(" |              |              |\n");
	printf("|V|            |R|            |R|\n");
	printf("|S|            |2|            |L|\n");
	printf(" |              |              |\n");
	printf(" |              |              |\n");
	printf(" |_____[R3]_____|__/    _______|\n\n");

	printf("Step 2: Determine V-th \n");//Find V-th
	VTH=((R2)/(R1+R2+R3))*VS;//VTH=(RTH/RT)*VS
	printf("\t V-th : %f \n",VTH);

	printf("Step 3: Determine The R-th by shorting the VS \n");
	printf("                   ____[R1+R3]____\n");
	printf("                  |              |\n");
	printf("                  |              |\n");
	printf("[A]_____[R4]______|              |_____[B]\n");
	printf("                  |              |\n");
	printf("                  |              |\n");
	printf("                  |____[ R2 ]____|\n\n");

	X_RTH=(1/R1+R3)+(1/R2);//Dual step calculation is need bacause limited memory
	RTH=(1/(X_RTH))+R4;
	printf("\t R-th : %f \n",RTH);

	printf("Step 4:Draw the Thevinin Circuit to find VL & IL \n");
	printf(" ______[RTH]_____\n");
	printf(" |              |\n");
	printf("|V|             |\n");
	printf("|T|            |RL|\n");
	printf("|H|             |\n");
	printf(" |______________|\n");
	VL=((RL)/(RL+RTH))*VTH;//Find Thivenin Value
	IL=VL/RL;
	printf("VL = %f \n",VL);
	printf("IL = %f \n",IL);

	      printf("\n\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_D;
         } 
        break;

	     case 3:
			while(1)
	    {
			system("cls");
    printf("\t======================\n");//Just a Title
	printf("\tSUPERPOSITION THEROREM \n");
	printf("\t======================\n\n");

	printf("\t Part One \n");

	printf("Voltage Supply 1 : ");scanf(" %f",&V1);//Voltage Supply V1
	printf("\nOkey...then short the VS2 \n and find the total resistance\n\n");
	printf("Total Resistance : ");scanf(" %f",&RT1);//Total R without V2
	IT1=V1/RT1;//Find IT without V2
	printf("Total Ampere = %f  \n",IT1);
	printf("\n Next find the Resistance or X current flow value \n\n");//Find Ix without V2
	printf("Value Rx : ");scanf(" %f",&RX);//Value of Rx
	printf("Value opesite Rx : ");scanf(" %f",&RX1);//Value opesite Rx
	IX1=(RX1/(RX+RX1))*IT1;//Formula for Current Rules
	printf("\n So the total value of I-Rx = %f",IX1);// Value of Ix without V2

	printf("\n============================================\n");

	printf("\t Part Two \n");

	printf("\n\n Voltage Supply 2: ");scanf(" %f",&V2);//Voltage Supply V2
	printf("\n\n Okey...then short the VS1 \n and find the total resistance \n\n");
	printf("Total Resistance : ");scanf(" %f",&RT2);//Total R without V1
	IT2=V2/RT2;//Find IT without V1
	printf("Total Ampere = %f  \n",IT2);
	printf("\n Next find the Resistor X current flow value \n\n");//Find Ix without V1
	printf("Value Rx : %f \n",RX);
	printf("Value opesite Rx : ");scanf(" %f",&RX2);//Value opesite Rx
	IX2=(RX2/(RX+RX2))*IT2;//Formula for Current Rules
	printf("\n So the total value of I-Rx = %f",IX2);// Value of Ix without V1

	printf("\n============================================\n");
	
	printf("\n Last step: Check the current path at AX \n\n");//Find I(superposition)
	printf("\t    A            B\n");
	printf("\t_________    _________\n");
	printf("\t|   |   |    |   |   |\n");
	printf("\t+   R   +    +   R   -\n");
	printf("\t-   X   -    -   X   +\n");
	printf("\t|___|___|    |___|___|\n\n");
	printf("If the current path like A (positive meet negative) enter 'A' \n");
	printf("If the current path like B (positive meet positive) enter 'B' \n");
printf("\n\t Option:");//Choose for determine the Ampere must being subract or add
    scanf(" %c",&CP);
	if(CP=='a' || CP=='A')
{	
	printf("ADDING-(positive meet negative) \n\n");//if Add
	printf("_________ \n");//image
	printf("|   |   |\n");
	printf("+   R   +\n");
	printf("-   X   -\n");
	printf("|___|___|\n\n");
    IS=IX1+IX2;
	VP=IS*RX;
	printf("Total Current for Rx = %f \n",IS);
	printf("Total Voltage for Rx = %f \n\n",VP);
}
	else if(CP=='b' || CP=='B')
{
	printf("SUBTRACT-(positive meet positive) \n\n");//if Subtract
	printf("_________ \n");
	printf("|   |   |\n");
	printf("+   R   -\n");
	printf("-   X   +\n");
	printf("|___|___|\n\n");
    IS=IX1-IX2; //Checking if value of subtract became negative
	if(IS<0)//If IS<0 so the subtract of var. must be change to make IS>0
	{
	ISX=IX2-IX1;
	VP=ISX*RX;
	printf("Total Current for Rx = %f \n",ISX);
	printf("Total Voltage for Rx = %f \n\n",VP);
	}
	// If IS>0 just continue the subtraction as usual
	VP=IS*RX;
	printf("Total Current for Rx = %f \n",IS);
	printf("Total Voltage for Rx = %f \n\n",VP);
}
	      printf("\n\n\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_D;
         } 
        break;

		 case 4: 
		goto main;  
		break;

		 default:
			 system ("cls");
        fflush(stdin);
        printf("\t =================== \n"); 
		printf("\t <INVALID SELECTION> \n");
		printf("\t =================== \n");
		system ("pause");
			 goto main_D;
			 break;
	      }
      } break;

	  case 5:
		   {
main_E:
			   system ("cls");
		printf("\t ================ \n");
        printf("\t FAQ @ TUTORIAL \n");
		printf("\t ================ \n\n");
	    printf("\t1.What prefix unit this program?\n\n");
	    printf("\t2.What prefix unit this program & how I convert SI prefix\n\n");
	    printf("\t3.Different between series and parallel \n\t  and how calculate the total resistance?\n\n");
		printf("\t4.What is Thivenin Circuit?\n\n");
	    printf("\t5.What is Superposition Circuit?\n\n");
		printf("\t6.What is Ohm Law ?\n\n");
		printf("\t7.<<<Return Main menu \n\n\n");
		printf("\tChoice: ");  
		 scanf("%d",&opt_E);
		 switch(opt_E){

		  case 1:
        while(1)
	    {
			system("cls");
		  printf("\t===============================\n");
		  printf("\tWhat prefix unit this program ?\n");
		  printf("\t===============================\n\n");
		  printf("For this programe we use unit without SI prefix. Eg :\n");
		  printf("We use Voltage not Kilovolt or Milivolt, \n");
		  printf("Ohm not Kilohm or Miliohm\n");
		  printf("So example if u use Kiloampere or Miliampere \n you need to change to Ampere only \n\n");


		  printf("\t  Table of Converter \n\n");
		  printf("\t _____________________\n");
		  printf("\t| UNIT |SYM| POWER OF |\n");
		  printf("\t|______|___|__________|\n");
		  printf("\t| Nano | n | 10^(-9)  |\n");
		  printf("\t|______|___|__________|\n");
		  printf("\t| Micro| µ | 10^(-6 ) |\n");
		  printf("\t|______|___|__________|\n");
		  printf("\t| Mili | m | 10^(-3 ) |\n");
		  printf("\t|______|___|__________|\n");
		  printf("\t| Kilo | k | 10^(+3 ) |\n");
		  printf("\t|______|___|__________|\n");
		  printf("\t| Mega | M | 10^(+6 ) |\n");
		  printf("\t|______|___|__________|\n");
		  printf("\t| Giga | G | 10^(+9 ) |\n");
		  printf("\t|______|___|__________|\n\n");
		  printf("\tPositive power of ten,move the decimal point to right \n");
		  printf("\tNegative power of ten,move the decimal point to right \n");
	      printf("\n\tDo you want to repeat? y/n \n");
		   printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_E;
         } 
        break;

		 case 2:
        while(1)
	    {
			system("cls");

   printf("\t===========================\n");
   printf("\tHow can I convert SI prefix\n");
   printf("\t===========================\n\n");

   printf("\tYou can use this converter tool below:\n\n");

    printf("\tChoose to convert unit from :-\n");
	printf("1.Micro \n");
	printf("2.Mili \n");
	printf("3.No Prefix \n");
	printf("4.Kilo \n");
	printf("5.Mega \n");
	printf("\n\t Choise: ");
	scanf("%d",&E2);

	system("cls");


	if(E2==1)//Micro
	{
		printf("Input data : ");
		scanf(" %f",&micro);
		mili=micro*0.001;
		nopre=micro*0.001*0.001;
		kilo=micro*0.001*0.001*0.001;
		mega=micro*0.001*0.001*0.001*0.001;

	printf("%.4f mili\n",mili);
	printf("%.5f \n",nopre);
	printf("%.6f kilo\n",kilo);
	printf("%f mega \n",mega);
	
	};
	if(E2==2)//Mili
	{
	
        printf("Input data : ");
		scanf(" %f",&mili);
		micro=mili*1000;
		nopre=mili*0.001;
		kilo=mili*0.001*0.001;
		mega=mili*0.001*0.001*0.001;

	printf("%.4f micro\n",micro);
	printf("%.5f \n",nopre);
	printf("%.6f kilo\n",kilo);
	printf("%f mega \n",mega);
	
	};
	if(E2==3)//No Prefix
	{

        printf("Input data : ");
		scanf(" %f",&nopre);
		micro=nopre*1000*1000;
		mili=nopre*1000;
		kilo=nopre*0.001;
		mega=nopre*0.001*0.001;

	printf("%.4f micro\n",micro);
	printf("%.5f mili\n",mili);
	printf("%.6f kilo\n",kilo);
	printf("%f mega \n",mega);
	
	};
	if(E2==4)//Kilo
	{

	printf("Input data : ");
	scanf(" %f",&kilo);
		micro=kilo*1000*1000*1000;
		mili=kilo*1000*1000;
		nopre=kilo*1000;
		mega=kilo*0.001;

	printf("%.4f micro\n",micro);
	printf("%.5f mili\n",mili);
	printf("%.6f \n",nopre);
	printf("%f mega \n",mega);
	};
	if(E2==5)//Mega
	{
    
        printf("Input data : ");
		scanf(" %f",&mega);
		micro=mega*1000000*1000*1000;
		mili=mega*1000*1000*1000;
		nopre=mega*1000*1000;
		kilo=mega*1000;

	printf("%.4f micro\n",micro);
	printf("%.5f mili\n",mili);
	printf("%.6f \n",nopre);
	printf("%f kilo \n",kilo);
	
	};

	      printf("Do you want to repeat? y/n \n");
		   printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_E;
         } 
        break;

		 case 3:
        while(1)
	    {
			system("cls");
		  printf("\t===========================================\n");
		  printf("\tHow can I calculate the total resistance?\n");
		  printf("\t===========================================\n\n");

		  printf("\t For DC circuit there are two type:\n");

		  printf("\t1. Series Circuit \n");

		  printf("\t For series ciruit you just add all resistance value,Eg:\n");
		  printf("\tR1=1000 ohm ,R2=500 ohm ,R3=250 ohm\n");
		  printf("\tSo, R1+R2+R3=1750 ohm\n\n");

		  printf("\t \n");
		  printf("\t \n");
		  printf("\t \n");

		  printf("\n\t2. Parallel Circuit \n");
	
		  printf("\t For parallel ciruit you divide one by resistance value,\n\t add them all and one divide back by the first total,Eg: \n");
		  printf("\tR1=1000 ohm ,R2=500 ohm ,R3=250 ohm\n");
		  printf("\tSo, 1/R1 + 1/R2 + 1/R3 = 0.007 ohm\n");
		  printf("\t1/0.007 = 142.857 ohm\n\n");

		  printf("\t \n");
		  printf("\t \n");
		  printf("\t \n");

		  printf("=================================== \n");
		  printf("\t You also can use this program to calculate total resistance\n");
		  printf("\t We encaurage you to calculate first to total resistance\n\t for superpostion,power and thivinin circuit\n");
		  printf("\t To use this you can go :-\n");
		  printf("\t <A> (2)Series     ---> (1)Total Resistance \n");
		  printf("\t <B> (3)Parallel   ---> (2)Total Resistance \n");
		  printf("\t <C> (4)Combination---> (1)Total Combination Resistance \n");

	      printf("\n\n\tDo you want to repeat? y/n \n");
		   printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_E;
         } 
        break;

		 case 4:
        while(1)
	    {
			system("cls");
		  printf("\t   ONE\n");
	      printf("Do you want to repeat? y/n \n");
		   printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_E;
         } 
        break;

		 case 5:
        while(1)
	    {
			system("cls");
		  printf("\t   ONE\n");
	      printf("Do you want to repeat? y/n \n");
		   printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')
		 continue;
	     else
		 goto main_E;
         } 
        break;

	     case 6: 
		goto main;  
		break;
		 
		 default:
			 system ("cls");
        fflush(stdin);
        printf("\t =================== \n"); 
		printf("\t <INVALID SELECTION> \n");
		printf("\t =================== \n");
		system ("pause");
			 goto main_E;
			 break;
	      }
      } break;

		case 6:
		system ("cls");
		printf("\t ============================== \n"); 
		printf("\t <Thank you using our program> \n\n");
		printf("\t     Azhad,Afif,Arif,Daniel\n");
		printf("\t     GMI Mechatronic 1/2019\n");
		printf("\t Github:                   \n"); 
		printf("\t ============================== \n");  
	    break; 
 
       default:   
		  system ("cls");
        fflush(stdin);
        printf("\t =================== \n"); 
		printf("\t <INVALID SELECTION> \n");
		printf("\t =================== \n");
		system ("pause");
		   break;
       } 
   }while (opt_m != 6); 
return 0;

} 