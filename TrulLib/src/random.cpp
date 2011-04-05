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

#include <cstdlib>
#include <ctime>

#include "../include/trullib/random.h"

namespace tl {

	Random::Random() {
		this->seedIt();
		m_time = new Time();
	}

	Random::Random(const Random &r) {
		m_seed = r.m_seed;
		m_time = new Time(*(r.m_time));
	}

	Random::~Random() {
		delete m_time;
	}

	int Random::getRandNbr() {
		return std::rand();
	}

	int Random::getRandNbr(int min, int max) {
		return std::rand() % (max - min + 1) + min;
	}

	unsigned int Random::getSeed() {
		return m_seed;
	}

	void Random::setSeed(unsigned int seed) {
		m_seed = seed;
		this->seedIt();
	}

	void Random::seedIt() {
		m_seed = static_cast<unsigned int>(m_time->getTime() * std::time(NULL));
		std::srand(m_seed);
	}
}