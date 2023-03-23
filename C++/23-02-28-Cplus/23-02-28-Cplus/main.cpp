#include <iostream>

#include<iostream>


using namespace std;

struct Car
{
	enum
	{
        ID_LEN = 20, 
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP  = 10,
        BRK_STEP  = 10

	};
	char gamerID[ID_LEN]; // ������ ID
	int fuelGauge; //���ᷮ 
	int curSpeed; //����ӵ�
	void ShowCarState();
	void Aceel();
	void Break();

	void Car::ShowCarState()
	{
		cout << "������ID : " << gamerID << endl;
		cout << "���ᷮ" << fuelGauge << "%" << endl;
		cout << "����ӵ�: " << curSpeed << "Km/s" << endl << endl;


	}
	void Car::Aceel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;

		}
		curSpeed += ACC_STEP;
	}
	
	void Car::Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;


		}

		curSpeed -= BRK_STEP;

	}

};

int main()
{
	Car run99 = { "run", 100, 0 };
	
	run99.Aceel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}