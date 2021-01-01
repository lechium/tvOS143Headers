/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _noRestriction;
	BOOL _noDivertDNS;
	NSString* _matchSigningIdentifier;
	NSString* _matchDesignatedRequirement;
	NSString* _matchPath;
	NSArray* _matchDomains;
	NSArray* _matchTools;
	NSArray* _cachedMachOUUIDs;
	NSArray* _matchAccountIdentifiers;

}

@property (assign) BOOL noRestriction;                                   //@synthesize noRestriction=_noRestriction - In the implementation block
@property (retain) NSArray * cachedMachOUUIDs;                           //@synthesize cachedMachOUUIDs=_cachedMachOUUIDs - In the implementation block
@property (copy) NSArray * matchAccountIdentifiers;                      //@synthesize matchAccountIdentifiers=_matchAccountIdentifiers - In the implementation block
@property (assign) BOOL noDivertDNS;                                     //@synthesize noDivertDNS=_noDivertDNS - In the implementation block
@property (readonly) NSString * matchSigningIdentifier;                  //@synthesize matchSigningIdentifier=_matchSigningIdentifier - In the implementation block
@property (readonly) NSString * matchDesignatedRequirement;              //@synthesize matchDesignatedRequirement=_matchDesignatedRequirement - In the implementation block
@property (copy) NSString * matchPath;                                   //@synthesize matchPath=_matchPath - In the implementation block
@property (copy) NSArray * matchDomains;                                 //@synthesize matchDomains=_matchDomains - In the implementation block
@property (copy) NSArray * matchTools;                                   //@synthesize matchTools=_matchTools - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)matchDomains;
-(NSArray *)matchAccountIdentifiers;
-(NSString *)matchSigningIdentifier;
-(NSString *)matchPath;
-(BOOL)noDivertDNS;
-(id)initWithSigningIdentifier:(id)arg1 ;
-(void)setMatchPath:(NSString *)arg1 ;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(void)setMatchAccountIdentifiers:(NSArray *)arg1 ;
-(void)setNoDivertDNS:(BOOL)arg1 ;
-(BOOL)signingIdentifierAllowed:(id)arg1 domainsOrAccountsRequired:(out BOOL*)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(BOOL)overlapsWithRule:(id)arg1 ;
-(BOOL)matchesProcessWithAuditToken:(id)arg1 ;
-(NSString *)matchDesignatedRequirement;
-(NSArray *)matchTools;
-(void)setMatchTools:(NSArray *)arg1 ;
-(BOOL)noRestriction;
-(void)setNoRestriction:(BOOL)arg1 ;
-(NSArray *)cachedMachOUUIDs;
-(void)setCachedMachOUUIDs:(NSArray *)arg1 ;
@end

