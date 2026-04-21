#pragma once

class C_Enemy
{
public:

	C_Enemy();
	~C_Enemy();

	void Init();
	void Update();
	void Draw();	
	void SetTex(KdTexture* tex);
	void Hit();

	bool			GetAlive();
	Math::Vector2	GetPos();
	float			GetRadius();


private:

	const float		m_moveSpeed	 =	5.0f;
	const float     m_radius	 =	32.0f;

	KdTexture*		m_tex;
	Math::Vector2	m_pos;
	Math::Vector2	m_move;
	Math::Matrix	m_mat;
	bool			m_alive;
	
};