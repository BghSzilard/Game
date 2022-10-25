#include "Piece.h"

Piece::Piece(Color color, Shape shape, Height height, Body body)
	:m_color(color),
	m_shape(shape),
	m_height(height),
	m_body(body)
{

}

Piece::Color Piece::GetColor() const
{
	return Color();
}

Piece::Shape Piece::GetShape() const
{
	return Shape();
}

Piece::Height Piece::GetHeight() const
{
	return Height();
}

Piece::Body Piece::GetBody() const
{
	return Body();
}

std::ostream& operator<<(std::ostream& out, const Piece& p)
{
	return out << static_cast<int>(p.GetColor())
		<< static_cast<int>(p.GetShape())
		<< static_cast<int>(p.GetHeight())
		<< static_cast<int>(p.GetBody());
	// // O: insert return statement here
}
