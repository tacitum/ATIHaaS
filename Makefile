files=main.c

ATIHaaS:
	mkdir bin
	gcc -Wall $(files) -O3 -o bin/ATIHaaS.bin

install:
	cp bin/ATIHaaS.bin /usr/local/bin/

uinstall:
	rm /usr/local/bin/ATIHaaS.bin

clean:
	rm -fr bin
