#pragma once
class Player
{
public:
	Player();
	~Player();
	void checkInventory();
	void setCloth();
	int getCloth();
	void setBone();
	int getBone();

private:
	int cloth = 0;
	int bone = 0;
};

