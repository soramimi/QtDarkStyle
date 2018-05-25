#include "DarkStyle.h"
#include "DarkStylePlugin.h"



QStyle *DarkStylePlugin::create()
{
	return new DarkStyle();
}
