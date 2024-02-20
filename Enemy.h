#pragma once

class Enemy {
public:

	void Update();

private:

	enum class Phase {
		Approach,
		Shoot,
		Leave,
	};

private:
	// �ڋ�
	void Approach();

	// �ˌ�
	void Shoot();

	// ���E
	void Leave();

	Phase phase_ = Phase::Approach;

	// �����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* spFuncTable[])();

	
};