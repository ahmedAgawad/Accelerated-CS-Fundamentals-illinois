#include <iostream>
#include <cmath>
#include <cstdlib>

#include "uiuc/PNG.h"
#include "uiuc/HSLAPixel.h"
#include "ImageTransform.h"

/* ******************
(Begin multi-line comment...)

Write your name and email address in the comment space here:

Name:
Email:

(...end multi-line comment.)
******************** */

using uiuc::HSLAPixel;
using uiuc::PNG;

/**
 * Returns an image that has been transformed to grayscale.
 *
 * The saturation of every pixel is set to 0, removing any color.
 *
 * @return The grayscale image.
 */
PNG grayscale(PNG image)
{
	/// This function is already written for you so you can see how to
	/// interact with our PNG class.
	for (unsigned x = 0; x < image.width(); x++)
	{
		for (unsigned y = 0; y < image.height(); y++)
		{
			HSLAPixel &pixel = image.getPixel(x, y);

			// `pixel` is a reference to the memory stored inside of the PNG `image`,
			// which means you're changing the image directly. No need to `set`
			// the pixel since you're directly changing the memory of the image.
			pixel.s = 0;
		}
	}

	return image;
}

/**
 * Returns an image with a spotlight centered at (`centerX`, `centerY`).
 *
 * A spotlight adjusts the luminance of a pixel based on the distance the pixel
 * is away from the center by decreasing the luminance by 0.5% per 1 pixel euclidean
 * distance away from the center.
 *
 * For example, a pixel 3 pixels above and 4 pixels to the right of the center
 * is a total of `sqrt((3 * 3) + (4 * 4)) = sqrt(25) = 5` pixels away and
 * its luminance is decreased by 2.5% (0.975x its original value).  At a
 * distance over 160 pixels away, the luminance will always decreased by 80%.
 *
 * The modified PNG is then returned.
 *
 * @param image A PNG object which holds the image data to be modified.
 * @param centerX The center x coordinate of the crosshair which is to be drawn.
 * @param centerY The center y coordinate of the crosshair which is to be drawn.
 *
 * @return The image with a spotlight.
 */
PNG createSpotlight(PNG image, int centerX, int centerY)
{
	for (unsigned i = 0; i < image.width(); i++)
	{
		for (unsigned j = 0; j < image.height(); j++)
		{
			HSLAPixel &pixel = image.getPixel(i, j);
			unsigned xDist;
			unsigned yDist;
			if (i >= centerX)
			{
				xDist = i - centerX;
			}
			else
			{
				xDist = centerX - i;
			}

			if (j >= centerY)
			{
				yDist = j - centerY;
			}
			else
			{
				yDist = centerY - j;
			}

			unsigned eculideanDist = sqrt(xDist * xDist + yDist * yDist);
			if (eculideanDist >= 160)
			{
				pixel.l = pixel.l * 0.2;
			}
			else
			{
				pixel.l = pixel.l * (1 - (((double)eculideanDist / 2.0) / 100));
			}
		}
	}

	return image;
}

/**
 * Returns a image transformed to Illini colors.
 *
 * The hue of every pixel is set to the a hue value of either orange or
 * blue, based on if the pixel's hue value is closer to orange than blue.
 *
 * @param image A PNG object which holds the image data to be modified.
 *
 * @return The illinify'd image.
 **/
PNG illinify(PNG image)
{
	for (unsigned i = 0; i < image.width(); i++)
	{
		for (unsigned j = 0; j < image.height(); j++)
		{
			HSLAPixel &pixel = image.getPixel(i, j);
			if (pixel.h >= 294)
			{
				pixel.h = 11;
			}
			else if (pixel.h >= 216 && pixel.h < 294)
			{
				pixel.h = 216;
			}
			else if (pixel.h < 216 && pixel.h > 11)
			{
				if (216 - pixel.h < pixel.h - 11)
				{
					pixel.h = 216;
				}
				else
				{
					pixel.h = 11;
				}
			}
			else if (pixel.h <= 11 && pixel.h >= 0)
			{
				pixel.h = 11;
			}
		}
	}

	return image;
}

/**
 * Returns an immge that has been watermarked by another image.
 *
 * The luminance of every pixel of the second image is checked, if that
 * pixel's luminance is 1 (100%), then the pixel at the same location on
 * the first image has its luminance increased by 0.2.
 *
 * @param firstImage  The first of the two PNGs, which is the base image.
 * @param secondImage The second of the two PNGs, which acts as the stencil.
 *
 * @return The watermarked image.
 */
PNG watermark(PNG firstImage, PNG secondImage)
{
	for (unsigned i = 0; i < firstImage.width(); i++)
	{
		for (unsigned j = 0; j < firstImage.height(); j++)
		{
			HSLAPixel &firstImgPixel = firstImage.getPixel(i, j);
			HSLAPixel &secondImgPixel = secondImage.getPixel(i, j);
			if (secondImgPixel.l == 1)
			{
				firstImgPixel.l = firstImgPixel.l + 0.2;
				if (firstImgPixel.l > 1)
				{
					firstImgPixel.l = 1;
				}
			}
		}
	}

	return firstImage;
}
