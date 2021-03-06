//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFSyncSnapshot, NSString;
@protocol AFSyncBeginInfo, AFSyncChangeInfo, AFSyncConfiguration;

@protocol AFSyncHandler <NSObject>

@optional
- (NSString *)syncVerificationKeyForKey:(NSString *)arg1;
- (AFSyncSnapshot *)currentSyncSnapshot;
- (AFSyncSnapshot *)syncSnapshotForKey:(NSString *)arg1;
- (void)syncDidEnd;
- (void)getChangeAfterAnchor:(NSString *)arg1 changeInfo:(id <AFSyncChangeInfo>)arg2;
- (void)beginSyncWithInfo:(id <AFSyncBeginInfo>)arg1 configuration:(id <AFSyncConfiguration>)arg2;
- (void)beginSyncWithAnchor:(NSString *)arg1 validity:(NSString *)arg2 count:(long long)arg3 forKey:(NSString *)arg4 beginInfo:(id <AFSyncBeginInfo>)arg5 configuration:(id <AFSyncConfiguration>)arg6;
- (void)beginSyncWithAnchor:(NSString *)arg1 validity:(NSString *)arg2 count:(long long)arg3 forKey:(NSString *)arg4 beginInfo:(id <AFSyncBeginInfo>)arg5;
- (void)beginSyncWithAnchor:(NSString *)arg1 validity:(NSString *)arg2 forKey:(NSString *)arg3 beginInfo:(id <AFSyncBeginInfo>)arg4;
@end

