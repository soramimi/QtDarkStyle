#ifndef DARKSTYLEINTERFACE_H
#define DARKSTYLEINTERFACE_H

#include <QtPlugin>

class QStyle;

class DarkStyleInterface {
public:
	virtual ~DarkStyleInterface()
	{
	}
	virtual QStyle *create() = 0;

};

Q_DECLARE_INTERFACE(DarkStyleInterface, "jp.soramimi.DarkStylePlugin/1.0")

#endif // DARKSTYLEINTERFACE_H
