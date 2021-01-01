/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSPublisher.h>

@class BPSSubscriberList, BPSFutureResult;

@interface BPSFuture : BPSPublisher {

	os_unfair_lock_s _lock;
	BPSSubscriberList* _downstreams;
	BPSFutureResult* _result;

}

@property (nonatomic,retain) BPSSubscriberList * downstreams;              //@synthesize downstreams=_downstreams - In the implementation block
@property (nonatomic,retain) BPSFutureResult * result;                     //@synthesize result=_result - In the implementation block
-(BPSFutureResult *)result;
-(void)setResult:(BPSFutureResult *)arg1 ;
-(void)subscribe:(id)arg1 ;
-(void)disassociate:(long long)arg1 ;
-(BPSSubscriberList *)downstreams;
-(void)setDownstreams:(BPSSubscriberList *)arg1 ;
-(id)initWithAttemptToFulfill:(/*^block*/id)arg1 ;
@end

