/*

MIT License

Copyright (c) 2023 izal

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
#include <stdio.h>
#include <conio.h>

int main() {
	int a;
	int b;
	int c;
	int d;
	int increase;
	int decrease;
	int equal = 2;
	int equality = 3;
	int NotEqual = 2;
	int AddAssign;
	int SubtAssign;
	int logicOR = 3;
	int logicAND = 3;
	int bitw = 2;
	int bitwAND;
	int bitwOR;
	// To add two numbers
	a = 2+4;
	// To subtract two numbers
	b = 4-2;
	// To multiply two numbers
	c = 5*2;
	// To divide two numbers
	d = 6/2;
	// This is a special operator that simply ments the value by 1. You will see this used later in this book when loops are discussed.
	increase++;
	decrease = 3;
	decrease--;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n\n", d);
	
	printf("increase = %d\n", increase);
	printf("decrease = %d\n", decrease);
	printf("equal = %d\n", equal);
	
	// Double equals adalah operator kesetaraan. Ia bertanya "apakah yang di kiri sama dengan yang di kanan?" Ini sering digunakan dalam pernyataan if (yang akan Anda lihat di bab selanjutnya!)
	if(equality == 3) {
		printf("equality its 3\n");
	}
	// Tidak sama dengan
	if(NotEqual != 3) {
		printf("No Equal its 3\n");
	}
	// Tambahkan lalu tetapkan
	AddAssign+=1;
	printf("Add then assign = %d\n", AddAssign);
	// Kurangi lalu tetapkan
	SubtAssign-=1;
	printf("Add then assign = %d\n", SubtAssign);
	// Ini adalah operator OR yang logis.
	if(logicOR == 1 || logicOR == 3) {
		printf("logicOR its 3\n");
	}
	// Ini adalah operator AND yang logis
	if(logicAND == 3 && logicAND == 3) {
		printf("logicAND its 3\n");
	}
	// Pergeseran bitwise ke kanan
	if(bitw >> 1) {
		printf("Bitw Greate then 1\n");
	}
	// Pergeseran bitwise ke Kiri
	if(bitw << 1) {
		printf("Bitw Less then 1\n");
	}
	bitwAND = 2&2;
	printf("Bitwise AND = %d\n", bitw);
	bitwOR = 2|2;
	printf("Bitwise OR = %d\n", bitw);
	
	getch();
	return 0;
}
