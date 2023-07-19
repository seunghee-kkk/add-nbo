#include <stdio.h>
#include <arpa/inet.h>

void add(uint32_t val1, uint32_t val2) {
	
	val1 = ntohl(val1); 
	val2 = ntohl(val2);  

	uint32_t result = val1 + val2;
    
	printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", val1, val1, val2, val2, result, result);
	
}
