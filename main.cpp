#include "Enemy.h"
#include <stdio.h>

int main() {
	Enemy*enemy1 = new Enemy();
	Enemy* enemy2 = new Enemy();
	Enemy* enemy3 = new Enemy();
	enemy1->Draw();
	enemy2->Draw();
	enemy3->Draw();
	printf("---\n");
	enemy2->SetDeath();
	printf("“Gˆê‘ÌŽ€‚ñ‚¾\n");
	enemy1->Draw();
	enemy2->Draw();
	enemy3->Draw();
	printf("---\n");
	enemy1->Update();
	enemy2->Update();
	enemy3->Update();
	printf("---\n");
	enemy1->Draw();
	enemy2->Draw();
	enemy3->Draw();
	printf("---\n");

	delete enemy1;
	delete enemy2;
	delete enemy3;
	return 0;
}