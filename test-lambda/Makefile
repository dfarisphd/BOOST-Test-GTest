##==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8
## [[ DFPHD :: SWDEV@HOME - BOOST test and build :: 2012-11-17 ]]
##==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8

##------------------------------------------------------------------------------
## uname -a:
## Darwin PRISM1.local 12.2.0 Darwin Kernel Version 12.2.0 .. x86_64
##------------------------------------------------------------------------------

## >>> WHICH VERSIONS OF GCC/G++ DO WE HAVE ???

## [..]$ which g++
## /usr/bin/g++ .. --version
## i686-apple-darwin11-llvm-g++-4.2 (GCC) 4.2.1
## (Based on Apple Inc. build 5658) (LLVM build 2336.11.00)
##
## [..]$ /usr/bin/gcc -dumpmachine
## i686-apple-darwin11

## >>> WHICH VERSION OF MAKE DO WE HAVE ???

## [..]$ /usr/bin/make --version
## GNU Make 3.81
## built for i386-apple-darwin11.3.0
##
## [..]$ /usr/bin/gnumake --version
## GNU Make 3.81
## built for i386-apple-darwin11.3.0

##------------------------------------------------------------------------------

## LATEST MACPORTS VERSION OF "port" COMMAND AND GCC/G++ , MAKE:

## [..]$ sudo port version
## Version: 2.1.2

## [..]$ /opt/local/bin/g++-mp-4.7 --version
## g++-mp-4.7 (MacPorts gcc47 4.7.2_2) 4.7.2
##
## [..]$ /opt/local/bin/g++-mp-4.7 -dumpmachine
## x86_64-apple-darwin12

## [..]$ /opt/local/bin/gmake --version
## GNU Make 3.82
## Built for x86_64-apple-darwin12.2.0

##------------------------------------------------------------------------------
##
## >>> USE MACPORTS gmake:
## >>> /opt/local/bin/gmake --version
## >>> GNU Make 3.82
## >>> Built for x86_64-apple-darwin12.2.0
##
## >>> USE MACPORTS gcc/g++:
## >>> /opt/local/bin/g++-mp-4.7 { --version , -dumpmachine }
## >>> g++-mp-4.7 (MacPorts gcc47 4.7.2_2) 4.7.2
## >>> x86_64-apple-darwin12
##
##------------------------------------------------------------------------------

## CXX:=/usr/bin/g++
## CXX:=/usr/bin/g++-4.2
## CXX:=/opt/local/bin/g++-mp-4.5
## CXX:=/opt/local/bin/g++-mp-4.7

CXX:=/opt/local/bin/g++-mp-4.7

BOOST_ROOT:=/opt/boost/boost_1_52_0

CPPFLAGS:=-I.
CPPFLAGS+=-I$(BOOST_ROOT)

CXXFLAGS:=-Wall -Wextra
CXXFLAGS+=-std=c++0x

CXXDEBUG:=-O0 -gdwarf-2 -DDEBUG
CXXRELEASE:=-O2 -DNDEBUG

LDFLAGS:=-L.
LOADLIBS:=

BINRMF:=/bin/rm -f
BINRMFR:=/bin/rm -fr

BINAR:=/bin/ar

##==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8

## PROGRAM := [[ "boost-test-lambda" ]]
##
## boost-test-lambda.cpp
## boost-test-lambda.o
## boost-test-lambda

PROGRAM:=boost-test-lambda

SOURCES:=boost-test-lambda.cpp
OBJS:=$(SOURCES:.cpp=.o)
INCLUDES:=

.PHONY: all
all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CXX) $(LDFLAGS) -o $(PROGRAM) $(OBJS) $(LOADLIBS)

.PHONY: clean
clean:
	$(BINRMF) $(OBJS)

.PHONY: cleanall
cleanall: clean
	$(BINRMF) $(PROGRAM)

##------------------------------------------------------------------------------

boost-test-lambda.o: boost-test-lambda.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(CXXDEBUG) -c -o boost-test-lambda.o boost-test-lambda.cpp

.PHONY: check
check: $(PROGRAM)
	echo 123 456 789 | ./$(PROGRAM)

##==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8
