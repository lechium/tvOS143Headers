/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPaymentHeroImageControllerDelegate;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKPaymentWebService, NSString, NSArray, PKPaymentHeroImageManifest;

@interface PKPaymentHeroImageController : NSObject {

	PKPaymentWebService* _webService;
	NSString* _primaryImageIdentifier;
	NSArray* _featuredImages;
	PKPaymentHeroImageManifest* _manifest;
	id<PKPaymentHeroImageControllerDelegate> _delegate;
	long long _watchSize;

}

@property (nonatomic,copy) NSString * primaryImageIdentifier;                                       //@synthesize primaryImageIdentifier=_primaryImageIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * featuredImages;                                                //@synthesize featuredImages=_featuredImages - In the implementation block
@property (nonatomic,readonly) PKPaymentHeroImageManifest * manifest;                               //@synthesize manifest=_manifest - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentHeroImageControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long watchSize;                                                   //@synthesize watchSize=_watchSize - In the implementation block
+(id)defaultImages;
+(CGSize)cardArtSizeForWatchViewSize:(CGSize)arg1 ;
+(double)cardAspectRatio;
-(id<PKPaymentHeroImageControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentHeroImageControllerDelegate>)arg1 ;
-(PKPaymentHeroImageManifest *)manifest;
-(void)setWatchSize:(long long)arg1 ;
-(long long)watchSize;
-(id)featuredImageIdentifiers;
-(id)initWithManifest:(id)arg1 webService:(id)arg2 ;
-(NSArray *)featuredImages;
-(NSString *)primaryImageIdentifier;
-(id)filterImages:(id)arg1 ;
-(id)featuredDefaultImages;
-(void)downloadImages:(id)arg1 ;
-(CGSize)cardArtSizeForSize:(CGSize)arg1 ;
-(void)setPrimaryImageIdentifier:(NSString *)arg1 ;
-(void)setFeaturedImages:(NSArray *)arg1 ;
@end

