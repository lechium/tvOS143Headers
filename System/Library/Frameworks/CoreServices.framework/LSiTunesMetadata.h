/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface LSiTunesMetadata : NSObject <NSSecureCoding> {

	BOOL _deviceBasedVPP;
	BOOL _purchasedRedownload;
	BOOL _gameCenterEnabled;
	BOOL _gameCenterEverEnabled;
	unsigned long long _storeItemIdentifier;
	NSString* _artistName;
	NSString* _itemName;
	unsigned long long _versionIdentifier;
	unsigned long long _betaVersionIdentifier;
	unsigned long long _storeFront;
	NSString* _storeCohort;
	NSString* _variantID;
	NSString* _genre;
	unsigned long long _genreIdentifier;
	NSArray* _subgenres;
	unsigned long long _ratingRank;
	NSString* _ratingLabel;
	NSString* _sourceApp;

}

@property (nonatomic,readonly) unsigned long long storeItemIdentifier;                                  //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                                                   //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSString * itemName;                                                     //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,readonly) unsigned long long versionIdentifier;                                    //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long betaVersionIdentifier;                                //@synthesize betaVersionIdentifier=_betaVersionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long storeFront;                                           //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,readonly) NSString * storeCohort;                                                  //@synthesize storeCohort=_storeCohort - In the implementation block
@property (nonatomic,readonly) NSString * variantID;                                                    //@synthesize variantID=_variantID - In the implementation block
@property (getter=isDeviceBasedVPP,nonatomic,readonly) BOOL deviceBasedVPP;                             //@synthesize deviceBasedVPP=_deviceBasedVPP - In the implementation block
@property (nonatomic,readonly) NSString * genre;                                                        //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) unsigned long long genreIdentifier;                                      //@synthesize genreIdentifier=_genreIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * subgenres;                                                     //@synthesize subgenres=_subgenres - In the implementation block
@property (nonatomic,readonly) unsigned long long ratingRank;                                           //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,readonly) NSString * ratingLabel;                                                  //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,readonly) NSString * sourceApp;                                                    //@synthesize sourceApp=_sourceApp - In the implementation block
@property (getter=isPurchasedRedownload,nonatomic,readonly) BOOL purchasedRedownload;                   //@synthesize purchasedRedownload=_purchasedRedownload - In the implementation block
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled;                       //@synthesize gameCenterEnabled=_gameCenterEnabled - In the implementation block
@property (getter=wasGameCenterEverEnabled,nonatomic,readonly) BOOL gameCenterEverEnabled;              //@synthesize gameCenterEverEnabled=_gameCenterEverEnabled - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)ratingRank;
-(NSString *)genre;
-(unsigned long long)versionIdentifier;
-(NSString *)artistName;
-(NSString *)itemName;
-(unsigned long long)genreIdentifier;
-(BOOL)isDeviceBasedVPP;
-(BOOL)isGameCenterEnabled;
-(NSString *)ratingLabel;
-(unsigned long long)storeItemIdentifier;
-(BOOL)isPurchasedRedownload;
-(NSString *)sourceApp;
-(NSString *)storeCohort;
-(NSString *)variantID;
-(unsigned long long)storeFront;
-(NSArray *)subgenres;
-(unsigned long long)betaVersionIdentifier;
-(BOOL)wasGameCenterEverEnabled;
-(id)_initWithContext:(LSContext*)arg1 bundleData:(const LSBundleData*)arg2 ;
@end

