#include "Shape.h"

Shape::Shape() : Shape(1) {
	// this default constructor is using the custom constructor 
}

Shape::Shape(double width) : width_(width) {

}

double Shape::getWidth() const {
	return width_;
}