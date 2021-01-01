/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary;

@interface MCDNSProxyPayload : MCPayload {

	NSString* _appBundleIdentifier;
	NSString* _providerBundleIdentifier;
	NSDictionary* _providerConfiguration;

}

@property (nonatomic,copy,readonly) NSDictionary * configurationDictionary; 
@property (nonatomic,copy,readonly) NSString * appBundleIdentifier;                      //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerBundleIdentifier;                 //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * providerConfiguration;                //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)installationWarnings;
-(NSDictionary *)configurationDictionary;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)appBundleIdentifier;
-(NSString *)providerBundleIdentifier;
-(NSDictionary *)providerConfiguration;
@end

