#ifndef __TOY_HPP
#define __TOY_HPP

class TOY
{


public:

	TOY();

	virtual void assembleThetoy(void) = 0;
	virtual void processThetoy(void) = 0;
	virtual void testThetoy(void) = 0;
	virtual void paintThetoy(void) = 0;

	virtual ~TOY();
};


class CAR : public TOY
{

public:

	CAR();

	virtual void assembleThetoy(void);
	virtual void processThetoy(void);
	virtual void testThetoy(void);
	virtual void paintThetoy(void);

	virtual ~CAR();
};

class BIKE : public TOY
{

public:

	BIKE();

	virtual void assembleThetoy(void);
		virtual void processThetoy(void);
		virtual void testThetoy(void);
		virtual void paintThetoy(void);

	virtual ~BIKE();

};

#endif
