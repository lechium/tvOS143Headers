/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DCDevice : NSObject

@property (getter=isSupported,readonly) BOOL supported; 
+(id)currentDevice;
-(BOOL)isSupported;
-(BOOL)_isSupportedReturningError:(id*)arg1 ;
-(void)generateTokenWithCompletionHandler:(/*^block*/id)arg1 ;
@end

