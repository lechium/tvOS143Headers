/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMIPBSSystemLoadMonitor : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _pbsSystemLoadNotificationToken;
	unsigned long long _pbsSystemLoad;

}

@property (readonly) unsigned long long pbsSystemLoad;              //@synthesize pbsSystemLoad=_pbsSystemLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)shortDescription;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(BOOL)isIdle;
-(void)_updatePBSSystemLoad;
-(unsigned long long)pbsSystemLoad;
@end

