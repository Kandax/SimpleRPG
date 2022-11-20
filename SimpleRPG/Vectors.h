#pragma once
#pragma once
struct Vec2 {

	float x, y;

	Vec2()
		: x(0.f), y(0.f) { }
	Vec2(float x, float y)
		: x(x), y(y) { }

	Vec2 add(const Vec2& other) const {
		return Vec2(x + other.x, y + other.y);
	}


	Vec2 operator+(const Vec2& other) const{
		return add(other)
	}

	Vec2 substract(const Vec2& other) const {
		return Vec2(x - other.x, y - other.y);
	}

	Vec2 operator-(const Vec2& other) const {
		return substract(other);
	}

	Vec2 multiply(const Vec2& other) const {
		return Vec2(x * other.x, y * other.y);
	}

	Vec2 operator*(const Vec2& other) const {
		return multiply(other);
	}

	Vec2 divide(const Vec2& other) const {
		return Vec2(x / other.x, y / other.y);
	}

	Vec2 operator/(const Vec2& other) const {
		return divide(other);
	}

	Vec2 equalTo(const Vec2& other) const {
		if (x == other.x && y == other.y) {
			return true;
		}
		else {
			return false;
		}
	}

	Vec2 operator==(const Vec2& other) const {
		return equalTo(other);
	}

	
};
struct Vec3 {
	float x, y, z;
	Vec3()
		: x(0.f), y(0.f), z(0.f) { }
	Vec3(float x, float y, float z)
		:x(x), y(y), z(z) { }

	Vec3 add(const Vec3& other) const {
		return Vec3(x + other.x, y + other.y, z + other.z);
	}


	Vec3 operator+(const Vec3& other) const {
		return add(other)
	}

	Vec3 substract(const Vec3& other) const {
		return Vec3(x - other.x, y - other.y, z - other.z);
	}

	Vec3 operator-(const Vec3& other) const {
		return substract(other);
	}

	Vec3 multiply(const Vec3& other) const {
		return Vec3(x * other.x, y * other.y, z * other.z);
	}

	Vec3 operator*(const Vec3& other) const {
		return multiply(other);
	}

	Vec3 divide(const Vec3& other) const {
		return Vec3(x / other.x, y / other.y, z / other.z);
	}

	Vec3 operator/(const Vec3& other) const {
		return divide(other);
	}

	Vec3 equalTo(const Vec3& other) const {
		if (x == other.x && y == other.y && z == other.z) {
			return true;
		}
		else {
			return false;
		}
	}

	Vec3 operator==(const Vec3& other) const {
		return equalTo(other);
	}


};
struct Vec4 {
	float x, y, z, w;
	Vec4()
		: x(0.f), y(0.f), z(0.f), w(0.f) { }

	Vec4(float x, float y, float z, float w)
		:x(x), y(y), z(z), w(w) { }

	Vec4 add(const Vec4& other) const {
		return Vec4(x + other.x, y + other.y, z + other.z, w + other.w);
	}


	Vec4 operator+(const Vec4& other) const {
		return add(other)
	}

	Vec4 substract(const Vec4& other) const {
		return Vec4(x - other.x, y - other.y, z - other.z, w - other.w);
	}

	Vec4 operator-(const Vec4& other) const {
		return substract(other);
	}

	Vec4 multiply(const Vec4& other) const {
		return Vec4(x * other.x, y * other.y, z * other.z, w * other.w);
	}

	Vec4 operator*(const Vec4& other) const {
		return multiply(other);
	}

	Vec4 divide(const Vec4& other) const {
		return Vec4(x / other.x, y / other.y, z / other.z, w / other.w);
	}

	Vec4 operator/(const Vec4& other) const {
		return divide(other);
	}

	Vec4 equalTo(const Vec4& other) const {
		if (x == other.x && y == other.y && z == other.z && w == other.w) {
			return true;
		}
		else {
			return false;
		}
	}

	Vec4 operator==(const Vec4& other) const {
		return equalTo(other);
	}


};