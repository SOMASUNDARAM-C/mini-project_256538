# Test plan and test ouput

## High Level Testing
|ID|Input|Expected Output|Actual Output|Result
|:----:|:-----:|:-----:|:-----:|:---:|
HR01.1|1 and 5|Pin diagram of 7432|Pin diagram of 7432|Success
HR01.2|2 and 15|Pin diagram of AC188|Pin diagram of AC188|Success
HR01.3|3 and 4|Pin diagram of 7809|Pin diagram of 7809|Success
HR01.4|4 and 7|Pin diagram of 1N4007|Pin diagram of 1N4007|Success
HR01.5|5 and 1|Pin diagram of BC170|Pin diagram of BC170|Success
HR01.6|6|Print error message|Print error message|Success
HR01.7|0|Print error message|Print error message|Success
HR01.8|aadfs|Print error message|Print error message|Success
HR01.9|2.324|Print error message|Print error message|Success

## Unit Testing
|Function name|Input|Expected Output|Actual Output|Result
|:----:|:-----:|:-----:|:-----:|:---:|
print_diode|1|0|0|Success
print_diode|7|0|0|Success
print_diode|4|0|0|Success
print_diode|10|0|0|Success
print_diode|0|0|0|Success
print_diode|-3|0|0|Success
print_transistor|1|0|0|Success
print_transistor|10|0|0|Success
print_transistor|13|0|0|Success
print_transistor|18|0|0|Success
print_transistor|0|0|0|Success
print_transistor|21|0|0|Success
print_transistor|-5|0|0|Success
print_regulator|2|0|0|Success
print_regulator|4|0|0|Success
print_regulator|6|0|0|Success
print_regulator|0|0|0|Success
print_regulator|15|0|0|Success
print_regulator|-100|0|0|Success
print_gate|1|0|0|Success
print_gate|3|0|0|Success
print_gate|6|0|0|Success
print_gate|0|0|0|Success
print_gate|78|0|0|Success
print_gate|-100|0|0|Success
print_mosfet|1|0|0|Success
print_mosfet|2|0|0|Success
print_mosfet|0|0|0|Success
print_mosfet|54|0|0|Success
print_mosfet|-34|0|0|Success
print_phototransistor|4|0|0|Success
print_phototransistor|5|0|0|Success
print_phototransistor|0|0|0|Success
print_phototransistor|-12|0|0|Success
print_phototransistor|89|0|0|Success
print_hat_pin|-|0|0|Success
print_bd_pin|-|0|0|Success
print_to_pin|-|0|0|Success
print_dip_pin|-|0|0|Success
print_diode_pin|-|0|0|Success
print_gate_pin|-|0|0|Success