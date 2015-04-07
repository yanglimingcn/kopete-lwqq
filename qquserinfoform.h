/*
    qquserinfoform.h - QQ show user info

    Copyright (c) 2014 by Jun Zhang        <jun.zhang@i-soft.com.cn>

    Kopete    (c) 2002-2006 by the Kopete developers  <kopete-devel@kde.org>

    *************************************************************************
    *                                                                       *
    * This program is free software; you can redistribute it and/or modify  *
    * it under the terms of the GNU General Public License as published by  *
    * the Free Software Foundation; either version 2 of the License, or     *
    * (at your option) any later version.                                   *
    *                                                                       *
    *************************************************************************
*/
#ifndef WEBQQ_USER_INFO_FORM_H
#define WEBQQ_USER_INFO_FORM_H

#include "qqcontact.h"

#include "ui_qquserinfoform.h"

class QQUserInfoForm : public QWidget
{
    Q_OBJECT

public:
    QQUserInfoForm(QQContact *contact, QWidget *parent = 0);
    void setInfo(LwqqBuddy *buddy);
private slots:


private:
    void initLabel();
    QString shengxiaoToStr(LwqqShengxiao shengxiao);
    QString constellationToStr(LwqqConstel constel);
    Ui::QQUserInfoForm ui;
};




#endif
