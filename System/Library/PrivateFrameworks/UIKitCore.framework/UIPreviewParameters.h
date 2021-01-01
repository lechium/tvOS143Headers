/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIBezierPath, UIColor;

@interface UIPreviewParameters : NSObject <NSCopying> {

	NSArray* _textLineRects;
	BOOL _appliesShadow;
	BOOL _hidesSourceViewDuringDropAnimation;
	UIBezierPath* _visiblePath;
	UIBezierPath* _shadowPath;
	UIColor* _backgroundColor;
	long long _previewMode;
	double _textPathCornerRadius;
	UIEdgeInsets _textPathInsets;

}

@property (assign,setter=_setPreviewMode:,getter=_previewMode,nonatomic) long long previewMode;                                      //@synthesize previewMode=_previewMode - In the implementation block
@property (assign,nonatomic) BOOL appliesShadow;                                                                                     //@synthesize appliesShadow=_appliesShadow - In the implementation block
@property (assign,nonatomic) BOOL hidesSourceViewDuringDropAnimation;                                                                //@synthesize hidesSourceViewDuringDropAnimation=_hidesSourceViewDuringDropAnimation - In the implementation block
@property (nonatomic,readonly) UIBezierPath * effectiveShadowPath; 
@property (assign,setter=_setTextPathInsets:,getter=_textPathInsets,nonatomic) UIEdgeInsets textPathInsets;                          //@synthesize textPathInsets=_textPathInsets - In the implementation block
@property (assign,setter=_setTextPathCornerRadius:,getter=_textPathCornerRadius,nonatomic) double textPathCornerRadius;              //@synthesize textPathCornerRadius=_textPathCornerRadius - In the implementation block
@property (getter=_isSingleLineText,nonatomic,readonly) BOOL singleLineText; 
@property (nonatomic,copy) UIBezierPath * visiblePath;                                                                               //@synthesize visiblePath=_visiblePath - In the implementation block
@property (nonatomic,copy) UIBezierPath * shadowPath;                                                                                //@synthesize shadowPath=_shadowPath - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                                                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setShadowPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)shadowPath;
-(long long)_previewMode;
-(UIBezierPath *)visiblePath;
-(BOOL)appliesShadow;
-(double)_textPathCornerRadius;
-(UIEdgeInsets)_textPathInsets;
-(BOOL)hidesSourceViewDuringDropAnimation;
-(id)initWithTextLineRects:(id)arg1 ;
-(id)_initWithMode:(long long)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3 ;
-(BOOL)_isSingleLineText;
-(void)_setTextPathInsets:(UIEdgeInsets)arg1 ;
-(void)_setTextPathCornerRadius:(double)arg1 ;
-(UIBezierPath *)effectiveShadowPath;
-(void)setVisiblePath:(UIBezierPath *)arg1 ;
-(void)_setPreviewMode:(long long)arg1 ;
-(void)setAppliesShadow:(BOOL)arg1 ;
-(void)setHidesSourceViewDuringDropAnimation:(BOOL)arg1 ;
@end

