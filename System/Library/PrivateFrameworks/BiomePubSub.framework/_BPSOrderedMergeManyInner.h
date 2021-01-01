/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/_BPSAbstractOrderedMerge.h>

@interface _BPSOrderedMergeManyInner : _BPSAbstractOrderedMerge {

	/*^block*/id _comparator;

}

@property (nonatomic,copy) id comparator;              //@synthesize comparator=_comparator - In the implementation block
-(id)comparator;
-(void)setComparator:(id)arg1 ;
-(long long)compareFirst:(id)arg1 withSecond:(id)arg2 ;
-(id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2 comparator:(/*^block*/id)arg3 ;
@end
