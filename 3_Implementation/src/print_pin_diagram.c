#include <stdio.h>
#include <string.h>
#include "global_data.h"

int print_bd_pin()
{
	strcpy(full_details.IC_package, "TO-126");
	printf(" _________\n");
	printf("|    _    |\n");
	printf("|   (_)   |\n");
	printf("|    XX   |\n");
	printf("|___XXX___|\n");
	printf("  |  |  |  \n");
	printf("  |  |  |  \n");
	printf("  |  |  |  \n");
	printf("  |  |  |  \n");
	printf("  1  2  3  \n");
	return 0;
}

int print_diode_pin()
{
	strcpy(full_details.IC_package, "DO-41");
	printf("     ____________________\n");
	printf("     |   ||             |\n");
	printf("K____|   ||             |____A\n");
	printf("     |   ||             |\n");
	printf("     |___||_____________|\n");
	
	return 0;
}

int print_dip_pin()
{
	strcpy(full_details.IC_package, "TO-92");
	printf(" _________\n");
	printf("|   XX    |\n");
	printf("|  XXXX   |\n");
	printf("|         |\n");
	printf("|_________|\n");
	printf("  |  |  |  \n");
	printf("  |  |  |  \n");
	printf("  |  |  |  \n");
	printf("  |  |  |  \n");
	printf("  1  2  3  \n");
	return 0;
}

int print_gate_pin()
{
	strcpy(full_details.IC_package, "DIP");
	printf("  14  13  12  11  10  9  8\n");
	printf(" __________________________\n");
	printf("|                          |\n");
	printf("|                          |\n");
	printf("|)                         |\n");
	printf("|                          |\n");
	printf("|__________________________|\n");  
	printf("  1   2   3   4   5   6   7\n");
	return 0;
}

int print_hat_pin()
{
	strcpy(full_details.IC_package, "Metal cap");
	printf("             *    *    *\n");
	printf("        *                   *\n");
	printf("     *                         *\n");
	printf("   *                             *\n");
	printf("  *              X(2)             *\n");
	printf(" *                                 *\n");
	printf("*                                   *\n");
	printf("*                                   *\n");
	printf("*                                   *\n");
	printf(" *         X(3)        X(1)        *\n");
	printf("  *                               ******\n");
	printf("   *                             *******\n");
	printf("     *                         *\n");
	printf("        *                   *\n");
	printf("             *    *    *\n");
	return 0;
}

int print_to_pin()
{
	strcpy(full_details.IC_package, "TO-220");
	printf("___________\n");
	printf("|    _    |\n");
	printf("|   (_)   |\n");
	printf("|_________|\n");
	printf("|   XX    |\n");
	printf("|  XXXX   |\n");
	printf("|         |\n");
	printf("|_________|\n");
	printf("  |  |  |  \n");
	printf("  |  |  |  \n");
	printf("  |  |  |  \n");
	printf("  |  |  |  \n");
	printf("  1  2  3  \n");
	return 0;
}