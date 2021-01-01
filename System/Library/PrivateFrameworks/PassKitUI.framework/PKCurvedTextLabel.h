/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSTextStorage, NSLayoutManager, NSTextContainer, UIColor, UIFont, NSDictionary;

@interface PKCurvedTextLabel : UILabel {

	NSTextStorage* _textStorage;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	double _textWidth;
	CGRect _cachedBounds;
	CGRect _cachedGlyphsBoundingRect;
	CGSize _cachedSize;
	BOOL _cachedSizeIsValid;
	UIColor* _textColor;
	UIFont* _font;
	BOOL _hasMonospacedNumbers;
	BOOL _interior;
	double _circleRadius;
	double _centerAngle;
	double _maxAngularWidth;

}

@property (assign,nonatomic) double circleRadius;                               //@synthesize circleRadius=_circleRadius - In the implementation block
@property (assign,nonatomic) BOOL interior;                                     //@synthesize interior=_interior - In the implementation block
@property (assign,nonatomic) double centerAngle;                                //@synthesize centerAngle=_centerAngle - In the implementation block
@property (assign,nonatomic) double maxAngularWidth;                            //@synthesize maxAngularWidth=_maxAngularWidth - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textAttributes; 
@property (nonatomic,readonly) double linearWidth; 
@property (nonatomic,readonly) CGRect textBoundingRect; 
-(id)init;
-(id)text;
-(void)setText:(id)arg1 ;
-(double)_distance;
-(id)font;
-(void)setFont:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)textColor;
-(void)setTextColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(id)attributedText;
-(void)setAttributedText:(id)arg1 ;
-(NSDictionary *)textAttributes;
-(void)_updateTextColor;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)invalidateCachedSize;
-(void)_updateMaxSize;
-(CGRect)_glyphsBoundingRect;
-(CGPoint)_offsetOfBoundingRect:(CGRect)arg1 inRect:(CGRect)arg2 ;
-(CTLineRef)_newLineFromDrawableTextStorage;
-(void)_enumerateTransformsForDrawableCharacters:(/*^block*/id)arg1 ;
-(NSRange)_drawableCharacterRange:(NSRange*)arg1 ;
-(void)setInterior:(BOOL)arg1 ;
-(void)setCircleRadius:(double)arg1 ;
-(void)setCenterAngle:(double)arg1 ;
-(void)setMaxAngularWidth:(double)arg1 ;
-(double)linearWidth;
-(CGRect)textBoundingRect;
-(double)circleRadius;
-(BOOL)interior;
-(double)centerAngle;
-(double)maxAngularWidth;
@end

