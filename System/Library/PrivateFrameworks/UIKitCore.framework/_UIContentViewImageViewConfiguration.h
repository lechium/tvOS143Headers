/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, UIImageSymbolConfiguration, UIColor;

@interface _UIContentViewImageViewConfiguration : NSObject <NSCopying, NSSecureCoding> {

	struct {
		unsigned hasCustomizedImage : 1;
		unsigned hasCustomizedPreferredSymbolConfiguration : 1;
		unsigned hasCustomizedTintColor : 1;
		unsigned hasCustomizedCornerRadius : 1;
		unsigned hasCustomizedReservedLayoutSize : 1;
		unsigned hasCustomizedMaximumSize : 1;
	}  _configurationFlags;
	UIImage* _image;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;
	UIColor* _tintColor;
	double _cornerRadius;
	UIImage* _highlightedImage;
	CGSize _reservedLayoutSize;
	CGSize _maximumSize;

}

@property (setter=_setImage:,nonatomic,retain) UIImage * _image;                                                                             //@synthesize image=_image - In the implementation block
@property (setter=_setPreferredSymbolConfiguration:,nonatomic,copy) UIImageSymbolConfiguration * _preferredSymbolConfiguration;              //@synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                                                                     //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,setter=_setCornerRadius:,nonatomic) double _cornerRadius;                                                                  //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,setter=_setReservedLayoutSize:,nonatomic) CGSize _reservedLayoutSize;                                                      //@synthesize reservedLayoutSize=_reservedLayoutSize - In the implementation block
@property (assign,setter=_setMaximumSize:,nonatomic) CGSize _maximumSize;                                                                    //@synthesize maximumSize=_maximumSize - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) UIImageSymbolConfiguration * preferredSymbolConfiguration; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) CGSize reservedLayoutSize; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) double horizontalCenteringWidth; 
@property (nonatomic,retain) UIImage * highlightedImage;                                                                                     //@synthesize highlightedImage=_highlightedImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)_image;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(CGSize)maximumSize;
-(void)_setImage:(id)arg1 ;
-(CGSize)_maximumSize;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(UIColor *)_tintColor;
-(double)_cornerRadius;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(void)setReservedLayoutSize:(CGSize)arg1 ;
-(id)_shortDescription;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(CGSize)reservedLayoutSize;
-(BOOL)_hasImage;
-(void)_setTintColor:(id)arg1 ;
-(void)_setPreferredSymbolConfiguration:(id)arg1 ;
-(UIImageSymbolConfiguration *)_preferredSymbolConfiguration;
-(UIImage *)highlightedImage;
-(void)_applyPropertiesFromDefaultConfiguration:(id)arg1 ;
-(BOOL)_isEqualToConfiguration:(id)arg1 ;
-(BOOL)_isEqualToConfigurationQuick:(id)arg1 ;
-(void)applyToImageView:(id)arg1 ;
-(CGSize)_reservedLayoutSize;
-(void)_setReservedLayoutSize:(CGSize)arg1 ;
-(void)_setMaximumSize:(CGSize)arg1 ;
-(void)setHorizontalCenteringWidth:(double)arg1 ;
-(double)horizontalCenteringWidth;
@end

