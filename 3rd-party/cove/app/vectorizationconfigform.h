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

#ifndef __VECTORIZATIONCONFIGFORM_H__
#define __VECTORIZATIONCONFIGFORM_H__

#include <QDialog>

#include "ui_vectorizationconfigform.h"

namespace cove {
class VectorizationConfigForm : public QDialog
{
	Q_OBJECT

	Ui::VectorizationConfigForm ui;

public:
	double speckleSize, joinDistance, distDirBalance, cornerMin, optTolerance;
	bool doConnections, simpleConnectionsOnly;

	VectorizationConfigForm(QWidget* parent = 0);
	void accept();
	void setValues();

public slots:
	int exec();
	void on_simpleConnectionsCheckBox_toggled(bool);
	void on_doConnectionsCheckBox_toggled(bool);
};
} // cove

#endif