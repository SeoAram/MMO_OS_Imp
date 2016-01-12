#pragma once
#include "stdafx.h"
class GameObject
{
private:
	Vector3D m_vecPos;
	Vector3D m_vecDir;
	unsigned int m_iId;
public:
	GameObject();
	GameObject(float x, float y, float z) :m_vecPos(x, y, z){}
	~GameObject();
};

