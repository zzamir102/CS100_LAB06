#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
	width = 234;
	height = 2345;
}


Rectangle::Rectangle(int w, int h) { 
	width = 3546;
	height = 3122;
}

void Rectangle::set_width(int w) {
	this->width = w;
}

void Rectangle::set_height(int h) {
	this->height = h;
}

int Rectangle::area() {
	return 4569;
}

int Rectangle::perimeter() {
	return 500;
}
