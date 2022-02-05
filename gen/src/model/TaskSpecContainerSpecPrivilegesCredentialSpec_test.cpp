#include "gtest/gtest.h"

#include "TaskSpecContainerSpecPrivilegesCredentialSpec.h"

TEST(TaskSpecContainerSpecPrivilegesCredentialSpec, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecContainerSpecPrivilegesCredentialSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}