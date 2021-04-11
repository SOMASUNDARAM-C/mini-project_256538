#include <string.h>
#include "unity.h"
#include "unity_internals.h"
#include "print_component.h"
#include "print_pin_diagram.h"
#include "global_data.h"

void test_print_diode();
void test_print_transistor();
void test_print_regulator();
void test_print_gate();
void test_print_mosfet();
void test_print_phototransistor();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_print_diode);
    RUN_TEST(test_print_transistor);
    RUN_TEST(test_print_regulator);
    RUN_TEST(test_print_gate);
    RUN_TEST(test_print_mosfet);
    RUN_TEST(test_print_phototransistor);

    /* Close the Unity Test Framework */
    return UNITY_END();
}

/* Write all the test functions */ 
void test_print_diode(void) {
    print_diode(1);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "1N4001"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "PN junction diode"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Diode"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "DO-41"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "KA"));
    
    print_diode(7);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "1N4007"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "PN junction diode"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Diode"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "DO-41"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "KA"));

    print_diode(4);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "1N4004"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "PN junction diode"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Diode"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "DO-41"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "KA"));

    print_diode(10);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Diode"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_diode(0);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Diode"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));
    
    print_diode(-3);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Diode"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

}

void test_print_transistor(void) {
    print_transistor(1);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "BC546"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "NPN transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-92"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "CBE"));

    print_transistor(10);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "BD677"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "NPN transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-126"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "BCE"));

    print_transistor(13);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "BC636"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "PNP transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-92"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "BCE"));

    print_transistor(18);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "TIP127"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "PNP transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-220"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "EBC"));

    print_transistor(0);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_transistor(21);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_transistor(-5);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));
}

void test_print_regulator(void) {
    print_regulator(2);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "7806"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "+6V fixed voltage regulator"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Regulator IC"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-220"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "Vs-G-Vo"));

    print_regulator(4);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "7809"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "+9V fixed voltage regulator"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Regulator IC"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-220"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "Vs-G-Vo"));

    print_regulator(6);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "LM317"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "Adjustable voltage regulator"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Regulator IC"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-220"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "G-Vo-Vs"));

    print_regulator(0);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Regulator IC"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_regulator(15);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Regulator IC"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_regulator(-100);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Regulator IC"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));
}

void test_print_gate(void) {
    print_gate(1);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "7400"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "2-input 1-output NAND gate"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Logic gate"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "DIP"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "IIO"));

    print_gate(3);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "7404"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "1-input 1-output NOT gate"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Logic gate"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "DIP"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "IOIO"));

    print_gate(6);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "7486"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "2-input 1-output XOR gate"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Logic gate"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "DIP"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "IIO"));

    print_gate(0);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Logic gate"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_gate(78);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Logic gate"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_gate(-100);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Logic gate"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));
}

void test_print_mosfet(void) {
    print_mosfet(1);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "BC170"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "N-channel MOSFET"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "MOSFET"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-92"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "DGS"));

    print_mosfet(2);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "BS170P"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "N-channel MOSFET"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "MOSFET"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-92"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "SGD"));

    print_mosfet(0);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Other"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_mosfet(54);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Other"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_mosfet(-34);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Other"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

}

void test_print_phototransistor(void){
    print_phototransistor(4);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "2N5777"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "Photo transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Photo transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "TO-92"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "ECB"));

    print_phototransistor(5);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "L14F1"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "Photo transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Photo transistor"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "Metal cap"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "CBE"));

    print_phototransistor(0);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Other"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_phototransistor(-12);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Other"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));

    print_phototransistor(89);
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_no, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_name, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_category, "Other"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_package, "XXXX"));
    TEST_ASSERT_EQUAL(0, strcmp(full_details.IC_pin_sequence, "XXXX"));
}