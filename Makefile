CXX      = clang++
CXXFLAGS = -g3 -std=c++11 -Wall -Wextra 
LDFLAGS  = -g3

unit_test: unit_test_driver.o
	$(CXX) $(CXXFLAGS) $^
