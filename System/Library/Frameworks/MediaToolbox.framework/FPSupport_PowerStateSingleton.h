/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface FPSupport_PowerStateSingleton : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQ;

}
+(id)sharedFPSupportPowerStateSingleton;
-(id)init;
-(void)dealloc;
-(void)postNotification;
-(void)_didChangePowerState:(id)arg1 ;
@end

