CXX = g++
CXXFLAGS = -O2 -Wall


all: asn1_a asn1_b

asn1_a: asn1_a.cpp
	$(CXX) $(CXXFLAGS) -o asn1_a asn1_a.cpp

asn1_b: asn1_b.cpp
	$(CXX) $(CXXFLAGS) -o asn1_b asn1_b.cpp

clean:
	rm -f asn1_a asn1_b *.o