/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation {

	NSArray* _containerPrivacySettings;

}

@property (nonatomic,copy) NSArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
+(id)appPermissionGroupsFromContainerPrivacySettings:(id)arg1 ;
-(void)main;
-(int)operationType;
-(id)activityCreate;
-(NSArray *)containerPrivacySettings;
-(BOOL)shouldCheckAppVersion;
-(void)setContainerPrivacySettings:(NSArray *)arg1 ;
@end
