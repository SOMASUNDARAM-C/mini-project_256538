#ifndef PRINT_PIN_DIAGRAM_H
#define PRINT_PIN_DIAGRAM_H

/**
 * @brief prints front view of TO-126 package wit pin numbers
 * 
 * @return int 
 */
int print_bd_pin();

/**
 * @brief prints side view of a diode with pin names
 * 
 * @return int 
 */
int print_diode_pin();

/**
 * @brief prints front view of TO-92 package with pin numbers
 * 
 * @return int 
 */
int print_dip_pin();

/**
 * @brief prints the top view of 14 pin logic gate ICs with pin numbers
 * 
 * @return int 
 */
int print_gate_pin();

/**
 * @brief prints the bottom view of metal-cap package with pin numbers
 * 
 * @return int 
 */
int print_hat_pin();

/**
 * @brief prints the front view of TO-220 package with pin numbers
 * 
 * @return int 
 */
int print_to_pin();

#endif