#pragma once

#include "../rtweekend.h"

class aabb
{
public:
	aabb() {}
	aabb(const point3 &a, const point3 &b) : minimum(a), maximum(b) {}

	point3 min() const { return minimum; }
	point3 max() const { return maximum; }

	bool hit(const ray &r, double t_min, double t_max) const;

	void tostring() const
	{
		printf("minimum: ");
		minimum.tostring();
		printf("maximum: ");
		maximum.tostring();
	}

public:
	point3 minimum;
	point3 maximum;
};

// merge two aabb
aabb surrounding_box(const aabb &box0, const aabb &box1);
