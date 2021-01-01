/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:22:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>

@class NSNumber, WFImage;

@interface WFSliderParameter : WFParameter {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}

@property (nonatomic,retain) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) WFImage * minimumIcon; 
@property (nonatomic,readonly) WFImage * maximumIcon; 
-(NSNumber *)minimumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(NSNumber *)maximumValue;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(id)defaultSerializedRepresentation;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg1 ;
-(BOOL)shouldAlignLabels;
-(WFImage *)minimumIcon;
-(WFImage *)maximumIcon;
-(id)localizedLabelWithState:(id)arg1 ;
@end

