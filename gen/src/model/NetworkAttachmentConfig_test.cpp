#include "gtest/gtest.h"

#include "NetworkAttachmentConfig.h"

TEST(NetworkAttachmentConfig, Deserialize)
{
    // TODO: generate test content
    openapi::NetworkAttachmentConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}