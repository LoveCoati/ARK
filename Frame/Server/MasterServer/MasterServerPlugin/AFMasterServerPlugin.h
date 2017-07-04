// -------------------------------------------------------------------------
//    @FileName			:    NFCentreLogicPlugin.h
//    @Author           :    Ark Game Tech
//    @Date             :    2012-07-14 08:51
//    @Module           :    CentreLogicModule
//
// -------------------------------------------------------------------------

#ifndef NF_MASTERSERVERPLUGIN_H
#define NF_MASTERSERVERPLUGIN_H
///
#include "SDK/Interface/NFIPlugin.h"
#include "SDK/Interface/NFIPluginManager.h"

#ifdef NFMASTERSERVERPLUGIN_EXPORTS
#define NFMASTERSERVERPLUGIN_API __declspec(dllexport)
#else
#define NFMASTERSERVERPLUGIN_API __declspec(dllimport)
#endif

//////////////////////////////////////////////////////////////////////////
class NFMasterServerPlugin : public NFIPlugin
{
public:
    NFMasterServerPlugin(NFIPluginManager* p)
    {
        pPluginManager = p;
    }
    virtual const int GetPluginVersion();

    virtual const std::string GetPluginName();

    virtual void Install();

    virtual void Uninstall();
};
#endif