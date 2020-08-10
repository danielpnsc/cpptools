#pragma once

template<typename T, size_t S>
class Array
{
public:
	size_t constexpr size() const { return S; }

	T& operator[](size_t index) { return data[index]; }
	const T& operator[](int index) const { return data[index]; }
private:
	T data[S];
};