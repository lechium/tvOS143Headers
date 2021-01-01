/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthKit/HealthKit-Structs.h>
@class NSString, NSDictionary;

@interface _HKEntitlements : NSObject {

	NSString* _applicationIdentifier;
	NSDictionary* _entitlementValues;

}

@property (nonatomic,copy,readonly) NSDictionary * entitlementValues;              //@synthesize entitlementValues=_entitlementValues - In the implementation block
+(id)entitlementsForCurrentTaskWithError:(id*)arg1 ;
+(id)_containerAppExtensionEntitlementsForCurrentTask;
+(id)_entitlementsWithSecTask:(SecTaskRef)arg1 valueOverrides:(id)arg2 error:(id*)arg3 ;
+(id)_allowedEntitlementsSet;
+(id)entitlementsWithDictionary:(id)arg1 ;
+(void)_setEntitlementsForCurrentTask:(id)arg1 ;
+(id)entitlementsWithConnection:(id)arg1 error:(id*)arg2 ;
+(id)entitlementsWithApplicationIdentifier:(id)arg1 ;
-(id)description;
-(id)init;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)applicationIdentifier;
-(id)typesForWriteAuthorizationOverride;
-(id)typesForReadAuthorizationOverride;
-(id)_initWithEntitlementValues:(id)arg1 ;
-(BOOL)arrayEntitlement:(id)arg1 containsString:(id)arg2 ;
-(id)_typesFromIdentifierArray:(id)arg1 ;
-(BOOL)hasPrivateMetadataAccess;
-(BOOL)hasAccessEntitlementWithIdentifer:(id)arg1 ;
-(BOOL)hasPrivateAccessEntitlementWithIdentifer:(id)arg1 ;
-(id)stringForEntitlement:(id)arg1 ;
-(NSDictionary *)entitlementValues;
@end

