CXX = g++
CXXFLAGS = -std=c++11 -Wall
LDFLAGS =

# List of programs 
PROGRAMS = helloworld

# List of source files 
SRCS = helloworld.cpp

# List of object files (automatically generated from SRCS)
OBJS = $(SRCS:.cpp=.o)

# Targets
all: $(PROGRAMS)

# Build each program
$(PROGRAMS): %: %.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Dependencies
$(OBJS): 

# Clean up
clean:
	rm -f $(PROGRAMS) $(OBJS)
