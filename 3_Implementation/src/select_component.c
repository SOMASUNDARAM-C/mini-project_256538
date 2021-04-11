#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "print_component.h"
#include "select.h"
#include "global_data.h"

void select_diode()
{
    char diode[3];
    printf("Please select the DIODE number\n");
    printf("1-1N4001\t2-1N4002\t3-1N4003\n4-1N4004\t5-1N4005\t6-1N4006\n7-1N4007\n");
    fgets(diode, 3, stdin);
    print_diode(atoi(diode));
}

void select_gate()
{
    char gate[3];
    printf("Select the GATE number:\n");
    printf("1-7400\t2-7402\n3-7404\t4-7408\n5-7432\t6-7486\n");
    fgets(gate, 3, stdin);
    print_gate(atoi(gate));
}

void select_others()
{
    char option[3];
    printf("Please select the part number\n");
    printf("1-BC170\t  2-BS170P\t3-IRF540\t4-2N5777\t5-L14F1\n");
    fgets(option, 3, stdin);
    if(atoi(option) <= 3)
        print_mosfet(atoi(option));
    else
        print_phototransistor(atoi(option));
}

void select_regulator()
{
    char regulator[3];
    printf("Select the REGULATOR number:\n");
    printf("1-7805\t2-7806\n3-7808\t4-7809\n5-7812\t6-LM317\n");
    fgets(regulator, 3, stdin);
    print_regulator(atoi(regulator));
}

void select_transistor()
{
    char transistor[3];
    printf("Select the TRANSISTOR number:\n");
    printf("1-BC546    2-BC547    3-BC548    4-BC549    5-AC187\n6-TIP120    7-TIP121    8-TIP122    9-BD139    10-BD677\n");
    printf("11-BC557\t12-BC558\t13-BC636\t14-2N2222A\t15-AC188\n16-TIP125\t17-TIP126\t18-TIP127\t19-BD140\t20-BEL100P\n");
    fgets(transistor, 3, stdin);
    print_transistor(atoi(transistor));
}