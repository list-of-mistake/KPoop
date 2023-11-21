#ifndef QTABLEVIEWMODEL_H
#define QTABLEVIEWMODEL_H


#include "patients.h"
#include <drugs.h>
#include <dispensing.h>
#include <QModelIndex>


class QTableViewModel1 : public QAbstractListModel
{
public:
    QTableViewModel1(QObject *parent=nullptr);
    int rowCount(const QModelIndex &) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    void populate(QVector<patient> *newValues);
private:
    QVector<patient> *values;
};

    class QTableViewModel2 : public QAbstractListModel
{
public:    QTableViewModel2(QObject *parent=nullptr);
    int rowCount(const QModelIndex &) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    void populate(QVector<drug> *newValues);
private:
    QVector<drug> *values;
};

class QTableViewModel3 : public QAbstractListModel
{
public:    QTableViewModel3(QObject *parent=nullptr);
    int rowCount(const QModelIndex &) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    void populate(QVector<dispens> *newValues);
private:
    QVector<dispens> *values;
};
#endif // QTABLEVIEWMODEL_H
