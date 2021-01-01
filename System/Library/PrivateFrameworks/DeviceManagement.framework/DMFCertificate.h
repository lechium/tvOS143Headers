/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isIdentity;
	NSString* _commonName;
	NSData* _data;

}

@property (nonatomic,copy,readonly) NSString * commonName;              //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL isIdentity;                         //@synthesize isIdentity=_isIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isIdentity;
-(NSString *)commonName;
-(id)initWithCommonName:(id)arg1 data:(id)arg2 isIdentity:(BOOL)arg3 ;
@end

