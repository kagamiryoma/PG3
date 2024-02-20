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
	// 接近
	void Approach();

	// 射撃
	void Shoot();

	// 離脱
	void Leave();

	Phase phase_ = Phase::Approach;

	// メンバ関数ポインタのテーブル
	static void (Enemy::* spFuncTable[])();

	
};