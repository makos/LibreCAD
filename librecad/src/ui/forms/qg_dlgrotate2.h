/****************************************************************************
**
** This file is part of the LibreCAD project, a 2D CAD program
**
** Copyright (C) 2010 R. van Twisk (librecad@rvt.dds.nl)
** Copyright (C) 2001-2003 RibbonSoft. All rights reserved.
**
**
** This file may be distributed and/or modified under the terms of the
** GNU General Public License version 2 as published by the Free Software 
** Foundation and appearing in the file gpl-2.0.txt included in the
** packaging of this file.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**
** This copyright notice MUST APPEAR in all copies of the script!  
**
**********************************************************************/
#ifndef QG_DLGROTATE2_H
#define QG_DLGROTATE2_H

#include "ui_qg_dlgrotate2.h"

class RS_Rotate2Data;

class QG_DlgRotate2 : public QDialog, public Ui::QG_DlgRotate2
{
    Q_OBJECT

public:
    QG_DlgRotate2(QWidget* parent = 0, bool modal = false, Qt::WindowFlags fl = {});
    ~QG_DlgRotate2();

public slots:
    virtual void setData( RS_Rotate2Data * d );
    virtual void updateData();

protected:
    int newVariable;

protected slots:
    virtual void languageChange();

private:
    QString angle2;
    bool useCurrentAttributes;
    bool useCurrentLayer;
    int numberMode;
    QString copies;
    RS_Rotate2Data* data;
    QString angle1;

    void init();
    void destroy();

};

#endif // QG_DLGROTATE2_H
