/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CoreCECDeviceBasicAttributes : NSObject <NSSecureCoding> {

	BOOL _isActiveSource;
	unsigned long long _deviceType;
	unsigned long long _cecVersion;
	unsigned long long _vendorID;
	unsigned long long _allDeviceTypes;
	unsigned long long _deviceFeatures;
	NSDictionary* _rcProfile;

}

@property (assign,nonatomic) unsigned long long deviceType;                  //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) unsigned long long cecVersion;                  //@synthesize cecVersion=_cecVersion - In the implementation block
@property (assign,nonatomic) unsigned long long vendorID;                    //@synthesize vendorID=_vendorID - In the implementation block
@property (assign,nonatomic) unsigned long long allDeviceTypes;              //@synthesize allDeviceTypes=_allDeviceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFeatures;              //@synthesize deviceFeatures=_deviceFeatures - In the implementation block
@property (nonatomic,copy) NSDictionary * rcProfile;                         //@synthesize rcProfile=_rcProfile - In the implementation block
@property (assign,nonatomic) BOOL isActiveSource;                            //@synthesize isActiveSource=_isActiveSource - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceAttributesWithPrimaryType:(unsigned long long)arg1 otherTypes:(unsigned long long)arg2 features:(unsigned long long)arg3 rcProfile:(id)arg4 vendorID:(unsigned long long)arg5 version:(unsigned long long)arg6 active:(BOOL)arg7 ;
+(id)deviceAttributesWithPrimaryType:(unsigned long long)arg1 otherTypes:(unsigned long long)arg2 features:(unsigned long long)arg3 rcProfile:(id)arg4 vendorID:(unsigned long long)arg5 version:(unsigned long long)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)deviceType;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(unsigned long long)vendorID;
-(void)setVendorID:(unsigned long long)arg1 ;
-(unsigned long long)deviceFeatures;
-(BOOL)isActiveSource;
-(unsigned long long)cecVersion;
-(void)setIsActiveSource:(BOOL)arg1 ;
-(id)initWithPrimaryType:(unsigned long long)arg1 otherTypes:(unsigned long long)arg2 features:(unsigned long long)arg3 rcProfile:(id)arg4 vendorID:(unsigned long long)arg5 version:(unsigned long long)arg6 active:(BOOL)arg7 ;
-(unsigned long long)allDeviceTypes;
-(void)setAllDeviceTypes:(unsigned long long)arg1 ;
-(NSDictionary *)rcProfile;
-(void)setCecVersion:(unsigned long long)arg1 ;
-(void)setDeviceFeatures:(unsigned long long)arg1 ;
-(void)setRcProfile:(NSDictionary *)arg1 ;
@end

