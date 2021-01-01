/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDSaveUserPrivacySettingsOperation : CKDOperation {

	long long _discoverable;

}

@property (assign,nonatomic) long long discoverable;              //@synthesize discoverable=_discoverable - In the implementation block
+(long long)isPredominatelyDownload;
-(void)main;
-(int)operationType;
-(long long)discoverable;
-(id)activityCreate;
-(void)setDiscoverable:(long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)shouldCheckAppVersion;
@end

