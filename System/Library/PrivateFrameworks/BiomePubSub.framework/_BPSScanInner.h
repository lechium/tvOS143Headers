/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class NSString;

@interface _BPSScanInner : NSObject <BPSSubscriber> {

	id<BPSSubscriber> _downstream;
	id _result;
	/*^block*/id _nextPartialResult;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) id result;                                 //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id nextPartialResult;                        //@synthesize nextPartialResult=_nextPartialResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)result;
-(void)setResult:(id)arg1 ;
-(id<BPSSubscriber>)downstream;
-(long long)receiveInput:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(id)nextPartialResult;
-(id)initWithDownstream:(id)arg1 nextPartialResult:(/*^block*/id)arg2 initialResult:(id)arg3 ;
-(void)setNextPartialResult:(id)arg1 ;
@end

