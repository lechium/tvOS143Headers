/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

@interface VUIFeedbackTableLayout : TVViewLayout {

	VUITextLayout* _headerTextLayout;
	VUITextLayout* _descriptionTextLayout;
	double _middleSpacing;

}

@property (nonatomic,readonly) VUITextLayout * headerTextLayout;                   //@synthesize headerTextLayout=_headerTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;              //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) double middleSpacing;                               //@synthesize middleSpacing=_middleSpacing - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(void)_setupLayout;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)headerTextLayout;
-(double)middleSpacing;
@end

