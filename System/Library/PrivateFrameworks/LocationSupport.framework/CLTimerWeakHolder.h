/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLTimer;

@interface CLTimerWeakHolder : NSObject {

	CLTimer* _timer;

}

@property (nonatomic,__weak,readonly) CLTimer * timer;              //@synthesize timer=_timer - In the implementation block
+(id)holderWithTimer:(id)arg1 ;
-(CLTimer *)timer;
-(id)initWithTimer:(id)arg1 ;
@end

