#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse{
	private:
		int horseNum;
		int position;
	public:
		Horse();
		Horse(int number, int pos);
		void setNumber(int number);
		void setPosition(int position);
		int getNumber();
		int getPosition();
		void advance();
};
#endif
