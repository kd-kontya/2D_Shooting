#pragma once
#include"Bullet.h"

class Scene;

class C_Player
{
public:

	C_Player();
	~C_Player();

	void Init();
	void Update(POINT mousePos);
	void Draw();
	void HitBulletEnemy();

	void SetTex(KdTexture* tex);

	void SetOwner(Scene* owner);

private:

	Scene* m_owner;

	static const int m_bulletNum = 100;
	C_Bullet m_bullet[m_bulletNum];
	KdTexture m_bulletTex;

	const float m_moveSpeed = 5.0f;

	KdTexture* m_tex;
	Math::Vector2 m_pos;//ç¿ïW
	Math::Matrix m_mat;
};