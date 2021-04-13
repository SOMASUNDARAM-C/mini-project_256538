#include <stdio.h>
#include <string.h>
#include "print_pin_diagram.h"
#include "global_data.h"

void print_diode(int diode)
{
    switch(diode)
    {
        case 1:
            print_diode_pin();
            printf("K-Cathode\tA-Anode\n");
            strcpy(full_details.IC_no, "1N4001");
            strcpy(full_details.IC_pin_sequence, "KA");
            strcpy(full_details.IC_name, "PN junction diode");
            strcpy(full_details.IC_category, "Diode");
            break;
        case 2:
            print_diode_pin();
            printf("K-Cathode\tA-Anode\n");
            strcpy(full_details.IC_no, "1N4002");
            strcpy(full_details.IC_pin_sequence, "KA");
            strcpy(full_details.IC_name, "PN junction diode");
            strcpy(full_details.IC_category, "Diode");
            break;
        case 3:
            print_diode_pin();
            printf("K-Cathode\tA-Anode\n");
            strcpy(full_details.IC_no, "1N4003");
            strcpy(full_details.IC_pin_sequence, "KA");
            strcpy(full_details.IC_name, "PN junction diode");
            strcpy(full_details.IC_category, "Diode");
            break;
        case 4:
            print_diode_pin();
            printf("K-Cathode\tA-Anode\n");
            strcpy(full_details.IC_no, "1N4004");
            strcpy(full_details.IC_pin_sequence, "KA");
            strcpy(full_details.IC_name, "PN junction diode");
            strcpy(full_details.IC_category, "Diode");
            break;
        case 5:
            print_diode_pin();
            printf("K-Cathode\tA-Anode\n");
            strcpy(full_details.IC_no, "1N4005");
            strcpy(full_details.IC_pin_sequence, "KA");
            strcpy(full_details.IC_name, "PN junction diode");
            strcpy(full_details.IC_category, "Diode");
            break;
        case 6:
            print_diode_pin();
            printf("K-Cathode\tA-Anode\n");
            strcpy(full_details.IC_no, "1N4006");
            strcpy(full_details.IC_pin_sequence, "KA");
            strcpy(full_details.IC_name, "PN junction diode");
            strcpy(full_details.IC_category, "Diode");
            break;
        case 7:
            print_diode_pin();
            printf("K-Cathode\tA-Anode\n");
            strcpy(full_details.IC_no, "1N4007");
            strcpy(full_details.IC_pin_sequence, "KA");
            strcpy(full_details.IC_name, "PN junction diode");
            strcpy(full_details.IC_category, "Diode");
            break;
        default:
            printf("Please select the correct option\n");
            strcpy(full_details.IC_no, "XXXX");
            strcpy(full_details.IC_pin_sequence, "XXXX");
            strcpy(full_details.IC_name, "XXXX");
            strcpy(full_details.IC_package, "XXXX");
            strcpy(full_details.IC_category, "Diode");
            break;
    }
}

void print_gate(int gate)
{
    char pin_config1[100] = "1-IN\t2-IN\t3-OUT\n4-IN\t5-IN\t6-OUT\n8-OUT\t9-IN\t10-IN\n11-OUT\t12-IN\t13-IN\n7-GND\t\t14-Vcc";
    char pin_config2[100] = "1-OUT\t2-IN\t3-IN\n4-OUT\t5-IN\t6-IN\n8-IN\t9-IN\t10-OUT\n11-IN\t12-IN\t13-OUT\n7-GND\t\t14-Vcc";
    char pin_config3[100] = "1-IN\t2-OUT\t3-IN\n4-OUT\t5-IN\t6-OUT\n8-OUT\t9-IN\t10-OUT\n11-IN\t12-OUT\t13-IN\n7-GND\t\t14-Vcc";
    
    switch (gate)
    {
        case 1:
            print_gate_pin();
            strcpy(full_details.IC_no, "7400");
            strcpy(full_details.IC_name, "2-input 1-output NAND gate");
            strcpy(full_details.IC_pin_sequence, "IIO");
            strcpy(full_details.IC_category, "Logic gate");
            printf("%s\n", pin_config1);
            break;
        case 2:
            print_gate_pin();
            strcpy(full_details.IC_no, "7402");
            strcpy(full_details.IC_name, "2-input 1-output NOR gate");
            strcpy(full_details.IC_pin_sequence, "OII");
            strcpy(full_details.IC_category, "Logic gate");
            printf("%s\n", pin_config2);
            break;
        case 3:
            print_gate_pin();
            strcpy(full_details.IC_no, "7404");
            strcpy(full_details.IC_name, "1-input 1-output NOT gate");
            strcpy(full_details.IC_pin_sequence, "IOIO");
            strcpy(full_details.IC_category, "Logic gate");
            printf("%s\n", pin_config3);
            break;
        case 4:
            print_gate_pin();
            strcpy(full_details.IC_no, "7408");
            strcpy(full_details.IC_name, "2-input 1-output AND gate");
            strcpy(full_details.IC_pin_sequence, "IIO");
            strcpy(full_details.IC_category, "Logic gate");
            printf("%s\n", pin_config1);
            break;
        case 5:
            print_gate_pin();
            strcpy(full_details.IC_no, "7432");
            strcpy(full_details.IC_name, "2-input 1-output OR gate");
            strcpy(full_details.IC_pin_sequence, "IIO");
            strcpy(full_details.IC_category, "Logic gate");
            printf("%s\n", pin_config1);
            break;
        case 6:
            print_gate_pin();
            strcpy(full_details.IC_no, "7486");
            strcpy(full_details.IC_name, "2-input 1-output XOR gate");
            strcpy(full_details.IC_pin_sequence, "IIO");
            strcpy(full_details.IC_category, "Logic gate");
            printf("%s\n", pin_config1);
            break;

        default:
            printf("Please select the correct option\n");
            strcpy(full_details.IC_no, "XXXX");
            strcpy(full_details.IC_pin_sequence, "XXXX");
            strcpy(full_details.IC_name, "XXXX");
            strcpy(full_details.IC_package, "XXXX");
            strcpy(full_details.IC_category, "Logic gate");
            break;
    }
}

