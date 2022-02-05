#include "gtest/gtest.h"

#include "TaskSpecNetworkAttachmentSpec.h"

TEST(TaskSpecNetworkAttachmentSpec, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecNetworkAttachmentSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}