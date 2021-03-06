/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BLServiceProxy;

@interface BLMetrics : NSObject {

	BLServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) BLServiceProxy * serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
+(id)metrics;
+(void)flushInProcessWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)flush;
-(void)setServiceProxy:(BLServiceProxy *)arg1 ;
-(BLServiceProxy *)serviceProxy;
-(void)enqueueEvents:(id)arg1 ;
@end

