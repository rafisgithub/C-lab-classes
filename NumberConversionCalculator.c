
#include<stdio.h>
int main(){

    menu();

    return 0;
}

void menu(){

    int i;

    printf("Enter:\n");
    printf("1 for Decimal to Binary\n");
    printf("2 for Decimal to Octal\n");
    printf("3 for Decimal to Hexadecimal\n");
    printf("4 for Binary to Decimal\n");
    printf("5 for Binary to Octal\n");
    printf("6 for Binary to Hexadecimal\n");
    printf("7 for Octal to Decimal\n");
    printf("8 for Octal to Binary\n");
    printf("9 for Octal to Hexadecimal\n");
    printf("10 for Hexadecimal to Decimal\n");
    printf("11 for Hexadecimal to Binary\n");
    printf("12 for Hexadecimal to Octal\n");
    scanf("%d", &i);

    if(i==1){
        Decimal_Binary();
    }else if(i==2){
        Decimal_Octal();
    }else if(i==3){
        Decimal_Hexadecimal();
    }else if(i==4){
        Binary_Decimal();
    }else if(i==5){
        Binary_Octal();
    }else if(i==6){
        Binary_Hexadecimal();
    }else if(i==7){
        Octal_Decimal();
    }else if(i==8){
        Octal_Binary();
    }else if(i==9){
        Octal_Hexadecimal();
    }else if(i==10){
        Hexadecimal_Decimal();
    }else if(i==11){
        Hexadecimal_Binary();
    }else if(i==12){
        Hexadecimal_Octal();
    }

    int n;

    printf("\n1. Return to Menu: \n");
    printf("2. Exit. \n");
    scanf("%d", &n);

    if(n==1){
        menu();
    }else{
        return 0;
    }
}

void Decimal_Binary(){
    int decimal, reminder, binary = 0, i = 1;

    printf("Enter a Decimal number: ");
    scanf("%d", &decimal);
    while(decimal != 0){
        reminder = decimal % 2;
        decimal = decimal /2;
        binary = binary + (reminder * i);
        i = i * 10;
    }

    printf("Binary= %d\n\n",binary);

}

void Decimal_Octal(){ 

    int  decimal;

    printf("Enter a Decimal number: ");
    scanf("%d", &decimal);

    printf("Octal= %O\n\n",decimal);
}
void Decimal_Hexadecimal(){ 

    int decimal;

    printf("Enter a Decimal number: ");
    scanf("%d", &decimal);

    printf("Hexadecimal= %X\n\n",decimal);
}

void Binary_Decimal(){ 
    int binary, reminder, decimal = 0, i = 1;

    printf("Enter a Binary number: ");
    scanf("%d", &binary);
    while(binary != 0){
        reminder = binary % 10;
        binary = binary / 10;
        decimal = decimal + (reminder * i);
        i = i * 2;
    }

    printf("Decimal= %d\n\n",decimal);
}

void Binary_Octal(){ 

    int  binary, reminder, decimal = 0, i = 1;

    printf("Enter a Binary number: ");
    scanf("%d", &binary);
    while(binary != 0){
        reminder = binary % 10;
        binary = binary / 10;
        decimal = decimal + (reminder * i);
        i = i * 2;
    }

    printf("Octal= %O\n\n", decimal);
}
void Binary_Hexadecimal(){ 

    int binary, reminder, decimal = 0, i = 1;

    printf("Enter a Binary number: ");
    scanf("%d", &binary);
    while(binary != 0){
        reminder = binary % 10;
        binary = binary / 10;
        decimal = decimal + (reminder * i);
        i = i * 2;
    }

    printf("Hexadecimal= %X\n\n", decimal);

}
void Octal_Decimal(){ //7

    int octal;

    printf("Enter a Octal number: ");
    scanf("%o", &octal);

    printf("Decimal= %d\n\n",octal);
 
}

void Octal_Binary(){ 

int octal, reminder, binary = 0, i = 1;

    printf("Enter a Octal number: ");
    scanf("%O", &octal);

    while(octal != 0){
        reminder = octal % 2;
        octal = octal /2;
        binary = binary + (reminder * i);
        i = i * 10;
    }

    printf("Binary= %d\n\n",binary);

}

void Octal_Hexadecimal(){ 

    int octal;

    printf("Enter a Octal number: ");
    scanf("%O", &octal);

    printf("Hexadecimal= %X\n\n",octal);

}

void Hexadecimal_Decimal(){ //10

    int hexadecimal;

    printf("Enter a Hexadecimal number: ");
    scanf("%X", &hexadecimal);

    printf("Decimal= %d\n\n",hexadecimal);

}

void Hexadecimal_Binary(){ 

    int decimal, hexadecimal, reminder, binary = 0, i = 1;

    printf("Enter a Hexadecimal number: ");
    scanf("%X", &hexadecimal);


    while(hexadecimal != 0){
        reminder = hexadecimal % 2;
        hexadecimal = hexadecimal /2;
        binary = binary + (reminder * i);
        i = i * 10;
    }

    printf("Binary=%d\n\n",binary);

}



void Hexadecimal_Octal(){ //12

    int hexadecimal;

    printf("Enter Hexadecimal number: ");
    scanf("%X", &hexadecimal);

    printf("Octal= %o\n\n",hexadecimal);

}
