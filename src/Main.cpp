#include "Logging.h"

using namespace SKSE;
using namespace SKSE::log;
using namespace SKSE::stl;

SKSEPluginLoad(const LoadInterface* skse) {
    InitializeLogging();
    const auto* plugin = PluginDeclaration::GetSingleton();
    auto version = plugin->GetVersion();
    log::info("{} {} is loading...", plugin->GetName(), version);
    Init(skse);

    // TODO: Perform startup tasks for your project.

    log::info("{} has finished loading.", plugin->GetName());
    return true;
}
