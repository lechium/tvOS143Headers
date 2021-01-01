/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCPlug.h>

@class NSString, MCContainerNavigator, MCAction;

@interface MCPlugHaven : MCPlug {

	NSString* mIDInSupercontainer;
	MCContainerNavigator* mSupercontainer;

}

@property (setter=setIDInSupercontainer:,getter=idInSupercontainer,copy) NSString * idInSupercontainer; 
@property (assign) MCContainerNavigator * supercontainer; 
@property (nonatomic,retain) MCAction * actionOnCompletion; 
-(NSString *)idInSupercontainer;
-(void)demolish;
-(MCContainerNavigator *)supercontainer;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setSupercontainer:(MCContainerNavigator *)arg1 ;
-(void)setIDInSupercontainer:(id)arg1 ;
-(MCAction *)actionOnCompletion;
-(void)setActionOnCompletion:(MCAction *)arg1 ;
@end
