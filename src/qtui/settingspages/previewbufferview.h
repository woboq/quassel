/***************************************************************************
 *   Copyright (C) 2005-2014 by the Quassel Project                        *
 *   devel@quassel-irc.org                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) version 3.                                           *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/

#ifndef PREVIEWBUFFERVIEW_H
#define PREVIEWBUFFERVIEW_H

#include "bufferview.h"

class PreviewBufferView : public BufferView
{
    Q_OBJECT

public:
    PreviewBufferView(QWidget *parent = 0) : BufferView(parent) {}

protected:
    virtual void keyPressEvent(QKeyEvent *event) { QTreeView::keyPressEvent(event); }
    virtual void contextMenuEvent(QContextMenuEvent *) {}
};


#endif //PREVIEWBUFFERVIEW_H
