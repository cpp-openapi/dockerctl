#include "ContainerApi.h"

using namespace openapi;
// todo include str/json header


// class name ContainerApi


void containerArchiveParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->path)>::type;
        V pathRet;
        bool pathOk = req.GetQueryParam<V>("path", pathRet);
        if(pathOk){
            this->path = pathRet;
        }
    }
}

void containerArchiveResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerArchiveInfoParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->path)>::type;
        V pathRet;
        bool pathOk = req.GetQueryParam<V>("path", pathRet);
        if(pathOk){
            this->path = pathRet;
        }
    }
}

void containerArchiveInfoResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerAttachParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->detachKeys)>::type;
        V detachKeysRet;
        bool detachKeysOk = req.GetQueryParam<V>("detachKeys", detachKeysRet);
        if(detachKeysOk){
            this->detachKeys = detachKeysRet;
        }
    }
    {
        using V = remove_optional<decltype(this->logs)>::type;
        V logsRet;
        bool logsOk = req.GetQueryParam<V>("logs", logsRet);
        if(logsOk){
            this->logs = logsRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stream)>::type;
        V streamRet;
        bool streamOk = req.GetQueryParam<V>("stream", streamRet);
        if(streamOk){
            this->stream = streamRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stdin)>::type;
        V stdinRet;
        bool stdinOk = req.GetQueryParam<V>("stdin", stdinRet);
        if(stdinOk){
            this->stdin = stdinRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stdout)>::type;
        V stdoutRet;
        bool stdoutOk = req.GetQueryParam<V>("stdout", stdoutRet);
        if(stdoutOk){
            this->stdout = stdoutRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stderr)>::type;
        V stderrRet;
        bool stderrOk = req.GetQueryParam<V>("stderr", stderrRet);
        if(stderrOk){
            this->stderr = stderrRet;
        }
    }
}

void containerAttachResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerAttachWebsocketParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->detachKeys)>::type;
        V detachKeysRet;
        bool detachKeysOk = req.GetQueryParam<V>("detachKeys", detachKeysRet);
        if(detachKeysOk){
            this->detachKeys = detachKeysRet;
        }
    }
    {
        using V = remove_optional<decltype(this->logs)>::type;
        V logsRet;
        bool logsOk = req.GetQueryParam<V>("logs", logsRet);
        if(logsOk){
            this->logs = logsRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stream)>::type;
        V streamRet;
        bool streamOk = req.GetQueryParam<V>("stream", streamRet);
        if(streamOk){
            this->stream = streamRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stdin)>::type;
        V stdinRet;
        bool stdinOk = req.GetQueryParam<V>("stdin", stdinRet);
        if(stdinOk){
            this->stdin = stdinRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stdout)>::type;
        V stdoutRet;
        bool stdoutOk = req.GetQueryParam<V>("stdout", stdoutRet);
        if(stdoutOk){
            this->stdout = stdoutRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stderr)>::type;
        V stderrRet;
        bool stderrOk = req.GetQueryParam<V>("stderr", stderrRet);
        if(stderrOk){
            this->stderr = stderrRet;
        }
    }
}

void containerAttachWebsocketResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerChangesParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
}

void containerChangesResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void containerCreateParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetQueryParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
    {
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
}

void containerCreateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void containerDeleteParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->v)>::type;
        V vRet;
        bool vOk = req.GetQueryParam<V>("v", vRet);
        if(vOk){
            this->v = vRet;
        }
    }
    {
        using V = remove_optional<decltype(this->force)>::type;
        V forceRet;
        bool forceOk = req.GetQueryParam<V>("force", forceRet);
        if(forceOk){
            this->force = forceRet;
        }
    }
    {
        using V = remove_optional<decltype(this->link)>::type;
        V linkRet;
        bool linkOk = req.GetQueryParam<V>("link", linkRet);
        if(linkOk){
            this->link = linkRet;
        }
    }
}

void containerDeleteResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerExportParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
}

void containerExportResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerInspectParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->size)>::type;
        V sizeRet;
        bool sizeOk = req.GetQueryParam<V>("size", sizeRet);
        if(sizeOk){
            this->size = sizeRet;
        }
    }
}

void containerInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void containerKillParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->signal)>::type;
        V signalRet;
        bool signalOk = req.GetQueryParam<V>("signal", signalRet);
        if(signalOk){
            this->signal = signalRet;
        }
    }
}

void containerKillResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerListParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->all)>::type;
        V allRet;
        bool allOk = req.GetQueryParam<V>("all", allRet);
        if(allOk){
            this->all = allRet;
        }
    }
    {
        using V = remove_optional<decltype(this->limit)>::type;
        V limitRet;
        bool limitOk = req.GetQueryParam<V>("limit", limitRet);
        if(limitOk){
            this->limit = limitRet;
        }
    }
    {
        using V = remove_optional<decltype(this->size)>::type;
        V sizeRet;
        bool sizeOk = req.GetQueryParam<V>("size", sizeRet);
        if(sizeOk){
            this->size = sizeRet;
        }
    }
    {
        using V = remove_optional<decltype(this->filters)>::type;
        V filtersRet;
        bool filtersOk = req.GetQueryParam<V>("filters", filtersRet);
        if(filtersOk){
            this->filters = filtersRet;
        }
    }
}

void containerListResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void containerLogsParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->follow)>::type;
        V followRet;
        bool followOk = req.GetQueryParam<V>("follow", followRet);
        if(followOk){
            this->follow = followRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stdout)>::type;
        V stdoutRet;
        bool stdoutOk = req.GetQueryParam<V>("stdout", stdoutRet);
        if(stdoutOk){
            this->stdout = stdoutRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stderr)>::type;
        V stderrRet;
        bool stderrOk = req.GetQueryParam<V>("stderr", stderrRet);
        if(stderrOk){
            this->stderr = stderrRet;
        }
    }
    {
        using V = remove_optional<decltype(this->since)>::type;
        V sinceRet;
        bool sinceOk = req.GetQueryParam<V>("since", sinceRet);
        if(sinceOk){
            this->since = sinceRet;
        }
    }
    {
        using V = remove_optional<decltype(this->until)>::type;
        V untilRet;
        bool untilOk = req.GetQueryParam<V>("until", untilRet);
        if(untilOk){
            this->until = untilRet;
        }
    }
    {
        using V = remove_optional<decltype(this->timestamps)>::type;
        V timestampsRet;
        bool timestampsOk = req.GetQueryParam<V>("timestamps", timestampsRet);
        if(timestampsOk){
            this->timestamps = timestampsRet;
        }
    }
    {
        using V = remove_optional<decltype(this->tail)>::type;
        V tailRet;
        bool tailOk = req.GetQueryParam<V>("tail", tailRet);
        if(tailOk){
            this->tail = tailRet;
        }
    }
}

void containerLogsResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void containerPauseParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
}

void containerPauseResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerPruneParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->filters)>::type;
        V filtersRet;
        bool filtersOk = req.GetQueryParam<V>("filters", filtersRet);
        if(filtersOk){
            this->filters = filtersRet;
        }
    }
}

void containerPruneResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void containerRenameParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetQueryParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
}

void containerRenameResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerResizeParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->h)>::type;
        V hRet;
        bool hOk = req.GetQueryParam<V>("h", hRet);
        if(hOk){
            this->h = hRet;
        }
    }
    {
        using V = remove_optional<decltype(this->w)>::type;
        V wRet;
        bool wOk = req.GetQueryParam<V>("w", wRet);
        if(wOk){
            this->w = wRet;
        }
    }
}

void containerResizeResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerRestartParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->t)>::type;
        V tRet;
        bool tOk = req.GetQueryParam<V>("t", tRet);
        if(tOk){
            this->t = tRet;
        }
    }
}

void containerRestartResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerStartParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->detachKeys)>::type;
        V detachKeysRet;
        bool detachKeysOk = req.GetQueryParam<V>("detachKeys", detachKeysRet);
        if(detachKeysOk){
            this->detachKeys = detachKeysRet;
        }
    }
}

void containerStartResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerStatsParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stream)>::type;
        V streamRet;
        bool streamOk = req.GetQueryParam<V>("stream", streamRet);
        if(streamOk){
            this->stream = streamRet;
        }
    }
    {
        using V = remove_optional<decltype(this->oneShot)>::type;
        V oneShotRet;
        bool oneShotOk = req.GetQueryParam<V>("oneShot", oneShotRet);
        if(oneShotOk){
            this->oneShot = oneShotRet;
        }
    }
}

void containerStatsResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void containerStopParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->t)>::type;
        V tRet;
        bool tOk = req.GetQueryParam<V>("t", tRet);
        if(tOk){
            this->t = tRet;
        }
    }
}

void containerStopResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerTopParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->psArgs)>::type;
        V psArgsRet;
        bool psArgsOk = req.GetQueryParam<V>("psArgs", psArgsRet);
        if(psArgsOk){
            this->psArgs = psArgsRet;
        }
    }
}

void containerTopResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void containerUnpauseParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
}

void containerUnpauseResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void containerUpdateParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->update)>::type;
        std::string updateBody = req.GetBody();
        if (updateBody.size() != 0){
            this->update = Json::Deserialize<V>(openapi::StringT(updateBody.c_str()));
        }
    }
}

void containerUpdateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void containerWaitParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->condition)>::type;
        V conditionRet;
        bool conditionOk = req.GetQueryParam<V>("condition", conditionRet);
        if(conditionOk){
            this->condition = conditionRet;
        }
    }
}

void containerWaitResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void putContainerArchiveParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->path)>::type;
        V pathRet;
        bool pathOk = req.GetQueryParam<V>("path", pathRet);
        if(pathOk){
            this->path = pathRet;
        }
    }
    {
        using V = remove_optional<decltype(this->inputStream)>::type;
        std::string inputStreamBody = req.GetBody();
        if (inputStreamBody.size() != 0){
            this->inputStream = Json::Deserialize<V>(openapi::StringT(inputStreamBody.c_str()));
        }
    }
    {
        using V = remove_optional<decltype(this->noOverwriteDirNonDir)>::type;
        V noOverwriteDirNonDirRet;
        bool noOverwriteDirNonDirOk = req.GetQueryParam<V>("noOverwriteDirNonDir", noOverwriteDirNonDirRet);
        if(noOverwriteDirNonDirOk){
            this->noOverwriteDirNonDir = noOverwriteDirNonDirRet;
        }
    }
    {
        using V = remove_optional<decltype(this->copyUIDGID)>::type;
        V copyUIDGIDRet;
        bool copyUIDGIDOk = req.GetQueryParam<V>("copyUIDGID", copyUIDGIDRet);
        if(copyUIDGIDOk){
            this->copyUIDGID = copyUIDGIDRet;
        }
    }
}

void putContainerArchiveResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


