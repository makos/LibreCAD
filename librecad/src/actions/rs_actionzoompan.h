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

#ifndef RS_ACTIONZOOMPAN_H
#define RS_ACTIONZOOMPAN_H

#include "rs_actioninterface.h"


/**
 * This action class can handle user events to zoom in a window.
 *
 * @author Andrew Mustun
 */
class RS_ActionZoomPan : public RS_ActionInterface {
	Q_OBJECT
public:
      /*
       ** Action States.
      */
     enum Status {
        SetPanStart,   /**< Setting Start.  */
        SetPanning,     /**< Setting panning. */
        SetPanEnd,      /**< Setting End */
     };

public:
    RS_ActionZoomPan(RS_EntityContainer& container,
                     RS_GraphicView& graphicView);

	void init(int status=0) override;
	void trigger() override;
	void mouseMoveEvent(QMouseEvent* e) override;
	void mousePressEvent(QMouseEvent* e) override;
	void mouseReleaseEvent(QMouseEvent* e) override;
	void updateMouseCursor() override;
	void updateMouseButtonHints() override;

protected:
    //RS_Vector v1;
    //RS_Vector v2;
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
};

#endif
