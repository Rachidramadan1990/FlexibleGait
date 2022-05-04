#include "ramadan_2021_capi_host.h"
static ramadan_2021_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        ramadan_2021_host_InitializeDataMapInfo(&(root), "ramadan_2021");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
