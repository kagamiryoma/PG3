#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spFuncTable[])() = {
		&Enemy::Approach, // �ڋ�
		&Enemy::Shoot,    // �ˌ�
		&Enemy::Leave     // ���E
};

void Enemy::Update()
{
	(this->*spFuncTable[static_cast<size_t>(phase_)])();

}

void Enemy::Approach() {
	printf("�ڋ�\n");

	// �ˌ��t�F�[�Y�ɐ؂�ւ���
	phase_ = Phase::Shoot;
}

void Enemy::Shoot() {
	printf("�ˌ�\n");

	// ���E�t�F�[�Y�ɐ؂�ւ���
	phase_ = Phase::Leave;
}

void Enemy::Leave() {
	printf("���E");
}