/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface DMFConfigurationOrganization : NSObject <NSSecureCoding> {

	BOOL _active;
	NSString* _identifier;
	NSString* _displayName;
	NSString* _type;
	NSArray* _registeredConfigurationSources;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL active;                                         //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSArray * registeredConfigurationSources;              //@synthesize registeredConfigurationSources=_registeredConfigurationSources - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)registeredConfigurationSources;
-(void)setRegisteredConfigurationSources:(NSArray *)arg1 ;
@end

