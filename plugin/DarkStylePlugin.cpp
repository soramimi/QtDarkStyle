#include "DarkStyle.h"
#include "DarkStylePlugin.h"
#include "TraditionalWindowsStyleTreeControl.h"
#include "StandardStyle.h"



QStyle *DarkStylePlugin::createStandardStyle()
{
	return new StandardStyle();
}


QStyle *DarkStylePlugin::createDarkStyle()
{
	return new DarkStyle();
}


