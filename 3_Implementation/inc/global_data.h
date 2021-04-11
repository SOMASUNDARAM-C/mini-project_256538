#ifndef GLOBAL_DATA_H
#define GLOBAL_DATA_H
/**
 * @brief Structure with members as IC number, name, package type, component categoryand short form of pin sequence
 * This is used to get informations from each one function and display it in the main function.
 */
typedef struct details
{
    char IC_no[20];
    char IC_category[35];
    char IC_name[40];
    char IC_package[22];
    char IC_pin_sequence[8];
}details;

details full_details;


//int *count;
//char **transistors_list;
//char **gates_list;
//char **regulators_list;
//char **mosfets_list;
//char **phototransistors_list;
//char **diodes_list;
//char ***components_type;
//char part_no[10];

#endif