#include "gtest/gtest.h"

#include "ServiceSpecModeReplicatedJob.h"

TEST(ServiceSpecModeReplicatedJob, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceSpecModeReplicatedJob x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}