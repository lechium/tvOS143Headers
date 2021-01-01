/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSSet, NSString;

@interface PKPaymentMarket : NSObject <NSSecureCoding> {

	NSDictionary* _localizedNames;
	NSDictionary* _renotifyCampaigns;
	NSSet* _geoFences;
	BOOL _productsRequiredForRegion;
	BOOL _shouldConsiderCellularRegion;
	long long _type;
	long long _classification;
	unsigned long long _expressUpgradeHideDisableAction;
	double _expressUpgradePromoteDuration;
	NSString* _identifier;
	NSString* _region;
	NSSet* _supportedCredentialTypes;
	NSSet* _expressCredentialTypes;
	NSSet* _supportedTransitNetworks;
	NSSet* _expressTransitNetworks;

}

@property (readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
@property (readonly) long long classification;                                        //@synthesize classification=_classification - In the implementation block
@property (readonly) unsigned long long expressUpgradeHideDisableAction;              //@synthesize expressUpgradeHideDisableAction=_expressUpgradeHideDisableAction - In the implementation block
@property (readonly) double expressUpgradePromoteDuration;                            //@synthesize expressUpgradePromoteDuration=_expressUpgradePromoteDuration - In the implementation block
@property (copy,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * region;                                          //@synthesize region=_region - In the implementation block
@property (copy,readonly) NSString * renotifyOpenLoopCampaignIdentifier; 
@property (copy,readonly) NSSet * supportedCredentialTypes;                           //@synthesize supportedCredentialTypes=_supportedCredentialTypes - In the implementation block
@property (copy,readonly) NSSet * expressCredentialTypes;                             //@synthesize expressCredentialTypes=_expressCredentialTypes - In the implementation block
@property (copy,readonly) NSSet * supportedTransitNetworks;                           //@synthesize supportedTransitNetworks=_supportedTransitNetworks - In the implementation block
@property (copy,readonly) NSSet * expressTransitNetworks;                             //@synthesize expressTransitNetworks=_expressTransitNetworks - In the implementation block
@property (readonly) BOOL productsRequiredForRegion;                                  //@synthesize productsRequiredForRegion=_productsRequiredForRegion - In the implementation block
@property (readonly) BOOL shouldConsiderCellularRegion;                               //@synthesize shouldConsiderCellularRegion=_shouldConsiderCellularRegion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(NSString *)region;
-(BOOL)containsLocation:(id)arg1 ;
-(long long)classification;
-(id)initWithDictionary:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3 ;
-(double)shortestDistanceFromLocation:(id)arg1 ;
-(NSSet *)supportedCredentialTypes;
-(NSSet *)expressCredentialTypes;
-(NSSet *)supportedTransitNetworks;
-(NSSet *)expressTransitNetworks;
-(id)_geoFenceWithDictionary:(id)arg1 ;
-(NSString *)renotifyOpenLoopCampaignIdentifier;
-(unsigned long long)expressUpgradeHideDisableAction;
-(double)expressUpgradePromoteDuration;
-(BOOL)productsRequiredForRegion;
-(BOOL)shouldConsiderCellularRegion;
@end

