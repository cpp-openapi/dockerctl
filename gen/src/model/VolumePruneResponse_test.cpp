#include "gtest/gtest.h"

#include "VolumePruneResponse.h"

TEST(VolumePruneResponse, Deserialize)
{
    // TODO: generate test content
    openapi::VolumePruneResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}