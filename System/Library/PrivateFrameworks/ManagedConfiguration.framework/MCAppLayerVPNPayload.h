/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCVPNPayloadBase.h>

@class NSString, NSArray;

@interface MCAppLayerVPNPayload : MCVPNPayloadBase {

	BOOL _restrictDomains;
	NSString* _VPNUUID;
	NSArray* _SafariDomains;
	NSArray* _SMBDomains;
	NSArray* _mailDomains;
	NSArray* _calendarDomains;
	NSArray* _contactsDomains;
	NSArray* _excludedDomains;
	NSArray* _associatedDomains;

}

@property (nonatomic,retain) NSString * VPNUUID;                                       //@synthesize VPNUUID=_VPNUUID - In the implementation block
@property (setter=afariDomains,nonatomic,retain) NSArray * SafariDomains;              //@synthesize SafariDomains=_SafariDomains - In the implementation block
@property (setter=MBDomains,nonatomic,retain) NSArray * SMBDomains;                    //@synthesize SMBDomains=_SMBDomains - In the implementation block
@property (nonatomic,retain) NSArray * mailDomains;                                    //@synthesize mailDomains=_mailDomains - In the implementation block
@property (nonatomic,retain) NSArray * calendarDomains;                                //@synthesize calendarDomains=_calendarDomains - In the implementation block
@property (nonatomic,retain) NSArray * contactsDomains;                                //@synthesize contactsDomains=_contactsDomains - In the implementation block
@property (nonatomic,retain) NSArray * excludedDomains;                                //@synthesize excludedDomains=_excludedDomains - In the implementation block
@property (nonatomic,retain) NSArray * associatedDomains;                              //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,readonly) BOOL restrictDomains;                                   //@synthesize restrictDomains=_restrictDomains - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(NSString *)VPNUUID;
-(NSArray *)SafariDomains;
-(NSArray *)SMBDomains;
-(NSArray *)mailDomains;
-(NSArray *)calendarDomains;
-(NSArray *)contactsDomains;
-(NSArray *)excludedDomains;
-(NSArray *)associatedDomains;
-(void)setVPNUUID:(NSString *)arg1 ;
-(void)setSafariDomains:(NSArray *)arg1 ;
-(void)setSMBDomains:(NSArray *)arg1 ;
-(void)setMailDomains:(NSArray *)arg1 ;
-(void)setCalendarDomains:(NSArray *)arg1 ;
-(void)setContactsDomains:(NSArray *)arg1 ;
-(void)setExcludedDomains:(NSArray *)arg1 ;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(BOOL)restrictDomains;
@end

