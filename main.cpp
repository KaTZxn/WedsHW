#include <iostream>
/*第１問
x, y座標を持つ構造体Vector2を、
作ってください。
x, yはpublicで作成し、外部で値を設定して、
値が表示されることを確認してください。

第２問
x, y座標を持つ構造体Vector2を、
作ってください。
x, yはprivateで作成し、関数を介して値を設定できるようにして、
値が表示されることを確認してください。

第３問
x, y, z座標を持つ構造体Vector3を
作ってください。
x, y, zはprivateで作成し、関数を介して値を設定できるようにして、
値が表示されることを確認してください。*/
int Q1();
int Q2();
int Q3();


int main()
{
	int Question = 0;

	printf("問題の番号\n");
	scanf_s("%d", &Question);
	switch (Question)
	{
		case(1):
			Q1();
		case(2):
			Q2();
		case(3):
			Q3();
		default:
			break;

	}
	
}

struct Vector2
{
public:
	float x, y;
};

struct PrivateVector2
{
public:
	float	GetX() { return x; }
	float	GetY() { return y; }
	void	SetX(float _x) { x = _x; }
	void	SetY(float _y) { y = _y; }
private:
	float x, y;
};

struct Vector3
{
public:
	float	GetX() { return x; }
	float	GetY() { return y; }
	float	GetZ() { return z; }
	void	SetX(float _x) { x = _x; }
	void	SetY(float _y) { y = _y; }
	void	SetZ(float _z) { z = _z; }
private:
	float x, y, z;
};

int Q1()
{
	Vector2 vector2;

	float x, y;

	printf("X座標を入力してください。\n");
	scanf_s("%f", &x);
	printf("Y座標を入力してください。\n");
	scanf_s("%f", &y);

	vector2.x = x;
	vector2.y = y;

	printf("x: %f\ny: %f\n",vector2.x, vector2.y);
	return 0;
}

int Q2()
{
	PrivateVector2 privatevector2;

	float x, y;

	printf("X座標を入力してください。\n");
	scanf_s("%f", &x);
	printf("Y座標を入力してください。\n");
	scanf_s("%f", &y);

	privatevector2.SetX(x);
	privatevector2.SetY(y);

	printf("x: %f\ny: %f\n", privatevector2.GetX(), privatevector2.GetY());
	return 0;
}

int Q3()
{
	Vector3 vector3;

	float x, y,z;

	printf("X座標を入力してください。\n");
	scanf_s("%f", &x);
	printf("Y座標を入力してください。\n");
	scanf_s("%f", &y);
	printf("Z座標を入力してください。\n");
	scanf_s("%f", &z);

	vector3.SetX(x);
	vector3.SetY(y);
	vector3.SetZ(z);

	printf("x: %f\ny: %f\nz: %f\n", vector3.GetX(), vector3.GetY(), vector3.GetZ());
	return 0;
}
