/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ODML.framework/ODML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol APOdmlRankable;
@class NSNumber;

@interface APOdmlSortableObject : NSObject {

	id<APOdmlRankable> _rankable;
	NSNumber* _pTTR;

}

@property (nonatomic,readonly) id<APOdmlRankable> rankable;              //@synthesize rankable=_rankable - In the implementation block
@property (nonatomic,readonly) NSNumber * pTTR;                          //@synthesize pTTR=_pTTR - In the implementation block
-(id<APOdmlRankable>)rankable;
-(id)initWithRankable:(id)arg1 andPTTR:(id)arg2 ;
-(NSNumber *)pTTR;
@end

