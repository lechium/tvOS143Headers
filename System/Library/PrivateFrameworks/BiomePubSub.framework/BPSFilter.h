/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSFilter : BPSPublisher {

	/*^block*/id _isIncluded;
	BPSPublisher* _upstream;

}

@property (nonatomic,retain) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,readonly) id isIncluded;                      //@synthesize isIncluded=_isIncluded - In the implementation block
-(id)init;
-(void)subscribe:(id)arg1 ;
-(BPSPublisher *)upstream;
-(id)isIncluded;
-(id)initWithUpstream:(id)arg1 isIncluded:(/*^block*/id)arg2 ;
-(void)setUpstream:(BPSPublisher *)arg1 ;
@end