void print_mosfet(int option)
{
    switch(option)
    {
        case 1:
            strcpy(full_details.IC_no, "BC170");
            strcpy(full_details.IC_name, "N-channel MOSFET");
            strcpy(full_details.IC_pin_sequence, "DGS");
            strcpy(full_details.IC_category, "MOSFET");
            print_dip_pin();
            printf("1-Drain\t2-Gate\t3-Source\n");
            break;
        case 2:
            strcpy(full_details.IC_no, "BS170P");
            strcpy(full_details.IC_name, "N-channel MOSFET");
            strcpy(full_details.IC_pin_sequence, "SGD");
            strcpy(full_details.IC_category, "MOSFET");
            print_dip_pin();
            printf("1-Source\t2-Gate\t3-Drain\n");
            break;
        case 3:
            strcpy(full_details.IC_no, "IRF540");
            strcpy(full_details.IC_name, "MOSFET");
            strcpy(full_details.IC_pin_sequence, "GDS");
            strcpy(full_details.IC_category, "MOSFET");
            print_to_pin();
            printf("1-Gate\t2-Drain\t3-Source\n");
            break;
        default:
            printf("Please select the correct option\n");
            strcpy(full_details.IC_no, "XXXX");
            strcpy(full_details.IC_pin_sequence, "XXXX");
            strcpy(full_details.IC_name, "XXXX");
            strcpy(full_details.IC_package, "XXXX");
            strcpy(full_details.IC_category, "Other");
            break;
    }
}

void print_phototransistor(int option)
{
    switch (option)
    {
        case 4:
            strcpy(full_details.IC_no, "2N5777");
            strcpy(full_details.IC_name, "Photo transistor");
            strcpy(full_details.IC_pin_sequence, "ECB");
            strcpy(full_details.IC_category, "Photo transistor");
            print_dip_pin();
            printf("1-Emitter\t2-Collector\t3-Base\n");
            break;
        case 5:
            strcpy(full_details.IC_no, "L14F1");
            strcpy(full_details.IC_name, "Photo transistor");
            strcpy(full_details.IC_pin_sequence, "CBE");
            strcpy(full_details.IC_category, "Photo transistor");
            print_hat_pin();
            printf("1-Collector\t2-Base\t3-Emitter\n");
            break;
        default:
            printf("Please select the correct option\n");
            strcpy(full_details.IC_no, "XXXX");
            strcpy(full_details.IC_pin_sequence, "XXXX");
            strcpy(full_details.IC_name, "XXXX");
            strcpy(full_details.IC_package, "XXXX");
            strcpy(full_details.IC_category, "Other");
            break;
    }
}

