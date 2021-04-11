#ifndef PRINT_COMPONENT_H
#define PRINT_COMPONENT_H

/**
 * @brief Prints the general pin diagram of a diode and updates the detail in the structure. 
 *  This function also updates the values in the structure according to the selected option.
 * @param diode Serial number of the diode as in the Menu
 */
void print_diode(int diode);

/**
 * @brief Prints the general pin diagram of a transistor and updates the detail in the structure.
 * This function also updates the values in the structure according to the selected option.
 * 
 * @param transistor Serial number of the transistor as in the Menu
 */
void print_transistor(int transistor);

/**
 * @brief Prints the general pin diagram of a voltage regulator and updates the detail in the structure. 
 * This function also updates the values in the structure according to the selected option.
 * @param regulator Serial number of the voltage regulator as in the Menu
 */
void print_regulator(int regulator);

/**
 * @brief Prints the general pin diagram of a logic gate and updates the detail in the structure. 
 *  This function also updates the values in the structure according to the selected option.
 * @param gate Serial number of the logic gate as in the Menu
 */
void print_gate(int gate);

/**
 * @brief Prints the general pin diagram of a MOSFET and updates the detail in the structure. 
 *  This function also updates the values in the structure according to the selected option.
 * @param mosfet Serial number of the MOSFET as in the Menu
 */
void print_mosfet(int mosfet);

/**
 * @brief Prints the general pin diagram of a phototransistor and updates the detail in the structure. 
 *  This function also updates the values in the structure according to the selected option.
 * @param phototransistor Serial number of the phototransistor in the Menu
 */
void print_phototransistor(int phototransistor);

#endif