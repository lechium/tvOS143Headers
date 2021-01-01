/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, NSString, UIColor, UIFont, NSArray;

@interface CNMonogrammer : NSObject {

	UIImage* _silhouetteMonogram;
	UIImage* _questionMarkMonogram;
	UIImage* _knockoutMaskMonogram;
	double _innerBorderWidth;
	NSString* _silhouetteImageName;
	long long _monogrammerStyle;
	CNMonogrammer* _subMonogrammer;
	UIColor* _tintColor;
	double _scale;
	BOOL _textKnockout;
	UIFont* _font;
	double _diameter;
	UIColor* _backgroundColor;
	UIColor* _textColor;

}

@property (assign,nonatomic) double diameter;                               //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                           //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL textKnockout;                             //@synthesize textKnockout=_textKnockout - In the implementation block
@property (nonatomic,readonly) UIImage * silhouetteMonogram; 
@property (nonatomic,readonly) UIImage * questionMarkMonogram; 
@property (nonatomic,readonly) UIImage * knockoutMaskMonogram; 
@property (nonatomic,retain) UIFont * font;                                 //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch; 
+(id)descriptorForRequiredKeysIncludingImage:(BOOL)arg1 ;
+(id)_initialsForContact:(id)arg1 ;
+(long long)monogramTypeForContact:(id)arg1 ;
+(id)requiredKeyDescriptor;
-(id)init;
-(void)dealloc;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSArray *)keysToFetch;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 diameter:(double)arg2 ;
-(id)monogramForContact:(id)arg1 ;
-(void)_clearMonogramCache;
-(id)_copyMonogramWithImageData:(id)arg1 ;
-(id)_copyMonogramWithInitials:(id)arg1 ;
-(UIImage *)silhouetteMonogram;
-(id)monogramForContact:(id)arg1 isContactImage:(BOOL*)arg2 ;
-(id)_initialsForFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)_copyMonogramWithSilhouette;
-(id)_copyMonogramWithKnockoutMask;
-(void)monogramsAsFlatImages;
-(void)monogramsWithTint:(id)arg1 ;
-(void)monogramsForStark;
-(void)setTextKnockout:(BOOL)arg1 ;
-(double)innerBorderWidth;
-(id)silhouetteImageName;
-(id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)monogramForContacts:(id)arg1 ;
-(UIImage *)questionMarkMonogram;
-(UIImage *)knockoutMaskMonogram;
-(BOOL)textKnockout;
@end

