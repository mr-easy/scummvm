/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "titanic/star_control/star_control_sub2.h"

namespace Titanic {

bool CStarControlSub2::loadYale(int v1) {
	clear();
	error("Original loadYale not supported");
	return true;
}

bool CStarControlSub2::selectStar(CSurfaceArea *surfaceArea,
		CStarControlSub12 *sub12, int flags, const Common::Point &pt) {
	// TODO
	return true;
}

bool CStarControlSub2::loadStar() {
	// TODO
	return true;
}

bool CStarControlSub2::setup() {
	// TODO
	return true;
}

} // End of namespace Titanic
