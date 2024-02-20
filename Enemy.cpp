#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spFuncTable[])() = {
		&Enemy::Approach, // 接近
		&Enemy::Shoot,    // 射撃
		&Enemy::Leave     // 離脱
};

void Enemy::Update()
{
	(this->*spFuncTable[static_cast<size_t>(phase_)])();

}

void Enemy::Approach() {
	printf("接近\n");

	// 射撃フェーズに切り替える
	phase_ = Phase::Shoot;
}

void Enemy::Shoot() {
	printf("射撃\n");

	// 離脱フェーズに切り替える
	phase_ = Phase::Leave;
}

void Enemy::Leave() {
	printf("離脱");
}