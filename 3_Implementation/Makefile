# Name of the project
PROJECT_NAME = Pin_configuration_finder
TEST_PROJECT_NAME = Test_$(PROJECT_NAME)

# Output directory
BUILD = build

# All source code files
SRC = project_main.c\
src/*.c

# All test source files
TEST_SRC = src/print_component.c\
test/test_print_component.c\
unity/unity.c\
src/print_pin_diagram.c\

# All include folders with header files
INC	= -Iinc\
-Iunity\
#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))
	$(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))

doc:
	make -C doc
$(BUILD):
	mkdir $(BUILD)

clean:
	$(RM) $(call FixPath,$(BUILD)/*)
	make clean -C doc
	rmdir $(BUILD) doc/html