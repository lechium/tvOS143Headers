/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, CAGradientLayer;

@interface AFUISiriCompactGradientView : UIView {

	BOOL _isVisible;
	double _gradientHeight;
	NSString* _gradientType;
	double _gradientStartOpacity;
	double _gradientEndOpacity;
	CGPoint _gradientOrigin;

}

@property (nonatomic,readonly) CAGradientLayer * layer; 
@property (assign,nonatomic) double gradientHeight;                    //@synthesize gradientHeight=_gradientHeight - In the implementation block
@property (assign,nonatomic) CGPoint gradientOrigin;                   //@synthesize gradientOrigin=_gradientOrigin - In the implementation block
@property (nonatomic,retain) NSString * gradientType;                  //@synthesize gradientType=_gradientType - In the implementation block
@property (assign,nonatomic) double gradientStartOpacity;              //@synthesize gradientStartOpacity=_gradientStartOpacity - In the implementation block
@property (assign,nonatomic) double gradientEndOpacity;                //@synthesize gradientEndOpacity=_gradientEndOpacity - In the implementation block
+(Class)layerClass;
-(void)layoutSubviews;
-(NSString *)gradientType;
-(void)setGradientType:(NSString *)arg1 ;
-(double)gradientHeight;
-(void)setGradientHeight:(double)arg1 ;
-(void)_updateGradientOpacity;
-(id)_fadeInAnimation;
-(id)_fadeOutAnimation;
-(id)initWithGradientType:(id)arg1 ;
-(void)setGradientStartOpacity:(double)arg1 ;
-(void)setGradientEndOpacity:(double)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGPoint)gradientOrigin;
-(void)setGradientOrigin:(CGPoint)arg1 ;
-(double)gradientStartOpacity;
-(double)gradientEndOpacity;
@end

