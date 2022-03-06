#include "server_handler.h"

using namespace openapi;

Server::Server(std::shared_ptr<ServerHandler> handler): handler_(handler), router_({})
{
    RouteBuilder<std::function<void(IOASClientRequest &, IOASClientResponse &)>> b;

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/configs/create",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            configCreateParams params;
            params.ReadParams(req);
            configCreateResponse res = this->handler_->configCreateHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("DELETE", "/configs/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            configDeleteParams params;
            params.ReadParams(req);
            configDeleteResponse res = this->handler_->configDeleteHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/configs/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            configInspectParams params;
            params.ReadParams(req);
            configInspectResponse res = this->handler_->configInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/configs",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            configListParams params;
            params.ReadParams(req);
            configListResponse res = this->handler_->configListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/configs/{id}/update",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            configUpdateParams params;
            params.ReadParams(req);
            configUpdateResponse res = this->handler_->configUpdateHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("GET", "/containers/{id}/archive",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerArchiveParams params;
            params.ReadParams(req);
            containerArchiveResponse res = this->handler_->containerArchiveHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("HEAD", "/containers/{id}/archive",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerArchiveInfoParams params;
            params.ReadParams(req);
            containerArchiveInfoResponse res = this->handler_->containerArchiveInfoHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/attach",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerAttachParams params;
            params.ReadParams(req);
            containerAttachResponse res = this->handler_->containerAttachHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/containers/{id}/attach/ws",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerAttachWebsocketParams params;
            params.ReadParams(req);
            containerAttachWebsocketResponse res = this->handler_->containerAttachWebsocketHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/containers/{id}/changes",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerChangesParams params;
            params.ReadParams(req);
            containerChangesResponse res = this->handler_->containerChangesHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/create",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerCreateParams params;
            params.ReadParams(req);
            containerCreateResponse res = this->handler_->containerCreateHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("DELETE", "/containers/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerDeleteParams params;
            params.ReadParams(req);
            containerDeleteResponse res = this->handler_->containerDeleteHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/containers/{id}/export",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerExportParams params;
            params.ReadParams(req);
            containerExportResponse res = this->handler_->containerExportHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/containers/{id}/json",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerInspectParams params;
            params.ReadParams(req);
            containerInspectResponse res = this->handler_->containerInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/kill",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerKillParams params;
            params.ReadParams(req);
            containerKillResponse res = this->handler_->containerKillHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/containers/json",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerListParams params;
            params.ReadParams(req);
            containerListResponse res = this->handler_->containerListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/containers/{id}/logs",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerLogsParams params;
            params.ReadParams(req);
            containerLogsResponse res = this->handler_->containerLogsHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/pause",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerPauseParams params;
            params.ReadParams(req);
            containerPauseResponse res = this->handler_->containerPauseHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/prune",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerPruneParams params;
            params.ReadParams(req);
            containerPruneResponse res = this->handler_->containerPruneHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/rename",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerRenameParams params;
            params.ReadParams(req);
            containerRenameResponse res = this->handler_->containerRenameHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/resize",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerResizeParams params;
            params.ReadParams(req);
            containerResizeResponse res = this->handler_->containerResizeHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/restart",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerRestartParams params;
            params.ReadParams(req);
            containerRestartResponse res = this->handler_->containerRestartHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/start",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerStartParams params;
            params.ReadParams(req);
            containerStartResponse res = this->handler_->containerStartHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/containers/{id}/stats",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerStatsParams params;
            params.ReadParams(req);
            containerStatsResponse res = this->handler_->containerStatsHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/stop",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerStopParams params;
            params.ReadParams(req);
            containerStopResponse res = this->handler_->containerStopHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/containers/{id}/top",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerTopParams params;
            params.ReadParams(req);
            containerTopResponse res = this->handler_->containerTopHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/unpause",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerUnpauseParams params;
            params.ReadParams(req);
            containerUnpauseResponse res = this->handler_->containerUnpauseHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/update",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerUpdateParams params;
            params.ReadParams(req);
            containerUpdateResponse res = this->handler_->containerUpdateHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/containers/{id}/wait",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerWaitParams params;
            params.ReadParams(req);
            containerWaitResponse res = this->handler_->containerWaitHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("PUT", "/containers/{id}/archive",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            putContainerArchiveParams params;
            params.ReadParams(req);
            putContainerArchiveResponse res = this->handler_->putContainerArchiveHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("GET", "/distribution/{name}/json",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            distributionInspectParams params;
            params.ReadParams(req);
            distributionInspectResponse res = this->handler_->distributionInspectHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/containers/{id}/exec",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            containerExecParams params;
            params.ReadParams(req);
            containerExecResponse res = this->handler_->containerExecHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/exec/{id}/json",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            execInspectParams params;
            params.ReadParams(req);
            execInspectResponse res = this->handler_->execInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/exec/{id}/resize",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            execResizeParams params;
            params.ReadParams(req);
            execResizeResponse res = this->handler_->execResizeHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/exec/{id}/start",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            execStartParams params;
            params.ReadParams(req);
            execStartResponse res = this->handler_->execStartHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/build/prune",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            buildPruneParams params;
            params.ReadParams(req);
            buildPruneResponse res = this->handler_->buildPruneHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/build",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageBuildParams params;
            params.ReadParams(req);
            imageBuildResponse res = this->handler_->imageBuildHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/commit",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageCommitParams params;
            params.ReadParams(req);
            imageCommitResponse res = this->handler_->imageCommitHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/images/create",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageCreateParams params;
            params.ReadParams(req);
            imageCreateResponse res = this->handler_->imageCreateHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("DELETE", "/images/{name}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageDeleteParams params;
            params.ReadParams(req);
            imageDeleteResponse res = this->handler_->imageDeleteHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/images/{name}/get",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageGetParams params;
            params.ReadParams(req);
            imageGetResponse res = this->handler_->imageGetHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/images/get",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageGetAllParams params;
            params.ReadParams(req);
            imageGetAllResponse res = this->handler_->imageGetAllHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/images/{name}/history",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageHistoryParams params;
            params.ReadParams(req);
            imageHistoryResponse res = this->handler_->imageHistoryHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/images/{name}/json",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageInspectParams params;
            params.ReadParams(req);
            imageInspectResponse res = this->handler_->imageInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/images/json",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageListParams params;
            params.ReadParams(req);
            imageListResponse res = this->handler_->imageListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/images/load",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageLoadParams params;
            params.ReadParams(req);
            imageLoadResponse res = this->handler_->imageLoadHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/images/prune",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imagePruneParams params;
            params.ReadParams(req);
            imagePruneResponse res = this->handler_->imagePruneHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/images/{name}/push",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imagePushParams params;
            params.ReadParams(req);
            imagePushResponse res = this->handler_->imagePushHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/images/search",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageSearchParams params;
            params.ReadParams(req);
            imageSearchResponse res = this->handler_->imageSearchHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/images/{name}/tag",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            imageTagParams params;
            params.ReadParams(req);
            imageTagResponse res = this->handler_->imageTagHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/networks/{id}/connect",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            networkConnectParams params;
            params.ReadParams(req);
            networkConnectResponse res = this->handler_->networkConnectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/networks/create",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            networkCreateParams params;
            params.ReadParams(req);
            networkCreateResponse res = this->handler_->networkCreateHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("DELETE", "/networks/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            networkDeleteParams params;
            params.ReadParams(req);
            networkDeleteResponse res = this->handler_->networkDeleteHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/networks/{id}/disconnect",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            networkDisconnectParams params;
            params.ReadParams(req);
            networkDisconnectResponse res = this->handler_->networkDisconnectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/networks/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            networkInspectParams params;
            params.ReadParams(req);
            networkInspectResponse res = this->handler_->networkInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/networks",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            networkListParams params;
            params.ReadParams(req);
            networkListResponse res = this->handler_->networkListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/networks/prune",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            networkPruneParams params;
            params.ReadParams(req);
            networkPruneResponse res = this->handler_->networkPruneHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("DELETE", "/nodes/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            nodeDeleteParams params;
            params.ReadParams(req);
            nodeDeleteResponse res = this->handler_->nodeDeleteHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/nodes/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            nodeInspectParams params;
            params.ReadParams(req);
            nodeInspectResponse res = this->handler_->nodeInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/nodes",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            nodeListParams params;
            params.ReadParams(req);
            nodeListResponse res = this->handler_->nodeListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/nodes/{id}/update",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            nodeUpdateParams params;
            params.ReadParams(req);
            nodeUpdateResponse res = this->handler_->nodeUpdateHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("GET", "/plugins/privileges",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            getPluginPrivilegesParams params;
            params.ReadParams(req);
            getPluginPrivilegesResponse res = this->handler_->getPluginPrivilegesHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/plugins/create",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginCreateParams params;
            params.ReadParams(req);
            pluginCreateResponse res = this->handler_->pluginCreateHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("DELETE", "/plugins/{name}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginDeleteParams params;
            params.ReadParams(req);
            pluginDeleteResponse res = this->handler_->pluginDeleteHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/plugins/{name}/disable",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginDisableParams params;
            params.ReadParams(req);
            pluginDisableResponse res = this->handler_->pluginDisableHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/plugins/{name}/enable",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginEnableParams params;
            params.ReadParams(req);
            pluginEnableResponse res = this->handler_->pluginEnableHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/plugins/{name}/json",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginInspectParams params;
            params.ReadParams(req);
            pluginInspectResponse res = this->handler_->pluginInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/plugins",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginListParams params;
            params.ReadParams(req);
            pluginListResponse res = this->handler_->pluginListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/plugins/pull",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginPullParams params;
            params.ReadParams(req);
            pluginPullResponse res = this->handler_->pluginPullHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/plugins/{name}/push",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginPushParams params;
            params.ReadParams(req);
            pluginPushResponse res = this->handler_->pluginPushHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/plugins/{name}/set",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginSetParams params;
            params.ReadParams(req);
            pluginSetResponse res = this->handler_->pluginSetHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/plugins/{name}/upgrade",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            pluginUpgradeParams params;
            params.ReadParams(req);
            pluginUpgradeResponse res = this->handler_->pluginUpgradeHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/secrets/create",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            secretCreateParams params;
            params.ReadParams(req);
            secretCreateResponse res = this->handler_->secretCreateHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("DELETE", "/secrets/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            secretDeleteParams params;
            params.ReadParams(req);
            secretDeleteResponse res = this->handler_->secretDeleteHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/secrets/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            secretInspectParams params;
            params.ReadParams(req);
            secretInspectResponse res = this->handler_->secretInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/secrets",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            secretListParams params;
            params.ReadParams(req);
            secretListResponse res = this->handler_->secretListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/secrets/{id}/update",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            secretUpdateParams params;
            params.ReadParams(req);
            secretUpdateResponse res = this->handler_->secretUpdateHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/services/create",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            serviceCreateParams params;
            params.ReadParams(req);
            serviceCreateResponse res = this->handler_->serviceCreateHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("DELETE", "/services/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            serviceDeleteParams params;
            params.ReadParams(req);
            serviceDeleteResponse res = this->handler_->serviceDeleteHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/services/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            serviceInspectParams params;
            params.ReadParams(req);
            serviceInspectResponse res = this->handler_->serviceInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/services",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            serviceListParams params;
            params.ReadParams(req);
            serviceListResponse res = this->handler_->serviceListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/services/{id}/logs",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            serviceLogsParams params;
            params.ReadParams(req);
            serviceLogsResponse res = this->handler_->serviceLogsHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/services/{id}/update",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            serviceUpdateParams params;
            params.ReadParams(req);
            serviceUpdateResponse res = this->handler_->serviceUpdateHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/session",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            sessionParams params;
            params.ReadParams(req);
            sessionResponse res = this->handler_->sessionHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/swarm/init",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            swarmInitParams params;
            params.ReadParams(req);
            swarmInitResponse res = this->handler_->swarmInitHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/swarm",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            swarmInspectParams params;
            params.ReadParams(req);
            swarmInspectResponse res = this->handler_->swarmInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/swarm/join",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            swarmJoinParams params;
            params.ReadParams(req);
            swarmJoinResponse res = this->handler_->swarmJoinHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/swarm/leave",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            swarmLeaveParams params;
            params.ReadParams(req);
            swarmLeaveResponse res = this->handler_->swarmLeaveHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/swarm/unlock",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            swarmUnlockParams params;
            params.ReadParams(req);
            swarmUnlockResponse res = this->handler_->swarmUnlockHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/swarm/unlockkey",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            swarmUnlockkeyParams params;
            params.ReadParams(req);
            swarmUnlockkeyResponse res = this->handler_->swarmUnlockkeyHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/swarm/update",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            swarmUpdateParams params;
            params.ReadParams(req);
            swarmUpdateResponse res = this->handler_->swarmUpdateHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/auth",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            systemAuthParams params;
            params.ReadParams(req);
            systemAuthResponse res = this->handler_->systemAuthHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/system/df",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            systemDataUsageParams params;
            params.ReadParams(req);
            systemDataUsageResponse res = this->handler_->systemDataUsageHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/events",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            systemEventsParams params;
            params.ReadParams(req);
            systemEventsResponse res = this->handler_->systemEventsHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/info",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            systemInfoParams params;
            params.ReadParams(req);
            systemInfoResponse res = this->handler_->systemInfoHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/_ping",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            systemPingParams params;
            params.ReadParams(req);
            systemPingResponse res = this->handler_->systemPingHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("HEAD", "/_ping",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            systemPingHeadParams params;
            params.ReadParams(req);
            systemPingHeadResponse res = this->handler_->systemPingHeadHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/version",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            systemVersionParams params;
            params.ReadParams(req);
            systemVersionResponse res = this->handler_->systemVersionHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("GET", "/tasks/{id}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            taskInspectParams params;
            params.ReadParams(req);
            taskInspectResponse res = this->handler_->taskInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/tasks",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            taskListParams params;
            params.ReadParams(req);
            taskListResponse res = this->handler_->taskListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/tasks/{id}/logs",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            taskLogsParams params;
            params.ReadParams(req);
            taskLogsResponse res = this->handler_->taskLogsHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();

    // std::function<void(IOASClientRequest & req, IOASClientResponse &resp)>
    b.AddRoute("POST", "/volumes/create",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            volumeCreateParams params;
            params.ReadParams(req);
            volumeCreateResponse res = this->handler_->volumeCreateHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("DELETE", "/volumes/{name}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            volumeDeleteParams params;
            params.ReadParams(req);
            volumeDeleteResponse res = this->handler_->volumeDeleteHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/volumes/{name}",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            volumeInspectParams params;
            params.ReadParams(req);
            volumeInspectResponse res = this->handler_->volumeInspectHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("GET", "/volumes",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            volumeListParams params;
            params.ReadParams(req);
            volumeListResponse res = this->handler_->volumeListHandleFunc(params);
            res.WriteResponse(resp);
        });
    b.AddRoute("POST", "/volumes/prune",
        [this](IOASClientRequest & req, IOASClientResponse &resp)
        {
            
            volumePruneParams params;
            params.ReadParams(req);
            volumePruneResponse res = this->handler_->volumePruneHandleFunc(params);
            res.WriteResponse(resp);
        });

    this->router_ = b.Build();
}

bool Server::GetHandlerFunc(std::string const & method, std::string const & path, PathParamValue &paramsRet, std::function<void(IOASClientRequest &, IOASClientResponse &)> & ret)
{
    bool ok = this->router_.LookUp(method, path, paramsRet, ret);
    return ok;
}



configCreateResponse ServerHandler::configCreateHandleFunc(configCreateParams params)
{
    // not implemented
    return configCreateResponse{};
}
configDeleteResponse ServerHandler::configDeleteHandleFunc(configDeleteParams params)
{
    // not implemented
    return configDeleteResponse{};
}
configInspectResponse ServerHandler::configInspectHandleFunc(configInspectParams params)
{
    // not implemented
    return configInspectResponse{};
}
configListResponse ServerHandler::configListHandleFunc(configListParams params)
{
    // not implemented
    return configListResponse{};
}
configUpdateResponse ServerHandler::configUpdateHandleFunc(configUpdateParams params)
{
    // not implemented
    return configUpdateResponse{};
}


containerArchiveResponse ServerHandler::containerArchiveHandleFunc(containerArchiveParams params)
{
    // not implemented
    return containerArchiveResponse{};
}
containerArchiveInfoResponse ServerHandler::containerArchiveInfoHandleFunc(containerArchiveInfoParams params)
{
    // not implemented
    return containerArchiveInfoResponse{};
}
containerAttachResponse ServerHandler::containerAttachHandleFunc(containerAttachParams params)
{
    // not implemented
    return containerAttachResponse{};
}
containerAttachWebsocketResponse ServerHandler::containerAttachWebsocketHandleFunc(containerAttachWebsocketParams params)
{
    // not implemented
    return containerAttachWebsocketResponse{};
}
containerChangesResponse ServerHandler::containerChangesHandleFunc(containerChangesParams params)
{
    // not implemented
    return containerChangesResponse{};
}
containerCreateResponse ServerHandler::containerCreateHandleFunc(containerCreateParams params)
{
    // not implemented
    return containerCreateResponse{};
}
containerDeleteResponse ServerHandler::containerDeleteHandleFunc(containerDeleteParams params)
{
    // not implemented
    return containerDeleteResponse{};
}
containerExportResponse ServerHandler::containerExportHandleFunc(containerExportParams params)
{
    // not implemented
    return containerExportResponse{};
}
containerInspectResponse ServerHandler::containerInspectHandleFunc(containerInspectParams params)
{
    // not implemented
    return containerInspectResponse{};
}
containerKillResponse ServerHandler::containerKillHandleFunc(containerKillParams params)
{
    // not implemented
    return containerKillResponse{};
}
containerListResponse ServerHandler::containerListHandleFunc(containerListParams params)
{
    // not implemented
    return containerListResponse{};
}
containerLogsResponse ServerHandler::containerLogsHandleFunc(containerLogsParams params)
{
    // not implemented
    return containerLogsResponse{};
}
containerPauseResponse ServerHandler::containerPauseHandleFunc(containerPauseParams params)
{
    // not implemented
    return containerPauseResponse{};
}
containerPruneResponse ServerHandler::containerPruneHandleFunc(containerPruneParams params)
{
    // not implemented
    return containerPruneResponse{};
}
containerRenameResponse ServerHandler::containerRenameHandleFunc(containerRenameParams params)
{
    // not implemented
    return containerRenameResponse{};
}
containerResizeResponse ServerHandler::containerResizeHandleFunc(containerResizeParams params)
{
    // not implemented
    return containerResizeResponse{};
}
containerRestartResponse ServerHandler::containerRestartHandleFunc(containerRestartParams params)
{
    // not implemented
    return containerRestartResponse{};
}
containerStartResponse ServerHandler::containerStartHandleFunc(containerStartParams params)
{
    // not implemented
    return containerStartResponse{};
}
containerStatsResponse ServerHandler::containerStatsHandleFunc(containerStatsParams params)
{
    // not implemented
    return containerStatsResponse{};
}
containerStopResponse ServerHandler::containerStopHandleFunc(containerStopParams params)
{
    // not implemented
    return containerStopResponse{};
}
containerTopResponse ServerHandler::containerTopHandleFunc(containerTopParams params)
{
    // not implemented
    return containerTopResponse{};
}
containerUnpauseResponse ServerHandler::containerUnpauseHandleFunc(containerUnpauseParams params)
{
    // not implemented
    return containerUnpauseResponse{};
}
containerUpdateResponse ServerHandler::containerUpdateHandleFunc(containerUpdateParams params)
{
    // not implemented
    return containerUpdateResponse{};
}
containerWaitResponse ServerHandler::containerWaitHandleFunc(containerWaitParams params)
{
    // not implemented
    return containerWaitResponse{};
}
putContainerArchiveResponse ServerHandler::putContainerArchiveHandleFunc(putContainerArchiveParams params)
{
    // not implemented
    return putContainerArchiveResponse{};
}


distributionInspectResponse ServerHandler::distributionInspectHandleFunc(distributionInspectParams params)
{
    // not implemented
    return distributionInspectResponse{};
}


containerExecResponse ServerHandler::containerExecHandleFunc(containerExecParams params)
{
    // not implemented
    return containerExecResponse{};
}
execInspectResponse ServerHandler::execInspectHandleFunc(execInspectParams params)
{
    // not implemented
    return execInspectResponse{};
}
execResizeResponse ServerHandler::execResizeHandleFunc(execResizeParams params)
{
    // not implemented
    return execResizeResponse{};
}
execStartResponse ServerHandler::execStartHandleFunc(execStartParams params)
{
    // not implemented
    return execStartResponse{};
}


buildPruneResponse ServerHandler::buildPruneHandleFunc(buildPruneParams params)
{
    // not implemented
    return buildPruneResponse{};
}
imageBuildResponse ServerHandler::imageBuildHandleFunc(imageBuildParams params)
{
    // not implemented
    return imageBuildResponse{};
}
imageCommitResponse ServerHandler::imageCommitHandleFunc(imageCommitParams params)
{
    // not implemented
    return imageCommitResponse{};
}
imageCreateResponse ServerHandler::imageCreateHandleFunc(imageCreateParams params)
{
    // not implemented
    return imageCreateResponse{};
}
imageDeleteResponse ServerHandler::imageDeleteHandleFunc(imageDeleteParams params)
{
    // not implemented
    return imageDeleteResponse{};
}
imageGetResponse ServerHandler::imageGetHandleFunc(imageGetParams params)
{
    // not implemented
    return imageGetResponse{};
}
imageGetAllResponse ServerHandler::imageGetAllHandleFunc(imageGetAllParams params)
{
    // not implemented
    return imageGetAllResponse{};
}
imageHistoryResponse ServerHandler::imageHistoryHandleFunc(imageHistoryParams params)
{
    // not implemented
    return imageHistoryResponse{};
}
imageInspectResponse ServerHandler::imageInspectHandleFunc(imageInspectParams params)
{
    // not implemented
    return imageInspectResponse{};
}
imageListResponse ServerHandler::imageListHandleFunc(imageListParams params)
{
    // not implemented
    return imageListResponse{};
}
imageLoadResponse ServerHandler::imageLoadHandleFunc(imageLoadParams params)
{
    // not implemented
    return imageLoadResponse{};
}
imagePruneResponse ServerHandler::imagePruneHandleFunc(imagePruneParams params)
{
    // not implemented
    return imagePruneResponse{};
}
imagePushResponse ServerHandler::imagePushHandleFunc(imagePushParams params)
{
    // not implemented
    return imagePushResponse{};
}
imageSearchResponse ServerHandler::imageSearchHandleFunc(imageSearchParams params)
{
    // not implemented
    return imageSearchResponse{};
}
imageTagResponse ServerHandler::imageTagHandleFunc(imageTagParams params)
{
    // not implemented
    return imageTagResponse{};
}


networkConnectResponse ServerHandler::networkConnectHandleFunc(networkConnectParams params)
{
    // not implemented
    return networkConnectResponse{};
}
networkCreateResponse ServerHandler::networkCreateHandleFunc(networkCreateParams params)
{
    // not implemented
    return networkCreateResponse{};
}
networkDeleteResponse ServerHandler::networkDeleteHandleFunc(networkDeleteParams params)
{
    // not implemented
    return networkDeleteResponse{};
}
networkDisconnectResponse ServerHandler::networkDisconnectHandleFunc(networkDisconnectParams params)
{
    // not implemented
    return networkDisconnectResponse{};
}
networkInspectResponse ServerHandler::networkInspectHandleFunc(networkInspectParams params)
{
    // not implemented
    return networkInspectResponse{};
}
networkListResponse ServerHandler::networkListHandleFunc(networkListParams params)
{
    // not implemented
    return networkListResponse{};
}
networkPruneResponse ServerHandler::networkPruneHandleFunc(networkPruneParams params)
{
    // not implemented
    return networkPruneResponse{};
}


nodeDeleteResponse ServerHandler::nodeDeleteHandleFunc(nodeDeleteParams params)
{
    // not implemented
    return nodeDeleteResponse{};
}
nodeInspectResponse ServerHandler::nodeInspectHandleFunc(nodeInspectParams params)
{
    // not implemented
    return nodeInspectResponse{};
}
nodeListResponse ServerHandler::nodeListHandleFunc(nodeListParams params)
{
    // not implemented
    return nodeListResponse{};
}
nodeUpdateResponse ServerHandler::nodeUpdateHandleFunc(nodeUpdateParams params)
{
    // not implemented
    return nodeUpdateResponse{};
}


getPluginPrivilegesResponse ServerHandler::getPluginPrivilegesHandleFunc(getPluginPrivilegesParams params)
{
    // not implemented
    return getPluginPrivilegesResponse{};
}
pluginCreateResponse ServerHandler::pluginCreateHandleFunc(pluginCreateParams params)
{
    // not implemented
    return pluginCreateResponse{};
}
pluginDeleteResponse ServerHandler::pluginDeleteHandleFunc(pluginDeleteParams params)
{
    // not implemented
    return pluginDeleteResponse{};
}
pluginDisableResponse ServerHandler::pluginDisableHandleFunc(pluginDisableParams params)
{
    // not implemented
    return pluginDisableResponse{};
}
pluginEnableResponse ServerHandler::pluginEnableHandleFunc(pluginEnableParams params)
{
    // not implemented
    return pluginEnableResponse{};
}
pluginInspectResponse ServerHandler::pluginInspectHandleFunc(pluginInspectParams params)
{
    // not implemented
    return pluginInspectResponse{};
}
pluginListResponse ServerHandler::pluginListHandleFunc(pluginListParams params)
{
    // not implemented
    return pluginListResponse{};
}
pluginPullResponse ServerHandler::pluginPullHandleFunc(pluginPullParams params)
{
    // not implemented
    return pluginPullResponse{};
}
pluginPushResponse ServerHandler::pluginPushHandleFunc(pluginPushParams params)
{
    // not implemented
    return pluginPushResponse{};
}
pluginSetResponse ServerHandler::pluginSetHandleFunc(pluginSetParams params)
{
    // not implemented
    return pluginSetResponse{};
}
pluginUpgradeResponse ServerHandler::pluginUpgradeHandleFunc(pluginUpgradeParams params)
{
    // not implemented
    return pluginUpgradeResponse{};
}


secretCreateResponse ServerHandler::secretCreateHandleFunc(secretCreateParams params)
{
    // not implemented
    return secretCreateResponse{};
}
secretDeleteResponse ServerHandler::secretDeleteHandleFunc(secretDeleteParams params)
{
    // not implemented
    return secretDeleteResponse{};
}
secretInspectResponse ServerHandler::secretInspectHandleFunc(secretInspectParams params)
{
    // not implemented
    return secretInspectResponse{};
}
secretListResponse ServerHandler::secretListHandleFunc(secretListParams params)
{
    // not implemented
    return secretListResponse{};
}
secretUpdateResponse ServerHandler::secretUpdateHandleFunc(secretUpdateParams params)
{
    // not implemented
    return secretUpdateResponse{};
}


serviceCreateResponse ServerHandler::serviceCreateHandleFunc(serviceCreateParams params)
{
    // not implemented
    return serviceCreateResponse{};
}
serviceDeleteResponse ServerHandler::serviceDeleteHandleFunc(serviceDeleteParams params)
{
    // not implemented
    return serviceDeleteResponse{};
}
serviceInspectResponse ServerHandler::serviceInspectHandleFunc(serviceInspectParams params)
{
    // not implemented
    return serviceInspectResponse{};
}
serviceListResponse ServerHandler::serviceListHandleFunc(serviceListParams params)
{
    // not implemented
    return serviceListResponse{};
}
serviceLogsResponse ServerHandler::serviceLogsHandleFunc(serviceLogsParams params)
{
    // not implemented
    return serviceLogsResponse{};
}
serviceUpdateResponse ServerHandler::serviceUpdateHandleFunc(serviceUpdateParams params)
{
    // not implemented
    return serviceUpdateResponse{};
}


sessionResponse ServerHandler::sessionHandleFunc(sessionParams params)
{
    // not implemented
    return sessionResponse{};
}


swarmInitResponse ServerHandler::swarmInitHandleFunc(swarmInitParams params)
{
    // not implemented
    return swarmInitResponse{};
}
swarmInspectResponse ServerHandler::swarmInspectHandleFunc(swarmInspectParams params)
{
    // not implemented
    return swarmInspectResponse{};
}
swarmJoinResponse ServerHandler::swarmJoinHandleFunc(swarmJoinParams params)
{
    // not implemented
    return swarmJoinResponse{};
}
swarmLeaveResponse ServerHandler::swarmLeaveHandleFunc(swarmLeaveParams params)
{
    // not implemented
    return swarmLeaveResponse{};
}
swarmUnlockResponse ServerHandler::swarmUnlockHandleFunc(swarmUnlockParams params)
{
    // not implemented
    return swarmUnlockResponse{};
}
swarmUnlockkeyResponse ServerHandler::swarmUnlockkeyHandleFunc(swarmUnlockkeyParams params)
{
    // not implemented
    return swarmUnlockkeyResponse{};
}
swarmUpdateResponse ServerHandler::swarmUpdateHandleFunc(swarmUpdateParams params)
{
    // not implemented
    return swarmUpdateResponse{};
}


systemAuthResponse ServerHandler::systemAuthHandleFunc(systemAuthParams params)
{
    // not implemented
    return systemAuthResponse{};
}
systemDataUsageResponse ServerHandler::systemDataUsageHandleFunc(systemDataUsageParams params)
{
    // not implemented
    return systemDataUsageResponse{};
}
systemEventsResponse ServerHandler::systemEventsHandleFunc(systemEventsParams params)
{
    // not implemented
    return systemEventsResponse{};
}
systemInfoResponse ServerHandler::systemInfoHandleFunc(systemInfoParams params)
{
    // not implemented
    return systemInfoResponse{};
}
systemPingResponse ServerHandler::systemPingHandleFunc(systemPingParams params)
{
    // not implemented
    return systemPingResponse{};
}
systemPingHeadResponse ServerHandler::systemPingHeadHandleFunc(systemPingHeadParams params)
{
    // not implemented
    return systemPingHeadResponse{};
}
systemVersionResponse ServerHandler::systemVersionHandleFunc(systemVersionParams params)
{
    // not implemented
    return systemVersionResponse{};
}


taskInspectResponse ServerHandler::taskInspectHandleFunc(taskInspectParams params)
{
    // not implemented
    return taskInspectResponse{};
}
taskListResponse ServerHandler::taskListHandleFunc(taskListParams params)
{
    // not implemented
    return taskListResponse{};
}
taskLogsResponse ServerHandler::taskLogsHandleFunc(taskLogsParams params)
{
    // not implemented
    return taskLogsResponse{};
}


volumeCreateResponse ServerHandler::volumeCreateHandleFunc(volumeCreateParams params)
{
    // not implemented
    return volumeCreateResponse{};
}
volumeDeleteResponse ServerHandler::volumeDeleteHandleFunc(volumeDeleteParams params)
{
    // not implemented
    return volumeDeleteResponse{};
}
volumeInspectResponse ServerHandler::volumeInspectHandleFunc(volumeInspectParams params)
{
    // not implemented
    return volumeInspectResponse{};
}
volumeListResponse ServerHandler::volumeListHandleFunc(volumeListParams params)
{
    // not implemented
    return volumeListResponse{};
}
volumePruneResponse ServerHandler::volumePruneHandleFunc(volumePruneParams params)
{
    // not implemented
    return volumePruneResponse{};
}

