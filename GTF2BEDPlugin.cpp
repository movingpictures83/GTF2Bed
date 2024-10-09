#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "GTF2BEDPlugin.h"

void GTF2BEDPlugin::input(std::string file) {
 inputfile = file;
}

void GTF2BEDPlugin::run() {}

void GTF2BEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "gtf2bed";
myCommand += " ";
myCommand += inputfile + " >& "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<GTF2BEDPlugin> GTF2BEDPluginProxy = PluginProxy<GTF2BEDPlugin>("GTF2BED", PluginManager::getInstance());
