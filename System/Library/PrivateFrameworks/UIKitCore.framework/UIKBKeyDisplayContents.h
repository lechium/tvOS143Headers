/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface UIKBKeyDisplayContents : NSObject {

	BOOL _fillPath;
	BOOL _force1xImages;
	BOOL _stringKeycapOverImage;
	BOOL _flipImageHorizontally;
	NSString* _displayString;
	NSString* _displayStringImage;
	NSArray* _secondaryDisplayStrings;
	NSArray* _secondaryDisplayStringImages;
	NSArray* _variantDisplayContents;
	NSArray* _highlightedVariantsList;
	long long _displayPathType;
	UIKBKeyDisplayContents* _fallbackContents;

}

@property (nonatomic,retain) NSString * displayString;                               //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) NSString * displayStringImage;                          //@synthesize displayStringImage=_displayStringImage - In the implementation block
@property (nonatomic,retain) NSArray * secondaryDisplayStrings;                      //@synthesize secondaryDisplayStrings=_secondaryDisplayStrings - In the implementation block
@property (nonatomic,retain) NSArray * secondaryDisplayStringImages;                 //@synthesize secondaryDisplayStringImages=_secondaryDisplayStringImages - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayContents;                       //@synthesize variantDisplayContents=_variantDisplayContents - In the implementation block
@property (nonatomic,retain) NSArray * highlightedVariantsList;                      //@synthesize highlightedVariantsList=_highlightedVariantsList - In the implementation block
@property (assign,nonatomic) long long displayPathType;                              //@synthesize displayPathType=_displayPathType - In the implementation block
@property (assign,nonatomic) BOOL fillPath;                                          //@synthesize fillPath=_fillPath - In the implementation block
@property (assign,nonatomic) BOOL force1xImages;                                     //@synthesize force1xImages=_force1xImages - In the implementation block
@property (assign,nonatomic) BOOL stringKeycapOverImage;                             //@synthesize stringKeycapOverImage=_stringKeycapOverImage - In the implementation block
@property (assign,nonatomic) BOOL flipImageHorizontally;                             //@synthesize flipImageHorizontally=_flipImageHorizontally - In the implementation block
@property (nonatomic,retain) UIKBKeyDisplayContents * fallbackContents;              //@synthesize fallbackContents=_fallbackContents - In the implementation block
+(id)displayContents;
-(id)description;
-(void)dealloc;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSArray *)secondaryDisplayStrings;
-(void)setSecondaryDisplayStrings:(NSArray *)arg1 ;
-(NSArray *)highlightedVariantsList;
-(void)setHighlightedVariantsList:(NSArray *)arg1 ;
-(void)setFallbackContents:(UIKBKeyDisplayContents *)arg1 ;
-(void)setDisplayPathType:(long long)arg1 ;
-(void)setDisplayStringImage:(NSString *)arg1 ;
-(void)setFlipImageHorizontally:(BOOL)arg1 ;
-(NSString *)displayStringImage;
-(UIKBKeyDisplayContents *)fallbackContents;
-(void)setStringKeycapOverImage:(BOOL)arg1 ;
-(void)setVariantDisplayContents:(NSArray *)arg1 ;
-(NSArray *)variantDisplayContents;
-(long long)displayPathType;
-(void)setForce1xImages:(BOOL)arg1 ;
-(NSArray *)secondaryDisplayStringImages;
-(BOOL)fillPath;
-(BOOL)force1xImages;
-(BOOL)stringKeycapOverImage;
-(BOOL)flipImageHorizontally;
-(void)setSecondaryDisplayStringImages:(NSArray *)arg1 ;
-(void)setFillPath:(BOOL)arg1 ;
@end

