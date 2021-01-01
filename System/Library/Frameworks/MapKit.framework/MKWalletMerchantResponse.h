/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOMapItem;
#import <MapKit/MapKit-Structs.h>
@class GEOPDMerchantLookupResult, MKWalletMerchantStylingInfo, NSString, MKMapItem;

@interface MKWalletMerchantResponse : NSObject {

	id<GEOMapItem> _mapItem;
	GEOPDMerchantLookupResult* _merchantLookupResult;

}

@property (nonatomic,readonly) MKWalletMerchantStylingInfo * placeStyling; 
@property (nonatomic,readonly) NSString * localizedPlaceName; 
@property (nonatomic,readonly) NSString * localizedPlaceLanguage; 
@property (nonatomic,readonly) MKWalletMerchantStylingInfo * walletCategoryStyling; 
@property (nonatomic,readonly) NSString * localizedWalletCategoryName; 
@property (nonatomic,readonly) NSString * localizedWalletCategoryLanguage; 
@property (nonatomic,readonly) NSString * walletCategoryIdentifier; 
@property (nonatomic,readonly) NSString * mapsCategoryIdentifier; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) NSString * heroImageProviderName; 
-(MKMapItem *)mapItem;
-(id)initWithGEOMapItem:(id)arg1 ;
-(BOOL)_validHeroImageForPhoto:(id)arg1 ;
-(id)initWithMerchantLookupResult:(id)arg1 ;
-(MKWalletMerchantStylingInfo *)placeStyling;
-(NSString *)localizedPlaceName;
-(NSString *)localizedPlaceLanguage;
-(MKWalletMerchantStylingInfo *)walletCategoryStyling;
-(NSString *)localizedWalletCategoryName;
-(NSString *)localizedWalletCategoryLanguage;
-(NSString *)mapsCategoryIdentifier;
-(NSString *)walletCategoryIdentifier;
-(id)bestHeroImageForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(NSString *)heroImageProviderName;
@end

