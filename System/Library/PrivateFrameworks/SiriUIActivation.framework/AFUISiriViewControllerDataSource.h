/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFUISiriViewControllerDataSource <NSObject>
@optional
-(id)currentCarPlaySupportedOEMAppsForSiriViewController:(id)arg1;
-(id)starkAppBundleIdentifierContextForSiriViewController:(id)arg1;

@required
-(UIEdgeInsets*)safeAreaInsetsForSceneCreationInSiriViewController:(id)arg1;
-(id)siriViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
-(unsigned long long)lockStateForSiriViewController:(id)arg1;
-(id)bulletinsForSiriViewController:(id)arg1;
-(id)contextAppInfosForSiriViewController:(id)arg1;

@end
