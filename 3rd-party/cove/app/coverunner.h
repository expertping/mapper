/*
 * Copyright (c) 2005-2019 Libor Pecháček.
 *
 * This file is part of CoVe 
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COVERUNNER_H
#define COVERUNNER_H

namespace OpenOrienteering {
class MainWindow;
class Map;
class TemplateImage;
} // namespace OpenOrienteering

namespace cove {
class CoveRunner
{
public:
	void run(OpenOrienteering::MainWindow* parent, OpenOrienteering::Map* map,
	         OpenOrienteering::TemplateImage* templ);
};
} // cove

#endif // COVERUNNER_H
