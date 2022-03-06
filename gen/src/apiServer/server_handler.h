#pragma once

#include "ConfigApi.h"

#include "ContainerApi.h"

#include "DistributionApi.h"

#include "ExecApi.h"

#include "ImageApi.h"

#include "NetworkApi.h"

#include "NodeApi.h"

#include "PluginApi.h"

#include "SecretApi.h"

#include "ServiceApi.h"

#include "SessionApi.h"

#include "SwarmApi.h"

#include "SystemApi.h"

#include "TaskApi.h"

#include "VolumeApi.h"


#include <memory>
#include <functional>


namespace openapi{


// user needs to override this
class ServerHandler
{
public:
    virtual configCreateResponse configCreateHandleFunc(configCreateParams params);
    virtual configDeleteResponse configDeleteHandleFunc(configDeleteParams params);
    virtual configInspectResponse configInspectHandleFunc(configInspectParams params);
    virtual configListResponse configListHandleFunc(configListParams params);
    virtual configUpdateResponse configUpdateHandleFunc(configUpdateParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual containerArchiveResponse containerArchiveHandleFunc(containerArchiveParams params);
    virtual containerArchiveInfoResponse containerArchiveInfoHandleFunc(containerArchiveInfoParams params);
    virtual containerAttachResponse containerAttachHandleFunc(containerAttachParams params);
    virtual containerAttachWebsocketResponse containerAttachWebsocketHandleFunc(containerAttachWebsocketParams params);
    virtual containerChangesResponse containerChangesHandleFunc(containerChangesParams params);
    virtual containerCreateResponse containerCreateHandleFunc(containerCreateParams params);
    virtual containerDeleteResponse containerDeleteHandleFunc(containerDeleteParams params);
    virtual containerExportResponse containerExportHandleFunc(containerExportParams params);
    virtual containerInspectResponse containerInspectHandleFunc(containerInspectParams params);
    virtual containerKillResponse containerKillHandleFunc(containerKillParams params);
    virtual containerListResponse containerListHandleFunc(containerListParams params);
    virtual containerLogsResponse containerLogsHandleFunc(containerLogsParams params);
    virtual containerPauseResponse containerPauseHandleFunc(containerPauseParams params);
    virtual containerPruneResponse containerPruneHandleFunc(containerPruneParams params);
    virtual containerRenameResponse containerRenameHandleFunc(containerRenameParams params);
    virtual containerResizeResponse containerResizeHandleFunc(containerResizeParams params);
    virtual containerRestartResponse containerRestartHandleFunc(containerRestartParams params);
    virtual containerStartResponse containerStartHandleFunc(containerStartParams params);
    virtual containerStatsResponse containerStatsHandleFunc(containerStatsParams params);
    virtual containerStopResponse containerStopHandleFunc(containerStopParams params);
    virtual containerTopResponse containerTopHandleFunc(containerTopParams params);
    virtual containerUnpauseResponse containerUnpauseHandleFunc(containerUnpauseParams params);
    virtual containerUpdateResponse containerUpdateHandleFunc(containerUpdateParams params);
    virtual containerWaitResponse containerWaitHandleFunc(containerWaitParams params);
    virtual putContainerArchiveResponse putContainerArchiveHandleFunc(putContainerArchiveParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual distributionInspectResponse distributionInspectHandleFunc(distributionInspectParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual containerExecResponse containerExecHandleFunc(containerExecParams params);
    virtual execInspectResponse execInspectHandleFunc(execInspectParams params);
    virtual execResizeResponse execResizeHandleFunc(execResizeParams params);
    virtual execStartResponse execStartHandleFunc(execStartParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual buildPruneResponse buildPruneHandleFunc(buildPruneParams params);
    virtual imageBuildResponse imageBuildHandleFunc(imageBuildParams params);
    virtual imageCommitResponse imageCommitHandleFunc(imageCommitParams params);
    virtual imageCreateResponse imageCreateHandleFunc(imageCreateParams params);
    virtual imageDeleteResponse imageDeleteHandleFunc(imageDeleteParams params);
    virtual imageGetResponse imageGetHandleFunc(imageGetParams params);
    virtual imageGetAllResponse imageGetAllHandleFunc(imageGetAllParams params);
    virtual imageHistoryResponse imageHistoryHandleFunc(imageHistoryParams params);
    virtual imageInspectResponse imageInspectHandleFunc(imageInspectParams params);
    virtual imageListResponse imageListHandleFunc(imageListParams params);
    virtual imageLoadResponse imageLoadHandleFunc(imageLoadParams params);
    virtual imagePruneResponse imagePruneHandleFunc(imagePruneParams params);
    virtual imagePushResponse imagePushHandleFunc(imagePushParams params);
    virtual imageSearchResponse imageSearchHandleFunc(imageSearchParams params);
    virtual imageTagResponse imageTagHandleFunc(imageTagParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual networkConnectResponse networkConnectHandleFunc(networkConnectParams params);
    virtual networkCreateResponse networkCreateHandleFunc(networkCreateParams params);
    virtual networkDeleteResponse networkDeleteHandleFunc(networkDeleteParams params);
    virtual networkDisconnectResponse networkDisconnectHandleFunc(networkDisconnectParams params);
    virtual networkInspectResponse networkInspectHandleFunc(networkInspectParams params);
    virtual networkListResponse networkListHandleFunc(networkListParams params);
    virtual networkPruneResponse networkPruneHandleFunc(networkPruneParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual nodeDeleteResponse nodeDeleteHandleFunc(nodeDeleteParams params);
    virtual nodeInspectResponse nodeInspectHandleFunc(nodeInspectParams params);
    virtual nodeListResponse nodeListHandleFunc(nodeListParams params);
    virtual nodeUpdateResponse nodeUpdateHandleFunc(nodeUpdateParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual getPluginPrivilegesResponse getPluginPrivilegesHandleFunc(getPluginPrivilegesParams params);
    virtual pluginCreateResponse pluginCreateHandleFunc(pluginCreateParams params);
    virtual pluginDeleteResponse pluginDeleteHandleFunc(pluginDeleteParams params);
    virtual pluginDisableResponse pluginDisableHandleFunc(pluginDisableParams params);
    virtual pluginEnableResponse pluginEnableHandleFunc(pluginEnableParams params);
    virtual pluginInspectResponse pluginInspectHandleFunc(pluginInspectParams params);
    virtual pluginListResponse pluginListHandleFunc(pluginListParams params);
    virtual pluginPullResponse pluginPullHandleFunc(pluginPullParams params);
    virtual pluginPushResponse pluginPushHandleFunc(pluginPushParams params);
    virtual pluginSetResponse pluginSetHandleFunc(pluginSetParams params);
    virtual pluginUpgradeResponse pluginUpgradeHandleFunc(pluginUpgradeParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual secretCreateResponse secretCreateHandleFunc(secretCreateParams params);
    virtual secretDeleteResponse secretDeleteHandleFunc(secretDeleteParams params);
    virtual secretInspectResponse secretInspectHandleFunc(secretInspectParams params);
    virtual secretListResponse secretListHandleFunc(secretListParams params);
    virtual secretUpdateResponse secretUpdateHandleFunc(secretUpdateParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual serviceCreateResponse serviceCreateHandleFunc(serviceCreateParams params);
    virtual serviceDeleteResponse serviceDeleteHandleFunc(serviceDeleteParams params);
    virtual serviceInspectResponse serviceInspectHandleFunc(serviceInspectParams params);
    virtual serviceListResponse serviceListHandleFunc(serviceListParams params);
    virtual serviceLogsResponse serviceLogsHandleFunc(serviceLogsParams params);
    virtual serviceUpdateResponse serviceUpdateHandleFunc(serviceUpdateParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual sessionResponse sessionHandleFunc(sessionParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual swarmInitResponse swarmInitHandleFunc(swarmInitParams params);
    virtual swarmInspectResponse swarmInspectHandleFunc(swarmInspectParams params);
    virtual swarmJoinResponse swarmJoinHandleFunc(swarmJoinParams params);
    virtual swarmLeaveResponse swarmLeaveHandleFunc(swarmLeaveParams params);
    virtual swarmUnlockResponse swarmUnlockHandleFunc(swarmUnlockParams params);
    virtual swarmUnlockkeyResponse swarmUnlockkeyHandleFunc(swarmUnlockkeyParams params);
    virtual swarmUpdateResponse swarmUpdateHandleFunc(swarmUpdateParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual systemAuthResponse systemAuthHandleFunc(systemAuthParams params);
    virtual systemDataUsageResponse systemDataUsageHandleFunc(systemDataUsageParams params);
    virtual systemEventsResponse systemEventsHandleFunc(systemEventsParams params);
    virtual systemInfoResponse systemInfoHandleFunc(systemInfoParams params);
    virtual systemPingResponse systemPingHandleFunc(systemPingParams params);
    virtual systemPingHeadResponse systemPingHeadHandleFunc(systemPingHeadParams params);
    virtual systemVersionResponse systemVersionHandleFunc(systemVersionParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual taskInspectResponse taskInspectHandleFunc(taskInspectParams params);
    virtual taskListResponse taskListHandleFunc(taskListParams params);
    virtual taskLogsResponse taskLogsHandleFunc(taskLogsParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


// user needs to override this
class ServerHandler
{
public:
    virtual volumeCreateResponse volumeCreateHandleFunc(volumeCreateParams params);
    virtual volumeDeleteResponse volumeDeleteHandleFunc(volumeDeleteParams params);
    virtual volumeInspectResponse volumeInspectHandleFunc(volumeInspectParams params);
    virtual volumeListResponse volumeListHandleFunc(volumeListParams params);
    virtual volumePruneResponse volumePruneHandleFunc(volumePruneParams params);
};



class Server
{
public:
    // passs in user implemented handler
    Server(std::shared_ptr<ServerHandler> handler);
    // inside this convert req to params
    // read from req and fill resp
    // TODO: refactor for main
    //void HandleHttp(IOASClientRequest & req, IOASClientResponse &resp);

    bool GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret);

    std::shared_ptr<ServerHandler> handler_;
    Router<std::function<void(IOASClientRequest &, IOASClientResponse &)>> router_;
};


}// namespace openapi