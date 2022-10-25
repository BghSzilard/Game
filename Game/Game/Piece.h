#pragma once
#include <cstdint>
#include <iostream>
class Piece
{
public:
	enum class Color: uint8_t
	{
		Dark,
		Light
	};
	enum class Shape: uint8_t
	{
		Round,
		Square
	};
	enum class Height : uint8_t
	{
		Short,
		Tall
	};
	enum class Body : uint8_t
	{
		Full,
		Hollow
	};
public:
	Piece(Color color, Shape shape, Height height, Body body);

	Color GetColor() const;
	Shape GetShape() const;
	Height GetHeight() const;
	Body GetBody() const;
	
	friend std::ostream& operator<<(std::ostream& out, const Piece& p);

private:
	Color m_color;
	Shape m_shape;
	Height m_height;
	Body m_body;
};

