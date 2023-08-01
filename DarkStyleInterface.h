#ifndef DARKSTYLEINTERFACE_H
#define DARKSTYLEINTERFACE_H

#include <QtPlugin>

class QApplication;
class QStyle;

class DarkStyleInterface {
public:
	virtual ~DarkStyleInterface() = default;
    virtual void applyDarkStyle(QApplication *app) = 0;
    virtual void applyLightStyle(QApplication *app) = 0;
};

Q_DECLARE_INTERFACE(DarkStyleInterface, "jp.soramimi.DarkStylePlugin/1.0")

#endif // DARKSTYLEINTERFACE_H
