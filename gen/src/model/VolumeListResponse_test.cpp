#include "gtest/gtest.h"

#include "VolumeListResponse.h"

TEST(VolumeListResponse, Deserialize)
{
    // TODO: generate test content
    openapi::VolumeListResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}