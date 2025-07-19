# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -g -Iinclude

# Directories
SRC_DIR = src
OBJ_DIR = obj
BUILD_DIR = build

# Files
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SOURCES))
EXECUTABLE = $(BUILD_DIR)/programa

# Default target
all: $(BUILD_DIR) $(OBJ_DIR) $(EXECUTABLE)

# Build executable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create directories if not exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean generated files
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
	rm -rf $(OBJ_DIR) $(BUILD_DIR)

.PHONY: all clean
