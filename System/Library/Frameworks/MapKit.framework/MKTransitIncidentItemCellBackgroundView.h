/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface MKTransitIncidentItemCellBackgroundView : UIView {

	double _scale;
	double _cornerRadius;
	long long _position;
	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (assign,nonatomic) long long position;                 //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
@end

