/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDAccessorySettingsMessageController
@required
-(void)onMessageUpdateValue:(id)arg1 settingIdentifier:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(/*^block*/id)arg5;
-(void)onMessageAddConstraint:(id)arg1 settingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)onMessageRemoveConstraint:(id)arg1 settingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)onMessageUpdateConstraints:(id)arg1 settingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)onMessageReplaceConstraintsWithAdditions:(id)arg1 constraintIdsToRemove:(id)arg2 settingIdentifier:(id)arg3 senderProductClass:(long long)arg4 completion:(/*^block*/id)arg5;

@end
