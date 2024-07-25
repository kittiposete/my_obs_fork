#include "src/requesthandler/rpc/RequestResult.h"
#include "RequestHandler.h"

RequestResult RequestHandler::ShutdownOBS(const Request &) {
//    obs_shutdown();

//#ifdef _WIN32
//    bool disableAudioDucking =
//        config_get_bool(globalConfig, "Audio", "DisableAudioDucking");
//    if (disableAudioDucking)
//        DisableAudioDucking(false);
//#else
//    delete snInt;
//    close(sigintFd[0]);
//    close(sigintFd[1]);
//#endif
//
//#ifdef __APPLE__
//    bool vsyncDisabled =
//            config_get_bool(globalConfig, "Video", "DisableOSXVSync");
//    bool resetVSync =
//            config_get_bool(globalConfig, "Video", "ResetOSXVSyncOnExit");
//    if (vsyncDisabled && resetVSync)
//        EnableOSXVSync(true);
//#endif
//
//    os_inhibit_sleep_set_active(sleepInhibitor, false);
//    os_inhibit_sleep_destroy(sleepInhibitor);
//
//    if (libobs_initialized)

        obs_shutdown();


    return RequestResult::Success();
}
