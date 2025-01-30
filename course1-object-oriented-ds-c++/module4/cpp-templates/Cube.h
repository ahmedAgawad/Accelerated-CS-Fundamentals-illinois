#pragma once
#include <iostream>

namespace uiuc {
	class Cube {
		public :
			Cube(double length);
			Cube(const Cube &obj);

			Cube &operator=(const Cube &obj);

			double getVolume() const;
			double getSurfaceArea() const;
			void setLength(double length);

			friend std::ostream &operator<<(std::ostream &os, const Cube &cube);

		private:
			double length_;
	};
}