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

#ifndef WIN32_LEAN_AND_MEAN
	#define WIN32_LEAN_AND_MEAN
#endif

#pragma warning(disable : 4251)

#ifdef TrulLib
	#ifdef TrulLib_Export
		#define Trul __declspec(dllexport)
	#else
		#define Trul __declspec(dllimport)
	#endif
#else
	#define Trul
#endif