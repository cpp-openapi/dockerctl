#include "gtest/gtest.h"

#include "ResourceObject.h"

TEST(ResourceObject, Deserialize)
{
    // TODO: generate test content
    openapi::ResourceObject x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}