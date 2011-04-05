/*Copyright (C) 2011 TrulTeam - Rosme, Redyz, OuatteDePhoque

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.*/

#include "config.h"
#include "time.h"

namespace tl {

	class Trul Random {
	public:
		Random();
		Random(const Random &r);
		~Random();

		int getRandNbr();
		int getRandNbr(int min, int max);
		unsigned int getSeed();
		void setSeed(unsigned int seed);

	private:
		//Function
		void seedIt();

		//Members
		unsigned int m_seed;
		Time *m_time;
	};

}