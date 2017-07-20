This is an simple library for Arduino that makes possible to quickly output numbers in hexadecimal or binary format.
Just use functions hex() or bin() to get result. Example.

	// Arduino code example demonstrating usage of functions hex and bin.
	#include <SoftwareSerial.h>
	#include <hex.h>

	void setup(){
		Serial.begin(9600); // I took 9600 by default (for example). Change it, if you want another value
		// ..... some code ..... //
		Serial.println("Number 78 in hexadecimal is: 0x" + hex((byte) 78)); // Testing string output of hex function for byte type
		// ..... some more code ..... //
		unsigned int a = random(65536); // Say this set a = 35434
		Serial.println("a in hexadecimal is: 0x" + hex(a)); // Nothing to explain
		Serial.println("a in binary is: 0b" + bin(a)); // Nothing to explain
		// ..... some more code ..... //
	}

	void loop(){
		// ..... more and more code ..... //
		Serial.println("Binary : hexadecimal values in range [0,645243)"); // Say we want to print values from 0 to 645243 in binary and hexadecimal formats
		for (long i = 0; i<645243; ++i) // Loop for values
			Serial.println("\t0b"+bin(i)+"\t:\t0x"+hex(i)); // Printing string
		// ..... finally code ..... //
	}
	
	If we start code, the output will look like this
	OUTPUT >
		# some codes output #
		Number 78 in hexadecimal is: 0x4E
		# some more codes output #
		a in hexadecimal is: 0x8A6B
		a in binary is: 0b‭1000101001101010‬
		# some more codes output #
		# more and more outputs #
		Binary : hexadecimal values in range [0,645243)
		0b00000000000000000000000000000000:0x00000000
		0b00000000000000000000000000000001:0x00000001
		// ..... bla bla bla ..... //
		0b‭00000000000010011101100001111010‬:0x000‭9D87A‬
		# finally output #
		
///   UPDATES OF FILE   ///

In last updates of library file fixed some errors and now it's ready for use. I also added 2 new functions.
char charToByte(const char& by); // Returns the real number from char number. Example charToByte('5') -> 5 or charToByte('a') -> 0xA
void fromString(const String& str,byte* ret) // Converts hexadecimal String of byte to byte. Example fromString("5D") -> 93

// Thanks a lot using my library //

If my code isn't working please contact to me to fix any error in that. Email: arsen.gharagyozyn.96@gmail.com