void print_regulator(int regulator)
{
    char pin_config1[50] = "1-Supply voltage\t2-Ground\t3-Regulated output";
    char pin_config2[50] = "1-Ground\t2-Regulated output\t3-Supply voltage";
    switch (regulator)
    {
        case 1:
            print_to_pin();
            strcpy(full_details.IC_no, "7805");
            strcpy(full_details.IC_name, "+5V fixed voltage regulator");
            strcpy(full_details.IC_pin_sequence, "Vs-G-Vo");
            strcpy(full_details.IC_category, "Regulator IC");
            printf("%s\n", pin_config1);
            break;
        case 2:
            print_to_pin();
            strcpy(full_details.IC_no, "7806");
            strcpy(full_details.IC_name, "+6V fixed voltage regulator");
            strcpy(full_details.IC_pin_sequence, "Vs-G-Vo");
            strcpy(full_details.IC_category, "Regulator IC");
            printf("%s\n", pin_config1);
            break;
        case 3:
            print_to_pin();
            strcpy(full_details.IC_no, "7808");
            strcpy(full_details.IC_name, "+8V fixed voltage regulator");
            strcpy(full_details.IC_pin_sequence, "Vs-G-Vo");
            strcpy(full_details.IC_category, "Regulator IC");
            printf("%s\n", pin_config1);
            break;
        case 4:
            print_to_pin();
            strcpy(full_details.IC_no, "7809");
            strcpy(full_details.IC_name, "+9V fixed voltage regulator");
            strcpy(full_details.IC_pin_sequence, "Vs-G-Vo");
            strcpy(full_details.IC_category, "Regulator IC");
            printf("%s\n", pin_config1);
            break;
        case 5:
            print_to_pin();
            strcpy(full_details.IC_no, "7812");
            strcpy(full_details.IC_name, "+12V fixed voltage regulator");
            strcpy(full_details.IC_pin_sequence, "Vs-G-Vo");
            strcpy(full_details.IC_category, "Regulator IC");
            printf("%s\n", pin_config1);
            break;
        case 6:
            print_to_pin();
            strcpy(full_details.IC_no, "LM317");
            strcpy(full_details.IC_name, "Adjustable voltage regulator");
            strcpy(full_details.IC_pin_sequence, "G-Vo-Vs");
            strcpy(full_details.IC_category, "Regulator IC");
            printf("%s\n", pin_config2);
            break;

        default:
            printf("Please select the correct option\n");
            strcpy(full_details.IC_no, "XXXX");
            strcpy(full_details.IC_pin_sequence, "XXXX");
            strcpy(full_details.IC_name, "XXXX");
            strcpy(full_details.IC_package, "XXXX");
            strcpy(full_details.IC_category, "Regulator IC");
            break;
    }
}

/*void print_transistor(int part_index)
{
    int i = part_index;
    char pin_config[40];
    int transistor_type_option[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int tansistor_pin_config[] = {1, 1, 1, 1, 1, 1, 3, 4, 3, 1, 3, 5, 2, 3, 2, 2, 2, 2, 6, 6, 6, 6, 6, 6, 6, 2, 6, 6, 6, 3, 6, 6};
    int transistor_package_option[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 3, 2, 2};

    if(i < count[0])
    {
        strcpy(full_details.IC_category, "Transistor");
        strcpy(full_details.IC_name, transistors_list[i]);
        switch (transistor_type_option[i])
        {
            case 1:
                strcpy(full_details.IC_name, "NPN Transistor");
                break;
            case 2:
                strcpy(full_details.IC_name, "PNP Transistor");
                break;
        }
        switch (tansistor_pin_config[i])
        {
            case 1:
                strcpy(pin_config, "1-Collector\t2-Base\t3-Emitter");
                break;
            case 2:
                strcpy(pin_config, "1-Base\t2-Collector\t3-Emitter");
                break;
            case 3:
                strcpy(pin_config, "1-Emitter\t2-Collector\t3-Base");
                break;
            case 4:
                strcpy(pin_config, "1-Collector\t2-Emitter\t3-Base");
                break;
            case 5:
                strcpy(pin_config, "1-Base\t2-Emitter\t3-Collector");
                break;
            case 6:
                strcpy(pin_config, "1-Emitter\t2-Base\t3-Collector");
                break;
        }
        switch (transistor_package_option[i])
        {
            case 1:
                print_dip_pin();
                printf("%s", pin_config);
                strcpy(full_details.IC_package, "TO-92");
                break;
            case 2:
                print_hat_pin();
                printf("%s", pin_config);
                strcpy(full_details.IC_package, "Metal Cap");
                break;
            case 3:
                print_bd_pin();
                printf("%s", pin_config);
                strcpy(full_details.IC_package, "TO-126");
                break;
            case 4:
                print_to_pin();
                printf("%s", pin_config);
                strcpy(full_details.IC_package, "TO-220");
                break;
        }
    }
    else
    {
        printf("Sorry...Details about this transistor is not available here");
    }
}
*/

