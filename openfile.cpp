/*
 * openfile.cpp
 *
 * Copyright (c) 2012, Dennis Rassmann <showp1984@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#include "openfile.h"
#include "ui_openfile.h"

openfile::openfile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::openfile)
{
    ui->setupUi(this);
}

openfile::~openfile()
{
    delete ui;
    delete this;
}

void openfile::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void openfile::set_snr(QString str)
{
    snr_old = str;
}

void openfile::set_device(QString str)
{
    device = str;
}

void openfile::on_actionQuit_triggered()
{
    this->close();
}

void openfile::on_actionInfo_triggered()
{
    infowind = new Info();
    infowind->show();
}

void openfile::on_btn_quit_clicked()
{
    this->close();
}

void openfile::on_btn_go_clicked()
{
    switch (ui->cmb_type->currentIndex())
    {
    case KERNEL:
        flasherwind = new flasher();
        flasherwind->set_snr(snr_old);
        flasherwind->set_device(device);
        flasherwind->set_filename(filename);
        flasherwind->set_filepath(filepath);
        flasherwind->set_type(ui->cmb_type->currentIndex());
        flasherwind->show();
        this->close();
        break;
    case ROM:
        alertbox.setText("Sorry, Kernel flashing is unimplemented.");
        alertbox.exec();
        break;
    }
}

void openfile::on_btn_find_clicked()
{
    filepath = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Zip-Files (*.zip)"));
    if (!filepath.isNull()) {
        ui->edt_filename->setText(filepath);
        fileinfo = filepath;
        filename = fileinfo.fileName();
    }
}

void openfile::on_cmb_type_currentIndexChanged(int index)
{
    switch (index)
    {
    case KERNEL:
        break;
    case ROM:
        alertbox.setText("Sorry, unimplemented.");
        alertbox.exec();
        ui->cmb_type->setCurrentIndex(0);
        break;
    }
}
