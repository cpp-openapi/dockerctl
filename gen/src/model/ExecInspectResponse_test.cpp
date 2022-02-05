#include "gtest/gtest.h"

#include "ExecInspectResponse.h"

TEST(ExecInspectResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ExecInspectResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}