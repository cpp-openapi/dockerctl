#include "gtest/gtest.h"

#include "EventMessage.h"

TEST(EventMessage, Deserialize)
{
    // TODO: generate test content
    openapi::EventMessage x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}