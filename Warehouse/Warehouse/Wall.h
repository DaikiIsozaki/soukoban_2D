#pragma once
//|*******|//
//|include|//
//|*******|//
#include "Object.h"

//|*******|//
//|define |//
//|*******|//

class Wall :public Object
{
public:
	Wall() { m_ghandle = LoadGraph("asset/Wall.png"); };
	~Wall() { 
		DeleteGraph(m_ghandle); 
	};

	void Init();
	void Uninit();
	void Update();
	void Draw();
	void Move(int move_x, int move_y) {};
	void Create(int x, int y, int sizeX, int sizeY);
	void Destroy();

	int Get_PosX() { return _PositionX; };
	int Get_PosY() { return _PositionY; };

	OBJTYPE Get_Type() { return WALL; };

private:
	int m_ghandle = 0;

};
