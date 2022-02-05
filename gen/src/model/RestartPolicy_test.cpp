#include "gtest/gtest.h"

#include "RestartPolicy.h"

TEST(RestartPolicy, Deserialize)
{
    // TODO: generate test content
    openapi::RestartPolicy x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}