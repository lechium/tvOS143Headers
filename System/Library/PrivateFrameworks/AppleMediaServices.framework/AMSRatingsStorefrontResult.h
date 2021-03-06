/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface AMSRatingsStorefrontResult : NSObject {

	NSArray* _ratingsStoreFronts;

}

@property (nonatomic,readonly) NSArray * ratingsStoreFronts;              //@synthesize ratingsStoreFronts=_ratingsStoreFronts - In the implementation block
-(id)initWithDictionaries:(id)arg1 mediaType:(unsigned long long)arg2 ;
-(id)_mapRatingsDictionaries:(id)arg1 withMediaType:(unsigned long long)arg2 ;
-(unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)arg1 ;
-(id)initWithURLResult:(id)arg1 mediaType:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 mediaType:(unsigned long long)arg2 ;
-(NSArray *)ratingsStoreFronts;
@end

