//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AIMEvent.h"

@class NSNumber, NSURL, NSURLSessionTaskMetrics;

@interface AIMDownloadEvent : AIMEvent
{
}

- (id)copyMetricsDictionary;	// IMP=0x00000001002f1360
@property _Bool deltaPackage;
@property unsigned long long requestCount;
@property(retain) NSURLSessionTaskMetrics *taskMetrics;
@property(retain) NSURL *packageURL;
@property(retain) NSNumber *drmMode;

@end

