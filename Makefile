# main: main.o UniStudent.o CollegeStudent.o Student.o ManageStudent.o ManageUniStudent.o ManageColStudent.o
# 	g++ -w main.o UniStudent.o CollegeStudent.o Student.o ManageStudent.o ManageUniStudent.o ManageColStudent.o -o main

# main.o: main.cpp ./include/Student/UniStudent.h ./include/Student/CollegeStudent.h ./include/ManageStudent/ManageUniStudent.h ./include/ManageStudent/ManageColStudent.h
# 	g++ -w -c main.cpp

# UniStudent.o: ./src/Student/UniStudent.cpp ./include/Student/UniStudent.h
# 	g++ -w -c ./src/Student/UniStudent.cpp

# CollegeStudent.o: ./src/Student/CollegeStudent.cpp ./include/Student/CollegeStudent.h
# 	g++ -w -c ./src/Student/CollegeStudent.cpp 

# Student.o: ./src/Student/Student.cpp ./include/Student/Student.h
# 	g++ -w -c ./src/Student/Student.cpp 

# ManageStudent.o: ./src/ManageStudent/ManageStudent.cpp ./include/ManageStudent/ManageStudent.h
# 	g++ -w -c ./src/ManageStudent/ManageStudent.cpp 

# ManageUniStudent.o: ./src/ManageStudent/ManageUniStudent.cpp ./include/ManageStudent/ManageUniStudent.h ./include/Student/UniStudent.h ./include/ManageStudent/ManageStudent.h ./include/Student/Student.h
# 	g++ -w -c ./src/ManageStudent/ManageUniStudent.cpp

# ManageColStudent.o: ./src/ManageStudent/ManageColStudent.cpp ./include/ManageStudent/ManageColStudent.h ./include/Student/CollegeStudent.h ./include/ManageStudent/ManageStudent.h ./include/Student/Student.h
# 	g++ -w -c ./src/ManageStudent/ManageColStudent.cpp

# clean: 
# 	rm -f *.o


CXX ?= g++

# path #
SRC_PATH = src
BUILD_PATH = build
BIN_PATH = $(BUILD_PATH)/bin

# executable # 
BIN_NAME = runner

# extensions #
SRC_EXT = cpp

# code lists #
# Find all source files in the source directory, sorted by
# most recently modified
SOURCES = $(shell find $(SRC_PATH) -name '*.$(SRC_EXT)' | sort -k 1nr | cut -f2-)
# Set the object file names, with the source directory stripped
# from the path, and the build path prepended in its place
OBJECTS = $(SOURCES:$(SRC_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/%.o)
# Set the dependency files that will be used to add header dependencies
DEPS = $(OBJECTS:.o=.d)

# flags #
COMPILE_FLAGS = -std=c++11 -Wall -Wextra -g
INCLUDES = -I include/ -I /usr/local/include
# Space-separated pkg-config libraries used by this project
LIBS =

.PHONY: default_target
default_target: release

.PHONY: release
release: export CXXFLAGS := $(CXXFLAGS) $(COMPILE_FLAGS)
release: dirs
	@$(MAKE) all

.PHONY: dirs
dirs:
	@echo "Creating directories"
	@mkdir -p $(dir $(OBJECTS))
	@mkdir -p $(BIN_PATH)

.PHONY: clean
clean:
	@echo "Deleting $(BIN_NAME) symlink"
	@$(RM) $(BIN_NAME)
	@echo "Deleting directories"
	@$(RM) -r $(BUILD_PATH)
	@$(RM) -r $(BIN_PATH)

# checks the executable and symlinks to the output
.PHONY: all
all: $(BIN_PATH)/$(BIN_NAME)
	@echo "Making symlink: $(BIN_NAME) -> $<"
	@$(RM) $(BIN_NAME)
	@ln -s $(BIN_PATH)/$(BIN_NAME) $(BIN_NAME)

# Creation of the executable
$(BIN_PATH)/$(BIN_NAME): $(OBJECTS)
	@echo "Linking: $@"
	$(CXX) $(OBJECTS) -o $@ ${LIBS}

# Add dependency files, if they exist
-include $(DEPS)

# Source file rules
# After the first compilation they will be joined with the rules from the
# dependency files to provide header dependencies
$(BUILD_PATH)/%.o: $(SRC_PATH)/%.$(SRC_EXT)
	@echo "Compiling: $< -> $@"
	$(CXX) $(CXXFLAGS) $(INCLUDES) -MP -MMD -c $< -o $@