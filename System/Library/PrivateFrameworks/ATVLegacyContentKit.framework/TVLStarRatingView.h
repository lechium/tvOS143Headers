/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVStarRatingView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLStarRatingElement;

@interface TVLStarRatingView : TVStarRatingView <ATVUpdatable> {

	TVLStarRatingElement* _starRatingElement;

}

@property (nonatomic,retain) TVLStarRatingElement * starRatingElement;              //@synthesize starRatingElement=_starRatingElement - In the implementation block
-(id)initWithStarRatingElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(TVLStarRatingElement *)starRatingElement;
-(void)setStarRatingElement:(TVLStarRatingElement *)arg1 ;
@end

