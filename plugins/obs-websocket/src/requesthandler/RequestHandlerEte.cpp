#include "src/requesthandler/rpc/RequestResult.h"
#include "RequestHandler.h"

RequestResult RequestHandler::ShutdownOBS(const Request &) {

        obs_shutdown();


    return RequestResult::Success();
}
