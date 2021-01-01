/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCAction.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface MCTransitionTrigger : MCAction {

	NSMutableDictionary* _transitionAttributes;
	NSString* _transitionID;
	double _transitionDuration;
	NSString* _transitionDestinationPlugID;

}

@property (copy) NSString * transitionID;                                    //@synthesize transitionID=_transitionID - In the implementation block
@property (assign,nonatomic) double transitionDuration;                      //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,copy) NSDictionary * transitionAttributes;              //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
@property (copy) NSString * transitionDestinationPlugID;                     //@synthesize transitionDestinationPlugID=_transitionDestinationPlugID - In the implementation block
+(id)transitionForTargetPlugObjectID:(id)arg1 withTransitionID:(id)arg2 ;
-(id)description;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(void)setTransitionDestinationPlugID:(NSString *)arg1 ;
-(NSDictionary *)transitionAttributes;
-(NSString *)transitionID;
-(void)demolish;
-(NSString *)transitionDestinationPlugID;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

