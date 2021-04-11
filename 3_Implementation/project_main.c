#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "select.h"
#include "global_data.h"

int main()
{
    char category[3];
    printf("Please select the category of IC:\n");
    printf("1-Gate\n2-Transistors\n3-Regulator IC\n4-Diodes\n5-Others\n");
    fgets(category, 3, stdin);
    switch (atoi(category))
    {
        case 1:
            select_gate();
            break;
        
        case 2:
            select_transistor();
            break;

        case 3:
            select_regulator();
            break;

        case 4:
            select_diode();
            break;

        case 5:
            select_others();
            break;

        default:
            printf("Please select the correct option\n");
            strcpy(full_details.IC_no, "XXXX");
            strcpy(full_details.IC_pin_sequence, "XXXX");
            strcpy(full_details.IC_name, "XXXX");
            strcpy(full_details.IC_package, "XXXX");
            break;
    }
    printf("\n\nPart no :%s", full_details.IC_no);
    printf("\nPart name :%s", full_details.IC_name);
    printf("\nCategory :%s", full_details.IC_category);
    printf("\nPackage type :%s\n", full_details.IC_package);
    return 0;
}