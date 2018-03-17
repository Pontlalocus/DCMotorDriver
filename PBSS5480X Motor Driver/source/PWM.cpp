#include 

class 4WhellPWM
{
public:
	int setPins( int pin1, int pin2, int pin3, int pin4 );
	int setDuty( unsigned short int PWMDuty1, unsigned short int PWMDuty2, unsigned short int PWMDuty3, unsigned short int PWMDuty4 );
	int getPWMPin1( void );
	int getPWMPin2( void );
	int getPWMPin3( void );
	int getPWMPin4( void );
	unsigned short int int getPWMDuty1( void );
	unsigned short int int getPWMDuty2( void );
	unsigned short int int getPWMDuty3( void );
	unsigned short int int getPWMDuty4( void );
	4WhellPWM ();
	~4WhellPWM();

private:
	int PWMpin1, PWMpin2, PWMpin3, PWMpin4;
	unsigned short int PWMDuty1, PWMDuty2, PWMDuty3, PWMDuty4;
	
	
};


// Functions Definition including the constructor and destructor
4WheelPWM::4WheelPWM(void)
{
	// Class initialization setting all PWMs to 0
	PWMpin1=PWMpin2=PWMpin3=PWMpin4=0;
	PWMDuty1=PWMDuty2=PWMDuty3=PWMDuty4=0;
	
	
}