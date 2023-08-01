#include "DarkStyle.h"
#include "DarkStylePlugin.h"
#include "StandardStyle.h"
#include "TraditionalWindowsStyleTreeControl.h"

QStyle *DarkStylePlugin::createStandardStyle()
{
	return new StandardStyle();
}

QStyle *DarkStylePlugin::createDarkStyle()
{
	return new DarkStyle();
}


