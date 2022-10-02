#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int arr[20];
    int i,n,k,m,y,D,C,F,r,p;
    char str[20];
    //gets(str);
    printf("Enter day : ");
    scanf("%d",&k);
    printf("Enter month : ");
    scanf("%d",&m);
    printf("Enter year : ");
    scanf("%d",&y);
    
    if(m==01 || m==02){
        y=y-1;
        m=m+10;
    }
    else{
        m=m-2;
    }
    C=y/100;
    D=y%100;
    
    F=k+(((13*m)-1)/5)+D+(D/4)+(C/4)-(2*C);         //Zeller's Rule for calculation
    if(F<0){
        F=F*-1;
        p=F%7;
        r=7-p;
    }else if (F>0){
        r=F%7;
    }
    else{
        r=0;
    }
  
    switch(r){
        case 0 : printf("Sunday");
            break;
        case 1 : printf("Monday");
            break;
        case 2 : printf("Tuesday");
            break;
        case 3 : printf("Wednesday");
            break;
        case 4 : printf("Thursday");
            break;
        case 5 : printf("Friday");
            break;
        case 6 : printf("Saturday");
            break;
        default  : printf("Error ");
            break; 
    }

}
