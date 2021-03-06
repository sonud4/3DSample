/**
 * @file EnemyBase.cpp
 * @Author 園田翔大
 * @date 2021/11/29 作成
 * @brief 敵の座標に関する処理
 */
#include "EnemyBase.h"

EnemyBase::EnemyBase()
	:m_targetPos(0, 0, 0)
{
	m_collisionType = COLLISION_ENEMY;
}

EnemyBase::~EnemyBase()
{

}

void EnemyBase::Draw()
{
	SHADER->SetWorld(
		DirectX::XMMatrixScaling(
			m_size.x, m_size.y, m_size.z)
		* DirectX::XMMatrixTranslation(
			m_pos.x, m_pos.y, m_pos.z));

	m_pCube->Draw();
}

void EnemyBase::TargetPos(DirectX::XMFLOAT3 pos)
{
	m_targetPos = pos;
}


void EnemyBase::EnemyStop()
{

}