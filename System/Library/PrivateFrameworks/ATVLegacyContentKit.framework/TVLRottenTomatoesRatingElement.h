/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSDictionary, UIColor;

@interface TVLRottenTomatoesRatingElement : TVLElement {

	float _ratingPercentage;
	NSString* _freshness;
	NSDictionary* _styleKeyValues;

}

@property (nonatomic,retain) NSDictionary * styleKeyValues;              //@synthesize styleKeyValues=_styleKeyValues - In the implementation block
@property (nonatomic,copy) NSString * freshness;                         //@synthesize freshness=_freshness - In the implementation block
@property (assign,nonatomic) float ratingPercentage;                     //@synthesize ratingPercentage=_ratingPercentage - In the implementation block
@property (nonatomic,retain,readonly) UIColor * labelColor; 
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)labelColor;
-(NSString *)freshness;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(float)ratingPercentage;
-(NSDictionary *)styleKeyValues;
-(void)setStyleKeyValues:(NSDictionary *)arg1 ;
-(void)setRatingPercentage:(float)arg1 ;
-(void)setFreshness:(NSString *)arg1 ;
@end

