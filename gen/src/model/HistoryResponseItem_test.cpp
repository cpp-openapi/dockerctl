#include "gtest/gtest.h"

#include "HistoryResponseItem.h"

TEST(HistoryResponseItem, Deserialize)
{
    // TODO: generate test content
    openapi::HistoryResponseItem x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}