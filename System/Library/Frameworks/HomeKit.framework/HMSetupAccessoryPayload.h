/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSURL, HMAccessoryCategory;

@interface HMSetupAccessoryPayload : NSObject <NSSecureCoding> {

	BOOL _supportsIP;
	BOOL _supportsWAC;
	BOOL _supportsBTLE;
	BOOL _paired;
	NSString* _accessoryName;
	NSString* _setupCode;
	NSString* _setupID;
	NSNumber* _categoryNumber;
	NSNumber* _threadIdentifier;
	NSString* _productData;
	NSString* _productNumber;
	NSURL* _setupPayloadURL;
	NSNumber* _flags;

}

@property (nonatomic,retain) NSString * accessoryName;                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,retain) NSString * setupCode;                          //@synthesize setupCode=_setupCode - In the implementation block
@property (nonatomic,retain) NSString * setupID;                            //@synthesize setupID=_setupID - In the implementation block
@property (nonatomic,retain) NSNumber * categoryNumber;                     //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (assign,nonatomic) BOOL supportsIP;                               //@synthesize supportsIP=_supportsIP - In the implementation block
@property (assign,nonatomic) BOOL supportsWAC;                              //@synthesize supportsWAC=_supportsWAC - In the implementation block
@property (assign,nonatomic) BOOL supportsBTLE;                             //@synthesize supportsBTLE=_supportsBTLE - In the implementation block
@property (nonatomic,retain) NSNumber * threadIdentifier;                   //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,retain) NSString * productData;                        //@synthesize productData=_productData - In the implementation block
@property (nonatomic,retain) NSString * productNumber;                      //@synthesize productNumber=_productNumber - In the implementation block
@property (assign,nonatomic) BOOL paired;                                   //@synthesize paired=_paired - In the implementation block
@property (nonatomic,retain) NSNumber * flags;                              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSURL * setupPayloadURL;                       //@synthesize setupPayloadURL=_setupPayloadURL - In the implementation block
@property (nonatomic,readonly) HMAccessoryCategory * category; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSNumber *)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMAccessoryCategory *)category;
-(void)setFlags:(NSNumber *)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(NSString *)accessoryName;
-(void)setThreadIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)threadIdentifier;
-(BOOL)paired;
-(void)setPaired:(BOOL)arg1 ;
-(void)setCategoryNumber:(NSNumber *)arg1 ;
-(NSNumber *)categoryNumber;
-(BOOL)supportsIP;
-(BOOL)supportsWAC;
-(BOOL)supportsBTLE;
-(NSString *)setupCode;
-(NSString *)setupID;
-(void)setSetupCode:(NSString *)arg1 ;
-(NSURL *)setupPayloadURL;
-(id)initWithSetupPayloadURL:(id)arg1 error:(id*)arg2 ;
-(id)_parseSetupPayload:(id)arg1 ;
-(void)setSupportsIP:(BOOL)arg1 ;
-(void)setSupportsBTLE:(BOOL)arg1 ;
-(void)setSupportsWAC:(BOOL)arg1 ;
-(void)setSetupID:(NSString *)arg1 ;
-(void)setProductData:(NSString *)arg1 ;
-(void)setProductNumber:(NSString *)arg1 ;
-(void)setSetupPayloadURL:(NSURL *)arg1 ;
-(id)initWithSetupCode:(id)arg1 ;
-(id)initWithSetupPayload:(id)arg1 ;
-(NSString *)productData;
-(NSString *)productNumber;
@end

