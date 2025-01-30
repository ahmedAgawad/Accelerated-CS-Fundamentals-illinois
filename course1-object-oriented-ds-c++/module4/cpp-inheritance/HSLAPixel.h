#pragma once

#include <iostream>
#include <sstream>

namespace uiuc
{
	class HSLAPixel
	{
	public:
		double h; /**< Hue of the pixel, in degrees [0, 360). */
		double s; /**< Saturation of the pixel, [0, 1]. */
		double l; /**< Luminance of the pixel, [0, 1]. */
		double a; /**< Alpha of the pixel, [0, 1]. */

	
		HSLAPixel();

	
		HSLAPixel(double hue, double saturation, double luminance);

	
		HSLAPixel(double hue, double saturation, double luminance, double alpha);

		static HSLAPixel BLUE;
		static HSLAPixel ORANGE;
		static HSLAPixel YELLOW;
		static HSLAPixel PURPLE;
	};
}