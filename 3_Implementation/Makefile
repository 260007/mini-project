# Name of the project
PROJECT_NAME = ARS

# Output directory
BUILD = build

# All source code files
SRC= src/circle.c\
	src/cube.c\
	src/parallelogram.c\
	src/rectangle.c\
	src/rhombus.c\
	src/square.c\
	src/trapezium.c\
	src/triangle.c\
	src/cuboid.c\
	src/cone.c\
	src/sphere.c\
main.c\


# All test source files
TEST_SRC = src/circle.c\
	src/cube.c\
	src/parallelogram.c\
	src/rectangle.c\
	src/rhombus.c\
	src/square.c\
	src/trapezium.c\
	src/triangle.c\
	src/cuboid.c\
	src/cone.c\
	src/sphere.c\
test/test.c\
unity/unity.c\

# All include folders with header files
INC	= -Iinc\
-Iunity\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= inc/header.h\
unity/unity.h\
unity/unity_internals.h\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT= $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT) -lm

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS) -lm
	./$(TEST_OUTPUT) 




# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
