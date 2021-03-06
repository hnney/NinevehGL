/*
 *	Copyright (c) 2011-2015 NinevehGL. More information at: http://nineveh.gl
 *
 *	Permission is hereby granted, free of charge, to any person obtaining a copy
 *	of this software and associated documentation files (the "Software"), to deal
 *	in the Software without restriction, including without limitation the rights
 *	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *	copies of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 *	The above copyright notice and this permission notice shall be included in
 *	all copies or substantial portions of the Software.
 *
 *	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *	THE SOFTWARE.
 */

/*!
 *					A single color unit from RGBA format in the range [0.0, 1.0].
 */
#define kNGL_COLOR_UNIT			1.0f / 255.0f

/*!
 *					The value of PI.
 */
#define kNGL_PI					3.141592f

/*!
 *					The value of 2 * PI.
 */
#define kNGL_2PI				6.283184f

/*!
 *					The value of PI / 2.
 */
#define kNGL_PI2				1.570796f

/*!
 *					Pre-calculated value of PI / 180. It's used to convert degrees to radians.
 */
#define kNGL_PI180				0.017453f

/*!
 *					Pre-calculated value of 180 / PI. It's used to convert radians to degrees.
 */
#define kNGL_180PI				57.295780f

/*!
 *					Convert degrees to radians. Degrees range is 0º - 360º.
 *
 *	@param			x
 *					The value in degrees to be converted.
 */
#define nglDegreesToRadians(x)	((x) * kNGL_PI180)

/*!
 *					Converts radians to degrees. Radians range is 0 - 2π.
 *
 *	@param			x
 *					The value in radians to be converted.
 */
#define nglRadiansToDegrees(x)	((x) * kNGL_180PI)

/*!
 *					Returns the clamped value within a range from "min" to "max".
 *
 *	@param			x
 *					The value to be clamped.
 *
 *	@param			min
 *					The minimum value.
 *
 *	@param			max
 *					The maximum value.
 */
#define nglClamp(x,min,max) ((x) < (min) ? (min) : ((x) > (max) ? (max) : (x)))

/*!
 *					Checks if a floating data type (float, double or long double) is NaN.
 *
 *					The NaN thing means "not a number" and is returned by the runtime when a floating
 *					point operation results in special cases (like divisions by 0, square root of
 *					negative number, etc. In practical terms, the NaN has the unusual property that it is
 *					not equal to any value, including itself. So NaN == NaN is always false.
 *
 *	@param			x
 *					The value to be compared to it self.
 */
#define nglIsNaN(x) ((x) != (x))