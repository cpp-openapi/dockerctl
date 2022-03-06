#include "ImageApi.h"

using namespace openapi;
// todo include str/json header


// class name ImageApi


void buildPruneParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->keepStorage)>::type;
        V keepStorageRet;
        bool keepStorageOk = req.GetQueryParam<V>("keepStorage", keepStorageRet);
        if(keepStorageOk){
            this->keepStorage = keepStorageRet;
        }
    }
    {
        using V = remove_optional<decltype(this->all)>::type;
        V allRet;
        bool allOk = req.GetQueryParam<V>("all", allRet);
        if(allOk){
            this->all = allRet;
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

void buildPruneResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imageBuildParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->dockerfile)>::type;
        V dockerfileRet;
        bool dockerfileOk = req.GetQueryParam<V>("dockerfile", dockerfileRet);
        if(dockerfileOk){
            this->dockerfile = dockerfileRet;
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
    {
        using V = remove_optional<decltype(this->extrahosts)>::type;
        V extrahostsRet;
        bool extrahostsOk = req.GetQueryParam<V>("extrahosts", extrahostsRet);
        if(extrahostsOk){
            this->extrahosts = extrahostsRet;
        }
    }
    {
        using V = remove_optional<decltype(this->remote)>::type;
        V remoteRet;
        bool remoteOk = req.GetQueryParam<V>("remote", remoteRet);
        if(remoteOk){
            this->remote = remoteRet;
        }
    }
    {
        using V = remove_optional<decltype(this->q)>::type;
        V qRet;
        bool qOk = req.GetQueryParam<V>("q", qRet);
        if(qOk){
            this->q = qRet;
        }
    }
    {
        using V = remove_optional<decltype(this->nocache)>::type;
        V nocacheRet;
        bool nocacheOk = req.GetQueryParam<V>("nocache", nocacheRet);
        if(nocacheOk){
            this->nocache = nocacheRet;
        }
    }
    {
        using V = remove_optional<decltype(this->cachefrom)>::type;
        V cachefromRet;
        bool cachefromOk = req.GetQueryParam<V>("cachefrom", cachefromRet);
        if(cachefromOk){
            this->cachefrom = cachefromRet;
        }
    }
    {
        using V = remove_optional<decltype(this->pull)>::type;
        V pullRet;
        bool pullOk = req.GetQueryParam<V>("pull", pullRet);
        if(pullOk){
            this->pull = pullRet;
        }
    }
    {
        using V = remove_optional<decltype(this->rm)>::type;
        V rmRet;
        bool rmOk = req.GetQueryParam<V>("rm", rmRet);
        if(rmOk){
            this->rm = rmRet;
        }
    }
    {
        using V = remove_optional<decltype(this->forcerm)>::type;
        V forcermRet;
        bool forcermOk = req.GetQueryParam<V>("forcerm", forcermRet);
        if(forcermOk){
            this->forcerm = forcermRet;
        }
    }
    {
        using V = remove_optional<decltype(this->memory)>::type;
        V memoryRet;
        bool memoryOk = req.GetQueryParam<V>("memory", memoryRet);
        if(memoryOk){
            this->memory = memoryRet;
        }
    }
    {
        using V = remove_optional<decltype(this->memswap)>::type;
        V memswapRet;
        bool memswapOk = req.GetQueryParam<V>("memswap", memswapRet);
        if(memswapOk){
            this->memswap = memswapRet;
        }
    }
    {
        using V = remove_optional<decltype(this->cpushares)>::type;
        V cpusharesRet;
        bool cpusharesOk = req.GetQueryParam<V>("cpushares", cpusharesRet);
        if(cpusharesOk){
            this->cpushares = cpusharesRet;
        }
    }
    {
        using V = remove_optional<decltype(this->cpusetcpus)>::type;
        V cpusetcpusRet;
        bool cpusetcpusOk = req.GetQueryParam<V>("cpusetcpus", cpusetcpusRet);
        if(cpusetcpusOk){
            this->cpusetcpus = cpusetcpusRet;
        }
    }
    {
        using V = remove_optional<decltype(this->cpuperiod)>::type;
        V cpuperiodRet;
        bool cpuperiodOk = req.GetQueryParam<V>("cpuperiod", cpuperiodRet);
        if(cpuperiodOk){
            this->cpuperiod = cpuperiodRet;
        }
    }
    {
        using V = remove_optional<decltype(this->cpuquota)>::type;
        V cpuquotaRet;
        bool cpuquotaOk = req.GetQueryParam<V>("cpuquota", cpuquotaRet);
        if(cpuquotaOk){
            this->cpuquota = cpuquotaRet;
        }
    }
    {
        using V = remove_optional<decltype(this->buildargs)>::type;
        V buildargsRet;
        bool buildargsOk = req.GetQueryParam<V>("buildargs", buildargsRet);
        if(buildargsOk){
            this->buildargs = buildargsRet;
        }
    }
    {
        using V = remove_optional<decltype(this->shmsize)>::type;
        V shmsizeRet;
        bool shmsizeOk = req.GetQueryParam<V>("shmsize", shmsizeRet);
        if(shmsizeOk){
            this->shmsize = shmsizeRet;
        }
    }
    {
        using V = remove_optional<decltype(this->squash)>::type;
        V squashRet;
        bool squashOk = req.GetQueryParam<V>("squash", squashRet);
        if(squashOk){
            this->squash = squashRet;
        }
    }
    {
        using V = remove_optional<decltype(this->labels)>::type;
        V labelsRet;
        bool labelsOk = req.GetQueryParam<V>("labels", labelsRet);
        if(labelsOk){
            this->labels = labelsRet;
        }
    }
    {
        using V = remove_optional<decltype(this->networkmode)>::type;
        V networkmodeRet;
        bool networkmodeOk = req.GetQueryParam<V>("networkmode", networkmodeRet);
        if(networkmodeOk){
            this->networkmode = networkmodeRet;
        }
    }
    {
        using V = remove_optional<decltype(this->contentType)>::type;
    }
    {
        using V = remove_optional<decltype(this->xRegistryConfig)>::type;
    }
    {
        using V = remove_optional<decltype(this->platform)>::type;
        V platformRet;
        bool platformOk = req.GetQueryParam<V>("platform", platformRet);
        if(platformOk){
            this->platform = platformRet;
        }
    }
    {
        using V = remove_optional<decltype(this->target)>::type;
        V targetRet;
        bool targetOk = req.GetQueryParam<V>("target", targetRet);
        if(targetOk){
            this->target = targetRet;
        }
    }
    {
        using V = remove_optional<decltype(this->outputs)>::type;
        V outputsRet;
        bool outputsOk = req.GetQueryParam<V>("outputs", outputsRet);
        if(outputsOk){
            this->outputs = outputsRet;
        }
    }
    {
        using V = remove_optional<decltype(this->inputStream)>::type;
        std::string inputStreamBody = req.GetBody();
        if (inputStreamBody.size() != 0){
            this->inputStream = Json::Deserialize<V>(openapi::StringT(inputStreamBody.c_str()));
        }
    }
}

void imageBuildResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void imageCommitParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->container)>::type;
        V containerRet;
        bool containerOk = req.GetQueryParam<V>("container", containerRet);
        if(containerOk){
            this->container = containerRet;
        }
    }
    {
        using V = remove_optional<decltype(this->repo)>::type;
        V repoRet;
        bool repoOk = req.GetQueryParam<V>("repo", repoRet);
        if(repoOk){
            this->repo = repoRet;
        }
    }
    {
        using V = remove_optional<decltype(this->tag)>::type;
        V tagRet;
        bool tagOk = req.GetQueryParam<V>("tag", tagRet);
        if(tagOk){
            this->tag = tagRet;
        }
    }
    {
        using V = remove_optional<decltype(this->comment)>::type;
        V commentRet;
        bool commentOk = req.GetQueryParam<V>("comment", commentRet);
        if(commentOk){
            this->comment = commentRet;
        }
    }
    {
        using V = remove_optional<decltype(this->author)>::type;
        V authorRet;
        bool authorOk = req.GetQueryParam<V>("author", authorRet);
        if(authorOk){
            this->author = authorRet;
        }
    }
    {
        using V = remove_optional<decltype(this->pause)>::type;
        V pauseRet;
        bool pauseOk = req.GetQueryParam<V>("pause", pauseRet);
        if(pauseOk){
            this->pause = pauseRet;
        }
    }
    {
        using V = remove_optional<decltype(this->changes)>::type;
        V changesRet;
        bool changesOk = req.GetQueryParam<V>("changes", changesRet);
        if(changesOk){
            this->changes = changesRet;
        }
    }
    {
        using V = remove_optional<decltype(this->containerConfig)>::type;
        std::string containerConfigBody = req.GetBody();
        if (containerConfigBody.size() != 0){
            this->containerConfig = Json::Deserialize<V>(openapi::StringT(containerConfigBody.c_str()));
        }
    }
}

void imageCommitResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imageCreateParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->fromImage)>::type;
        V fromImageRet;
        bool fromImageOk = req.GetQueryParam<V>("fromImage", fromImageRet);
        if(fromImageOk){
            this->fromImage = fromImageRet;
        }
    }
    {
        using V = remove_optional<decltype(this->fromSrc)>::type;
        V fromSrcRet;
        bool fromSrcOk = req.GetQueryParam<V>("fromSrc", fromSrcRet);
        if(fromSrcOk){
            this->fromSrc = fromSrcRet;
        }
    }
    {
        using V = remove_optional<decltype(this->repo)>::type;
        V repoRet;
        bool repoOk = req.GetQueryParam<V>("repo", repoRet);
        if(repoOk){
            this->repo = repoRet;
        }
    }
    {
        using V = remove_optional<decltype(this->tag)>::type;
        V tagRet;
        bool tagOk = req.GetQueryParam<V>("tag", tagRet);
        if(tagOk){
            this->tag = tagRet;
        }
    }
    {
        using V = remove_optional<decltype(this->message)>::type;
        V messageRet;
        bool messageOk = req.GetQueryParam<V>("message", messageRet);
        if(messageOk){
            this->message = messageRet;
        }
    }
    {
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
    {
        using V = remove_optional<decltype(this->changes)>::type;
        V changesRet;
        bool changesOk = req.GetQueryParam<V>("changes", changesRet);
        if(changesOk){
            this->changes = changesRet;
        }
    }
    {
        using V = remove_optional<decltype(this->platform)>::type;
        V platformRet;
        bool platformOk = req.GetQueryParam<V>("platform", platformRet);
        if(platformOk){
            this->platform = platformRet;
        }
    }
    {
        using V = remove_optional<decltype(this->inputImage)>::type;
        std::string inputImageBody = req.GetBody();
        if (inputImageBody.size() != 0){
            this->inputImage = Json::Deserialize<V>(openapi::StringT(inputImageBody.c_str()));
        }
    }
}

void imageCreateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void imageDeleteParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetPathParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
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
        using V = remove_optional<decltype(this->noprune)>::type;
        V nopruneRet;
        bool nopruneOk = req.GetQueryParam<V>("noprune", nopruneRet);
        if(nopruneOk){
            this->noprune = nopruneRet;
        }
    }
}

void imageDeleteResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imageGetParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetPathParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
}

void imageGetResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imageGetAllParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->names)>::type;
        V namesRet;
        bool namesOk = req.GetQueryParam<V>("names", namesRet);
        if(namesOk){
            this->names = namesRet;
        }
    }
}

void imageGetAllResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imageHistoryParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetPathParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
}

void imageHistoryResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imageInspectParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetPathParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
}

void imageInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imageListParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->filters)>::type;
        V filtersRet;
        bool filtersOk = req.GetQueryParam<V>("filters", filtersRet);
        if(filtersOk){
            this->filters = filtersRet;
        }
    }
    {
        using V = remove_optional<decltype(this->sharedSize)>::type;
        V sharedSizeRet;
        bool sharedSizeOk = req.GetQueryParam<V>("sharedSize", sharedSizeRet);
        if(sharedSizeOk){
            this->sharedSize = sharedSizeRet;
        }
    }
    {
        using V = remove_optional<decltype(this->digests)>::type;
        V digestsRet;
        bool digestsOk = req.GetQueryParam<V>("digests", digestsRet);
        if(digestsOk){
            this->digests = digestsRet;
        }
    }
}

void imageListResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imageLoadParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->quiet)>::type;
        V quietRet;
        bool quietOk = req.GetQueryParam<V>("quiet", quietRet);
        if(quietOk){
            this->quiet = quietRet;
        }
    }
    {
        using V = remove_optional<decltype(this->imagesTarball)>::type;
        std::string imagesTarballBody = req.GetBody();
        if (imagesTarballBody.size() != 0){
            this->imagesTarball = Json::Deserialize<V>(openapi::StringT(imagesTarballBody.c_str()));
        }
    }
}

void imageLoadResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void imagePruneParams::ReadParams(IOASClientRequest & req)
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

void imagePruneResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imagePushParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetPathParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
    {
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
    {
        using V = remove_optional<decltype(this->tag)>::type;
        V tagRet;
        bool tagOk = req.GetQueryParam<V>("tag", tagRet);
        if(tagOk){
            this->tag = tagRet;
        }
    }
}

void imagePushResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void imageSearchParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->term)>::type;
        V termRet;
        bool termOk = req.GetQueryParam<V>("term", termRet);
        if(termOk){
            this->term = termRet;
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
        using V = remove_optional<decltype(this->filters)>::type;
        V filtersRet;
        bool filtersOk = req.GetQueryParam<V>("filters", filtersRet);
        if(filtersOk){
            this->filters = filtersRet;
        }
    }
}

void imageSearchResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void imageTagParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetPathParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
    {
        using V = remove_optional<decltype(this->repo)>::type;
        V repoRet;
        bool repoOk = req.GetQueryParam<V>("repo", repoRet);
        if(repoOk){
            this->repo = repoRet;
        }
    }
    {
        using V = remove_optional<decltype(this->tag)>::type;
        V tagRet;
        bool tagOk = req.GetQueryParam<V>("tag", tagRet);
        if(tagOk){
            this->tag = tagRet;
        }
    }
}

void imageTagResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