void print_transistor(int transistor)
{
    if(transistor >= 1 && transistor <=20)
        strcpy(full_details.IC_category, "Transistor");
    if(transistor >= 1 && transistor <= 10)
        strcpy(full_details.IC_name, "NPN transistor");
    if(transistor >= 11 && transistor <= 20)
        strcpy(full_details.IC_name, "PNP transistor");
    switch(transistor)
    {
        case 1:
            print_dip_pin();
            printf("1-Collector\t2-Base\t3-Emitter\n");
            strcpy(full_details.IC_no, "BC546");
            strcpy(full_details.IC_pin_sequence, "CBE");
            break;
        case 2:
            print_dip_pin();
            printf("1-Collector\t2-Base\t3-Emitter\n");
            strcpy(full_details.IC_no, "BC547");
            strcpy(full_details.IC_pin_sequence, "CBE");
            break;
        case 3:
            print_dip_pin();
            printf("1-Collector\t2-Base\t3-Emitter\n");
            strcpy(full_details.IC_no, "BC548");
            strcpy(full_details.IC_pin_sequence, "CBE");
            break;
        case 4:
            print_dip_pin();
            printf("1-Collector\t2-Base\t3-Emitter\n");
            strcpy(full_details.IC_no, "BC549");
            strcpy(full_details.IC_pin_sequence, "CBE");
            break;
        case 5:
            print_hat_pin();
            printf("1-Collector\t2-Base\t3-Emitter\n");
            strcpy(full_details.IC_no, "AC187");
            strcpy(full_details.IC_pin_sequence, "CBE");
            break;
        case 6:
            print_to_pin();
            printf("1-Base\t2-Collector\t3-Emitter\n");
            strcpy(full_details.IC_no, "TIP120");
            strcpy(full_details.IC_pin_sequence, "BCE");
            break;
        case 7:
            print_to_pin();
            printf("1-Base\t2-Collector\t3-Emitter\n");
            strcpy(full_details.IC_no, "TIP121");
            strcpy(full_details.IC_pin_sequence, "BCE");
            break;
        case 8:
            print_to_pin();
            printf("1-Base\t2-Collector\t3-Emitter\n");
            strcpy(full_details.IC_no, "TIP122");
            strcpy(full_details.IC_pin_sequence, "BCE");
            break;
        case 9:
            print_bd_pin();
            printf("1-Emitter\t2-Base\t3-Collector\n");
            strcpy(full_details.IC_no, "BD139");
            strcpy(full_details.IC_pin_sequence, "EBC");
            break;
        case 10:
            print_bd_pin();
            printf("1-Base\t2-Collector\t3-Emitter\n");
            strcpy(full_details.IC_no, "BD677");
            strcpy(full_details.IC_pin_sequence, "BCE");
            break;
        case 11:
            print_dip_pin();
            printf("1-Emitter\t2-Base\t3-Collector\n");
            strcpy(full_details.IC_no, "BC557");
            strcpy(full_details.IC_pin_sequence, "EBC");
            break;
        case 12:
            print_dip_pin();
            printf("1-Emitter\t2-Base\t3-Collector\n");
            strcpy(full_details.IC_no, "BC558");
            strcpy(full_details.IC_pin_sequence, "EBC");
            break;
        case 13:
            print_dip_pin();
            printf("1-Base\t2-Collector\t3-Emitter\n");
            strcpy(full_details.IC_no, "BC636");
            strcpy(full_details.IC_pin_sequence, "BCE");
            break;
        case 14:
            print_dip_pin();
            printf("1-Emitter\t2-Base\t3-Collector\n");
            strcpy(full_details.IC_no, "2N2222A");
            strcpy(full_details.IC_pin_sequence, "EBC");
            break;
        case 15:
            print_hat_pin();
            printf("1-Emitter\t2-Base\t3-Collector\n");
            strcpy(full_details.IC_no, "AC188");
            strcpy(full_details.IC_pin_sequence, "EBC");
            break;
        case 16:
            print_to_pin();
            printf("1-Emitter\t2-Base\t3-Collector\n");
            strcpy(full_details.IC_no, "TIP125");
            strcpy(full_details.IC_pin_sequence, "EBC");
            break;
        case 17:
            print_to_pin();
            printf("1-Emitter\t2-Base\t3-Collector\n");
            strcpy(full_details.IC_no, "TIP126");
            strcpy(full_details.IC_pin_sequence, "EBC");
            break;
        case 18:
            print_to_pin();
            printf("1-Emitter\t2-Base\t3-Collector\n");
            strcpy(full_details.IC_no, "TIP127");
            strcpy(full_details.IC_pin_sequence, "EBC");
            break;
        case 19:
            print_bd_pin();
            printf("1-Emitter\t2-Collector\t3-Base\n");
            strcpy(full_details.IC_no, "BD140");
            strcpy(full_details.IC_pin_sequence, "ECB");
            break;
        case 20:
            print_hat_pin();
            printf("1-Emitter\t2-Base\t3-Collector\n");
            strcpy(full_details.IC_no, "BEL100P");
            strcpy(full_details.IC_pin_sequence, "EBC");
            break;
        default:
            printf("Please select the correct option\n");
            strcpy(full_details.IC_no, "XXXX");
            strcpy(full_details.IC_pin_sequence, "XXXX");
            strcpy(full_details.IC_name, "XXXX");
            strcpy(full_details.IC_package, "XXXX");
            strcpy(full_details.IC_category, "Transistor");
            break;
    }
}