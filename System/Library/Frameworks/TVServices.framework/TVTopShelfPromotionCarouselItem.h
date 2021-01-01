/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVTopShelfCarouselItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVTopShelfPromotionCarouselItem : TVTopShelfCarouselItem <NSSecureCoding> {

	NSString* _promotionImageName;
	NSString* _promotionText;
	long long _promotionTitleTintColor;

}

@property (nonatomic,copy) NSString * promotionImageName;                    //@synthesize promotionImageName=_promotionImageName - In the implementation block
@property (nonatomic,copy) NSString * promotionText;                         //@synthesize promotionText=_promotionText - In the implementation block
@property (nonatomic,copy) NSString * termsAndConditionsText; 
@property (assign,nonatomic) long long promotionTitleTintColor;              //@synthesize promotionTitleTintColor=_promotionTitleTintColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setTermsAndConditionsText:(NSString *)arg1 ;
-(NSString *)termsAndConditionsText;
-(NSString *)promotionImageName;
-(void)setPromotionImageName:(NSString *)arg1 ;
-(NSString *)promotionText;
-(void)setPromotionText:(NSString *)arg1 ;
-(long long)promotionTitleTintColor;
-(void)setPromotionTitleTintColor:(long long)arg1 ;
@end

