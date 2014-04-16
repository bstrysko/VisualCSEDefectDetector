LNAME = VisualCSEDefectDetector

# Source Files
SRC = \
	src/Frame/Frame.cpp \
	src/Frame/HSVFrame.cpp \
	src/Frame/RGBFrame.cpp \
	src/Frame/TextFrame.cpp \
	src/Frame/ThreshFrame.cpp

OBJ = $(SRC:.cpp=.o)
LIBNAME = lib$(LNAME).so
OUT = $(LIBNAME).1
REALNAME = $(OUT)

# Include Directories
INCLUDES = -I./include/

CCFLAGS = -g -fPIC
CCC = g++

# Library Paths
LIBS =

# compile flags
LDFLAGS = -g
 
.SUFFIXES: .cpp
 
all: build

build: $(OUT)
 
$(OUT): $(OBJ)
	$(CCC) -shared -Wl,-soname,$(OUT) -o $(REALNAME) $(OBJ) 

.cpp.o:
	$(CCC) $(INCLUDES) $(CCFLAGS) -c $< -o $@ 

install: build
	mkdir -p /usr/include/$(LNAME)/
	cp include/* /usr/include/$(LNAME)/
	cp $(REALNAME) /usr/lib/
	ln -sf /usr/lib/$(REALNAME) /usr/lib/$(LIBNAME)

clean:
	rm -f $(OBJ) $(OUT)