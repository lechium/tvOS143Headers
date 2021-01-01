/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>
#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class BPSSubscriptionStatus, NSString;

@interface BPSReduceProducer : BPSSubscription <BPSSubscriber> {

	os_unfair_lock_s _lock;
	BOOL _downstreamRequested;
	BOOL _cancelled;
	BOOL _completed;
	BOOL _upstreamCompleted;
	BOOL _empty;
	id _result;
	id _initial;
	/*^block*/id _reduce;
	BPSSubscriptionStatus* _status;
	id<BPSSubscriber> _downstream;

}

@property (nonatomic,copy) id reduce;                                     //@synthesize reduce=_reduce - In the implementation block
@property (nonatomic,retain) BPSSubscriptionStatus * status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                //@synthesize downstream=_downstream - In the implementation block
@property (assign,nonatomic) BOOL downstreamRequested;                    //@synthesize downstreamRequested=_downstreamRequested - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                              //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (assign,nonatomic) BOOL upstreamCompleted;                      //@synthesize upstreamCompleted=_upstreamCompleted - In the implementation block
@property (assign,nonatomic) BOOL empty;                                  //@synthesize empty=_empty - In the implementation block
@property (nonatomic,retain) id result;                                   //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) id initial;                                  //@synthesize initial=_initial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)safeMutableCopy:(id)arg1 ;
-(void)cancel;
-(id)result;
-(BPSSubscriptionStatus *)status;
-(BOOL)cancelled;
-(BOOL)completed;
-(void)setResult:(id)arg1 ;
-(void)setStatus:(BPSSubscriptionStatus *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(void)setInitial:(id)arg1 ;
-(id)initial;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)empty;
-(id<BPSSubscriber>)downstream;
-(id)receiveNewValue:(id)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 initial:(id)arg2 reduce:(/*^block*/id)arg3 ;
-(id)reduce;
-(BOOL)upstreamCompleted;
-(void)setUpstreamCompleted:(BOOL)arg1 ;
-(BOOL)downstreamRequested;
-(void)setDownstreamRequested:(BOOL)arg1 ;
-(void)setReduce:(id)arg1 ;
@end

