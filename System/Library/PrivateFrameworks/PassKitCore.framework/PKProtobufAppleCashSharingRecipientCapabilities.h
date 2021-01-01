/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufAppleCashSharingRecipientCapabilities : PBCodable <NSCopying> {

	NSString* _altDSID;
	NSString* _deviceRegion;
	NSData* _fromDeviceVersion;
	NSString* _handle;
	unsigned _version;
	BOOL _supportsManatee;
	SCD_Struct_PK13 _has;

}

@property (assign,nonatomic) unsigned version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasHandle; 
@property (nonatomic,retain) NSString * handle;                        //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) BOOL hasAltDSID; 
@property (nonatomic,retain) NSString * altDSID;                       //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceRegion; 
@property (nonatomic,retain) NSString * deviceRegion;                  //@synthesize deviceRegion=_deviceRegion - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsManatee; 
@property (assign,nonatomic) BOOL supportsManatee;                     //@synthesize supportsManatee=_supportsManatee - In the implementation block
@property (nonatomic,readonly) BOOL hasFromDeviceVersion; 
@property (nonatomic,retain) NSData * fromDeviceVersion;               //@synthesize fromDeviceVersion=_fromDeviceVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)handle;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)deviceRegion;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(BOOL)hasHandle;
-(BOOL)hasAltDSID;
-(NSData *)fromDeviceVersion;
-(void)setSupportsManatee:(BOOL)arg1 ;
-(void)setFromDeviceVersion:(NSData *)arg1 ;
-(BOOL)supportsManatee;
-(BOOL)hasDeviceRegion;
-(void)setHasSupportsManatee:(BOOL)arg1 ;
-(BOOL)hasSupportsManatee;
-(BOOL)hasFromDeviceVersion;
@end

