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

#include "Windows.h"
#include "../include/trullib/time.h"

namespace tl {

	Time::Time() {
		this->reset();
	}

	float Time::getTime() {
		return static_cast<float>(this->getOSTime() - m_startTime);
	}

	void Time::reset() {
		m_startTime = this->getOSTime();
	}

	void Time::sleep(float t) {
		Sleep(static_cast<DWORD>(t * 1000));
	}

	double Time::getOSTime() {
		static LARGE_INTEGER frequency;
		static BOOL TimerUse = QueryPerformanceFrequency(&frequency);

		if(TimerUse)
		{
			LARGE_INTEGER actualTime;
			QueryPerformanceCounter(&actualTime);

			return static_cast<double>(actualTime.QuadPart) / frequency.QuadPart;
		}
		else
			return GetTickCount() * 0.001;
	}
}