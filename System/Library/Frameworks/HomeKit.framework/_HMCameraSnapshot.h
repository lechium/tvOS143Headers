/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/_HMCameraSource.h>

@class NSDate;

@interface _HMCameraSnapshot : _HMCameraSource {

	NSDate* _captureDate;

}

@property (nonatomic,copy,readonly) NSDate * captureDate;              //@synthesize captureDate=_captureDate - In the implementation block
-(void)dealloc;
-(NSDate *)captureDate;
-(id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 captureDate:(id)arg6 ;
-(void)_releaseSlotIdentifier;
@end

