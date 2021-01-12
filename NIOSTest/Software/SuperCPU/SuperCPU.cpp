
#include <Arduino.h>
#include <altera_avalon_pio_regs.h>

void setup() {
    Serial.begin(9600); //Set Baudrate with "New Processor"
}

void loop() {
    String test = "hi";
    
    test = "test";
    
    test =
}

int add(int a, int b)
{
    return b + a + b;
}

#define IOWR(BASE, REGNUM, DATA) \
__builtin_stwio (__IO_CALC_ADDRESS_NATIVE ((BASE), (REGNUM)), (DATA))

    void digitalWrite(uint8_t pin, uint8_t val)
{
    #if PIO_2_BASE
    if(pin < 32){
        if(val) IOWR_ALTERA_AVALON_PIO_SET_BITS(PIO_0_BASE, 1 << pin);
        else IOWR_ALTERA_AVALON_PIO_CLEAR_BITS(PIO_0_BASE, 1 << pin);
    }
    else{
        if(val) IOWR_ALTERA_AVALON_PIO_SET_BITS(PIO_2_BASE, 1 << (pin-32));
        else IOWR_ALTERA_AVALON_PIO_CLEAR_BITS(PIO_2_BASE, 1 << (pin-32));
    }
    #else
    if(val) IOWR_ALTERA_AVALON_PIO_SET_BITS(PIO_0_BASE, 1 << pin);
    else IOWR_ALTERA_AVALON_PIO_CLEAR_BITS(PIO_0_BASE, 1 << pin);
    
    #endif
}