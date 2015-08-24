#include "CharaMateStorage.h"

void CharaMateStorage::load()
{
	list.setsize(CharaType::num);

	list[CharaType::a_type].load("data/a_type.pmd");
}

si3::ModelData & CharaMateStorage::get_model_data(CharaType::CharaTypeEnum type)
{
	return list[type];
}
