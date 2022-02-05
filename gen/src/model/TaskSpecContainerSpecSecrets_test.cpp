#include "gtest/gtest.h"

#include "TaskSpecContainerSpecSecrets.h"

TEST(TaskSpecContainerSpecSecrets, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecContainerSpecSecrets x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}