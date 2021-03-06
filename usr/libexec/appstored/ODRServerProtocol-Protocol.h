//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSURL;

@protocol ODRServerProtocol <NSObject>
- (void)setAlwaysPreserved:(_Bool)arg1 forTags:(NSSet *)arg2 inBundle:(NSURL *)arg3;
- (void)setPreservationPriority:(double)arg1 forTags:(NSSet *)arg2 inBundle:(NSURL *)arg3;
- (void)okToPurgeAssetPacks:(NSArray *)arg1;
- (void)unpinTags:(NSSet *)arg1 inBundle:(NSURL *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)setLoadingPriority:(double)arg1 forTags:(NSSet *)arg2 inBundle:(NSURL *)arg3;
- (void)conditionallyPinTags:(NSSet *)arg1 inBundle:(NSURL *)arg2 completionHandler:(void (^)(_Bool, NSDictionary *))arg3;
- (void)pinTags:(NSSet *)arg1 inBundle:(NSURL *)arg2 priority:(double)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)tagStateInBundle:(NSURL *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)beginWithBundleURL:(NSURL *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)beginODRSessionWithBundleURL:(NSURL *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)hello:(void (^)(void))arg1;
@end

