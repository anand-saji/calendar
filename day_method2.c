//Key value method for calculating day from date

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int k,m,y,x=0,p1,p2,p3,p4,p5,r,d,c;

    printf("Enter day of month : ");
    scanf("%d",&k);
    printf("Enter month : ");
    scanf("%d",&m);
    printf("Enter year : ");
    scanf("%d",&y);
    
    if(m==1)                              //find month code
        p1=1;
    else if(m==2)
        p1=4;
    else if(m==3)
        p1=4;
    else if(m==4)
        p1=0;
    else if(m==5)
        p1=2;
    else if(m==6)
        p1=5;
    else if(m==7)
        p1=0;
    else if(m==8)
        p1=3;
    else if(m==9)
        p1=6;
    else if(m==10)
        p1=1;
    else if(m==11)
        p1=4;
    else if(m==12)
        p1=6;

    if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0)){           //check whether leap year
        x=1;}
    
    if(y>=2500)                     
        y=y-800;
    if(y>=2100)
        y=y-400;
    if(y<1300)
        y=y+800;
    if(y<1700)
        y=y+400;
    
    
    if(y>=1700 ||y<1800)            //finding year code
        p5=4;
    else if(y>=1800 ||y<1900)
        p5=2;
    else if(y>=1900 ||y<2000)
        p5=0;
    else if(y>=2000 ||y<2100)
        p5=6;


    d=y%100;
    p2=d/4;    
    p3=d;    
    p4=k;   
    r=p1+p2+p3+p4+p5-x;             //key value calculation
    r=r%7;
    
    
    switch(r){                                               //Day calculation
        case 1 : printf("Sunday");
            break;
        case 2 : printf("Monday");
            break;
        case 3 : printf("Tuesday");
            break;
        case 4 : printf("Wednesday");
            break;
        case 5 : printf("Thursday");
            break;
        case 6 : printf("Friday");
            break;
        case 0 : printf("Saturday");
            break;
        default  : printf("Error ");
            break; 
    }

}
