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

#ifndef __QPOLYGONSVIEW_H__
#define __QPOLYGONSVIEW_H__

#include <QPainterPath>

#include "app/Polygons.h"
#include "app/QImageView.h"

namespace cove {
class PaintablePolygonList : public Polygons::PolygonList
{
	std::vector<QPainterPath> painterPaths;

public:
	PaintablePolygonList();
	PaintablePolygonList(const PolygonList& pl);
	PaintablePolygonList& operator=(const PolygonList& pl);
	const QPainterPath&
	getConstPainterPath(const Polygons::PolygonList::iterator& it);
	void setConstPainterPath(const Polygons::PolygonList::iterator& it,
							 const QPainterPath& pa);
};

class PolyImageWidget : public ImageWidget
{
private:
	PaintablePolygonList polygonsList;

public:
	PolyImageWidget(QWidget* parent = 0);
	Polygons::PolygonList polygons() const;
	void setPolygons(const Polygons::PolygonList& p);
	virtual void paintEvent(QPaintEvent* pe);
};

class QPolygonsView : public QImageView
{
public:
	QPolygonsView(QWidget* parent = 0);
	Polygons::PolygonList polygons() const;
	void setPolygons(const Polygons::PolygonList& p);
};
} // cove

#endif