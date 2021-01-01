/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLItemDetailElement.h>

@class NSString, TVLHeaderElement, NSArray, UIColor;

@interface TVLItemDetailWithImageHeaderElement : TVLItemDetailElement {

	NSString* _layout;
	TVLHeaderElement* _imageHeader;
	NSArray* _userRatings;

}

@property (nonatomic,copy) NSString * layout;                             //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) TVLHeaderElement * imageHeader;              //@synthesize imageHeader=_imageHeader - In the implementation block
@property (nonatomic,copy) NSArray * userRatings;                         //@synthesize userRatings=_userRatings - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * subtitleColor; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)layout;
-(void)setLayout:(NSString *)arg1 ;
-(TVLHeaderElement *)imageHeader;
-(void)setImageHeader:(TVLHeaderElement *)arg1 ;
-(UIColor *)subtitleColor;
-(UIColor *)titleColor;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(id)_stylesForKeyPath:(id)arg1 ;
-(NSArray *)userRatings;
-(void)setUserRatings:(NSArray *)arg1 ;
@end
