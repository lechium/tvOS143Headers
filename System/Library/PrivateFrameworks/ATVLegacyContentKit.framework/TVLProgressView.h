/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class UIImage, UIImageView, TVLProgressBarElement;

@interface TVLProgressView : UIView <ATVUpdatable> {

	UIImage* _leftOnImage;
	UIImage* _leftOffImage;
	UIImage* _centerOnImage;
	UIImage* _centerOffImage;
	UIImage* _rightOnImage;
	UIImage* _rightOffImage;
	UIImageView* _leftEndImageView;
	UIImageView* _leftCenterImageView;
	UIImageView* _rightCenterImageView;
	UIImageView* _rightEndImageView;
	TVLProgressBarElement* _feedElement;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithProgressBarElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
@end

