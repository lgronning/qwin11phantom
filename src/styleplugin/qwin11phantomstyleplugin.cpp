#include "qwin11phantomstyleplugin.h"
#include "../style/qwin11phantomstyle.h"

QWin11PhantomStylePlugin::QWin11PhantomStylePlugin() : QStylePlugin() {}
QWin11PhantomStylePlugin::~QWin11PhantomStylePlugin() {}
QStyle* QWin11PhantomStylePlugin::create(const QString& key) {
  if (QString::compare(key, QLatin1String("qwin11phantom"), Qt::CaseInsensitive) != 0)
    return nullptr;
  return new QWin11PhantomStyle();
}

