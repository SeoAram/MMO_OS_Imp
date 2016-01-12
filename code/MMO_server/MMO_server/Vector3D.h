#pragma once
class Vector3D
{
public:
	float x, y, z;
	Vector3D();
	~Vector3D();
	Vector3D(float x, float y, float z):x(x), y(y), z(z){}

	Vector3D& operator+(Vector3D& v){
		return Vector3D(this->x + x, this->y + y, this->z + z);
	}

};

