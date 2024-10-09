#ifndef GTF2BEDPLUGIN_H
#define GTF2BEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class GTF2BEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "GTF2BED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
