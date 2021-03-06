//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSActivityDescription, IDSActivityInfo, NSArray, NSSet, NSString;

@protocol IDSActivityStateProvider <NSObject>
@property(readonly, nonatomic) _Bool hasActiveSubscription;
@property(retain, nonatomic) NSSet *storedActivityTopics;
- (NSArray *)storedSubscriptionsForActivity:(NSString *)arg1;
- (void)removeSubscriptionForActivity:(NSString *)arg1 subActivity:(NSString *)arg2;
- (void)storeSubscription:(IDSActivityInfo *)arg1 forActivity:(NSString *)arg2;
- (NSArray *)storedUpdatesForActivity:(NSString *)arg1;
- (void)storeUpdates:(NSArray *)arg1 forActivity:(NSString *)arg2;
- (IDSActivityDescription *)storedDescriptionForActivity:(NSString *)arg1;
- (void)storeActivityDescription:(IDSActivityDescription *)arg1 forActivity:(NSString *)arg2;
@end

