#include "renderer/lighting/PointLight.h"

using namespace agate::renderer;

PointLight::PointLight()
{
	SetRange(2500.f);
}

PointLight::~PointLight()
{
}

float PointLight::GetLinear()
{
	return linear;
}

float PointLight::GetQuadratic()
{
	return quadratic;
}

float PointLight::GetRange()
{
	return range;
}

void PointLight::SetLinear(float linear)
{
	this->linear = linear;
}

void PointLight::SetQuadratic(float quadratic)
{
	this->quadratic = quadratic;
}

void PointLight::SetRange(float range)
{
	this->range = range;
	linear = 4.5f / range;
	quadratic = 75.0f / (range * range);
}
