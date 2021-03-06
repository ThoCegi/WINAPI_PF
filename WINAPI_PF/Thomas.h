#pragma once

class Thomas : public Character
{
private:

public:
	Thomas();
	~Thomas();

	void CreateThomas(Vector2 pos);

	virtual void Collision(vector<T_Object*> objects) override;
	virtual void CharacterCollision(T_Object* character) override;
	virtual void ObstacleCollision(T_Object* obstacle) override;

	virtual void Update() override;
	virtual void Render(HDC hdc) override;
	virtual void Jump() override;

	virtual void InitAgain() override;

};



