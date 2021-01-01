/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPBAddressEndpoint, NWPBHostEndpoint, NWPBInterface, NWPBServiceEndpoint, NSData;

@interface NWPBEndpoint : PBCodable <NSCopying> {

	NWPBAddressEndpoint* _address;
	NWPBHostEndpoint* _host;
	NWPBInterface* _interface;
	NWPBServiceEndpoint* _service;
	NSData* _txtRecord;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NWPBAddressEndpoint * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasHost; 
@property (nonatomic,retain) NWPBHostEndpoint * host;                    //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NWPBServiceEndpoint * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL hasInterface; 
@property (nonatomic,retain) NWPBInterface * interface;                  //@synthesize interface=_interface - In the implementation block
@property (nonatomic,readonly) BOOL hasTxtRecord; 
@property (nonatomic,retain) NSData * txtRecord;                         //@synthesize txtRecord=_txtRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NWPBHostEndpoint *)host;
-(void)setHost:(NWPBHostEndpoint *)arg1 ;
-(NWPBInterface *)interface;
-(void)setInterface:(NWPBInterface *)arg1 ;
-(NWPBAddressEndpoint *)address;
-(id)dictionaryRepresentation;
-(NWPBServiceEndpoint *)service;
-(NSData *)txtRecord;
-(void)setTxtRecord:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setService:(NWPBServiceEndpoint *)arg1 ;
-(void)setAddress:(NWPBAddressEndpoint *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasService;
-(BOOL)hasAddress;
-(BOOL)hasInterface;
-(BOOL)hasHost;
-(BOOL)hasTxtRecord;
@end
