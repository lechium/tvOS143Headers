/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BPSAggregator : NSObject {

	id _accumulator;
	/*^block*/id _closure;

}

@property (nonatomic,readonly) id accumulator;              //@synthesize accumulator=_accumulator - In the implementation block
@property (nonatomic,readonly) id closure;                  //@synthesize closure=_closure - In the implementation block
-(id)accumulator;
-(id)closure;
-(id)initWithAccumulator:(id)arg1 closure:(/*^block*/id)arg2 ;
@end

