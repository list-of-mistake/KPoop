#include "qtableviewmodel.h"
#include <QModelIndex>
#include <QDebug>
#include <QPixmap>

QTableViewModel1::QTableViewModel1(QObject *parent)
    :QAbstractListModel(parent)
{
    values = new QVector<patient>();
}

int QTableViewModel1::rowCount(const QModelIndex &) const
{
    return values->count();
}
int QTableViewModel1::columnCount(const QModelIndex &) const
{
    return 6;
}
QVariant QTableViewModel1::data( const QModelIndex &index, int role ) const
{

    QVariant value;

        switch ( role )
        {
            case Qt::DisplayRole: //string
            {
                switch (index.column()) {
                    case 0: {
                        value = this->values->at(index.row()).get_FNS();
                        break;
                    }
                    case 1: {
                        value = this->values->at(index.row()).get_diagnosis();
                        break;
                    }
                    case 2: {
                        value = this->values->at(index.row()).get_address();
                        break;
                    }
                    case 3: {
                        value = this->values->at(index.row()).get_tel();
                        break;
                    }
                    case 4: {
                        value = this->values->at(index.row()).get_years();
                        break;
                    }
                    case 5:{
                        value = this->values->at(index.row()).get_department();
                        break;
                    }
                }
            }
            break;

            case Qt::UserRole: //data
            {
                value = this->values->at(index.row()).get_FNS();
            }
            break;

            default:
                break;
        }

    return value;
}

void QTableViewModel1::populate(QVector<patient> *newValues)
{
    int idx = this->values->count()+1;
    this->beginInsertRows(QModelIndex(), 0, idx);
    this->values = newValues;
    endInsertRows();
 }
QTableViewModel2::QTableViewModel2(QObject *parent)
    :QAbstractListModel(parent)
{
    values = new QVector<drug>();
}

int QTableViewModel2::rowCount(const QModelIndex &) const
{
    return values->count();
}
int QTableViewModel2::columnCount(const QModelIndex &) const
{
    return 5;
}
QVariant QTableViewModel2::data( const QModelIndex &index, int role ) const
{

    QVariant value;

        switch ( role )
        {
            case Qt::DisplayRole: //string
            {
                switch (index.column()) {
                    case 0: {
                        value = this->values->at(index.row()).get_title();
                        break;
                    }
                    case 1: {
                        value = this->values->at(index.row()).get_code_drug();
                        break;
                    }
                    case 2: {
                        value = this->values->at(index.row()).get_count();
                        break;
                    }
                    case 3: {
                        value = this->values->at(index.row()).get_date();
                        break;
                    }
                    case 4: {
                        value = this->values->at(index.row()).get_cost();
                        break;
                    }
                }
            }
            break;

            case Qt::UserRole: //data
            {
                value = this->values->at(index.row()).get_title();
            }
            break;

            default:
                break;
        }

    return value;
}

void QTableViewModel2::populate(QVector<drug> *newValues)
{
    int idx = this->values->count()+1;
    this->beginInsertRows(QModelIndex(), 0, idx);
    this->values = newValues;
    endInsertRows();
 }

QTableViewModel3::QTableViewModel3(QObject *parent)
    :QAbstractListModel(parent)
{
    values = new QVector<dispens>();
}

int QTableViewModel3::rowCount(const QModelIndex &) const
{
    return values->count();
}
int QTableViewModel3::columnCount(const QModelIndex &) const
{
    return 5;
}
QVariant QTableViewModel3::data( const QModelIndex &index, int role ) const
{

    QVariant value;

        switch ( role )
        {
            case Qt::DisplayRole: //string
            {
                switch (index.column()) {
                    case 0: {
                        value = this->values->at(index.row()).get_n();
                        break;
                    }
                    case 1: {
                        value = this->values->at(index.row()).get_tel();
                        break;
                    }
                    case 2: {
                        value = this->values->at(index.row()).get_code_drug();
                        break;
                    }
                    case 3: {
                        value = this->values->at(index.row()).get_date();
                        break;
                    }
                    case 4: {
                        value = this->values->at(index.row()).get_cost();
                        break;
                    }
                }
            }
            break;

            case Qt::UserRole: //data
            {
                value = this->values->at(index.row()).get_tel();
            }
            break;

            default:
                break;
        }

    return value;
}

void QTableViewModel3::populate(QVector<dispens> *newValues)
{
    int idx = this->values->count()+1;
    this->beginInsertRows(QModelIndex(), 0, idx);
    this->values = newValues;
    endInsertRows();
 }
