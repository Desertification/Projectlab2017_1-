io:
    temp sensor:
        I2C SCL p27
        I2C SDA p28
        
    potmeter:
        pot1 p19
        
    joystick start comm:
        center p 14
    
    set destination joystick
        down    p12
        left    p13
        center  p14
        up      p15
        right   p16   
    
    LCD C12832A1Z:
        MOSI    p5
        RESET:  p6
        SCK:    p7
        A0:     p8
        nCS:    p11
        
    speaker:
        pwm
        p26
        
    led:
        pwm
        r   p23
        g   p24
        b   p25

protocol:
o SOF       (16bit):     start of frame (0xAA 0x55) 
o NUM       (8bit):     number of ID’s visited 
o IDD       (8bit):     ID destination mbed (100-116) 
o PWM       (8bit):     PWM duty cycle (0 – 255) (0% – 100%) 
o ID0–IDn   (n x 8bit): list of visited mbeds 
o TMP0-TMPn (n x16bit): 0bSSSSSXXX 0bXXXXXXXX (11bit two’s complement, sign extended) 
        temperature (-55°C to 125°C with resolution of 0,125°C) 
o CRC       (8bit):     0b00XXXXXX CRC6 checksum (x6 + x4 + x + 1) 
        checksum on “NUM IDD PWM ID0…IDn TMP0…TMPn” 
o EOF       (16bit):    end of frame (0x55 0xAA)

Ethernet:
    port 4000

statemachine:
    Init:
        select destination
            joystick up down
            show on lcd
            confirm with middle press
            send node?

    idle:
        accept connections (listen)
        
    process data:
        check packet
            CRC6
            PWM data to led
            average of temp to lcd in degC
            play sound
                n sounds = visited mbeds
                array of tones, delays, durations
            detect end
        
    send packet:
        get data
        buid packet
        to next mbed (selected)


general:
    how to detect end?
        NUM byte
    
ethernet interface receive:
    keep reading until start and endframe is found
    if startframe is found again restart search for end