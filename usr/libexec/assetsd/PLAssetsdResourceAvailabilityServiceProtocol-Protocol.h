//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSProgress, NSSet, PHMakeResourceAvailableRequest, PHVideoXPCRequest, PLXPCShMemObject;

@protocol PLAssetsdResourceAvailabilityServiceProtocol <NSObject>
- (void)initializeSharedMemoryForCacheMetricsCollector:(PLXPCShMemObject *)arg1;
- (NSProgress *)appyCorrectionsToResourceWithRequest:(PHMakeResourceAvailableRequest *)arg1 errorCodes:(NSSet *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (NSProgress *)runVideoRequest:(PHVideoXPCRequest *)arg1 reply:(void (^)(_Bool, NSURL *, NSDictionary *, NSDictionary *, NSError *))arg2;
- (NSProgress *)makeResourceAvailableWithRequest:(PHMakeResourceAvailableRequest *)arg1 reply:(void (^)(_Bool, NSURL *, NSData *, NSDictionary *, NSError *))arg2;
@end
