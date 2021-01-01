/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSFilterProducer.h>

@interface _BPSRemoveDuplicatesInner : BPSFilterProducer {

	/*^block*/id _isDuplicate;
	id _last;

}

@property (nonatomic,readonly) id isDuplicate;              //@synthesize isDuplicate=_isDuplicate - In the implementation block
@property (nonatomic,retain) id last;                       //@synthesize last=_last - In the implementation block
-(id)last;
-(void)setLast:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 isDuplicate:(/*^block*/id)arg2 ;
-(id)receiveNewValue:(id)arg1 ;
-(id)isDuplicate;
@end
