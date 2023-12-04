// code name: AnalogIn.h
//  CPE 422 HW 8 problem 2
// this code is the header file for class AnalogIn

class AnalogIn {
	private:
		unsigned int number;
	public:
		AnalogIn();
		AnalogIn(unsigned int n);
		virtual unsigned int getNumber() { return number; }
		virtual void setNumber(unsigned int n);
		virtual int readAdcSample();
		virtual ~AnalogIn();
};
