#ifndef PHANTOMSTYLEPLUGIN_H
#define PHANTOMSTYLEPLUGIN_H
#include <QtWidgets/qstyleplugin.h>

class QWin11PhantomStylePlugin : public QStylePlugin {
  Q_OBJECT
  Q_PLUGIN_METADATA(IID QStyleFactoryInterface_iid FILE
                    "qwin11phantomstyleplugin.json")
public:
  QWin11PhantomStylePlugin();
  ~QWin11PhantomStylePlugin();
  QStyle* create(const QString& key) override;
};
#endif
