#include "Character.h"

void Character::init(CharaType::CharaTypeEnum chara_type, si3::ModelData & model_data, float x, float z)
{
	model.model_data(model_data);
	model.x(x);
	model.y(0.0f);
	model.z(z);
	move_speed = 0.06f;
}

void Character::suggest_skill_basic(float vx, float vz)
{
	// todo
}
void Character::suggest_skill_util(float vx, float vz)
{
	// todo
}
void Character::suggest_skill_spec(float vx, float vz)
{
	// todo
}

void Character::invoke_skill_basic(float vx, float vz)
{
	// todo
}
void Character::invoke_skill_util(float vx, float vz)
{
	// todo
}
void Character::invoke_skill_spec(float vx, float vz)
{
	// todo
}

void Character::move(const float vx, const float vz)
{
	const float len = compute_len(vx, vz);
	if (len < 0.00000000001f) return;

	const float percent = len / compute_max_len(vx, vz);
	const float now_move_speed = move_speed * percent;

	si3::Coor3 basic_vec;
	basic_vec.x = vx;
	basic_vec.y = 0.0f;
	basic_vec.z = vz;

	si3::Coor3 normal_vec = si3::normalize_vector(basic_vec);

	model.x(model.x() + now_move_speed * normal_vec.x);
	model.z(model.z() + now_move_speed * normal_vec.z);
}


void Character::draw() const
{
	si3::Manager::register_display_object(model);
}


float Character::get_x() const
{
	return model.x();
}
float Character::get_z() const
{
	return model.z();
}




float Character::compute_len(const float vx, const float vz)
{
	return sqrt(vx*vx + vz*vz);
}

float Character::compute_max_len(const float vx, const float vz)
{
	float multi = vx / 1000.0f;
	if (abs(vx) < abs(vz))
	{
		multi = vz / 1000.0f;
	}

	float x = vx * multi;
	float z = vz * multi;

	return compute_len(x, z);
}

