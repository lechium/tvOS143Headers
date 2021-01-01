/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWAWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _switchCount;
	NSString* _switchFromInterfaceName;
	NSString* _switchToInterfaceName;
	SCD_Struct_NW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitchFromInterfaceName; 
@property (nonatomic,retain) NSString * switchFromInterfaceName;              //@synthesize switchFromInterfaceName=_switchFromInterfaceName - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitchToInterfaceName; 
@property (nonatomic,retain) NSString * switchToInterfaceName;                //@synthesize switchToInterfaceName=_switchToInterfaceName - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchCount; 
@property (assign,nonatomic) int switchCount;                                 //@synthesize switchCount=_switchCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSwitchFromInterfaceName:(NSString *)arg1 ;
-(void)setSwitchToInterfaceName:(NSString *)arg1 ;
-(BOOL)hasSwitchFromInterfaceName;
-(BOOL)hasSwitchToInterfaceName;
-(void)setSwitchCount:(int)arg1 ;
-(void)setHasSwitchCount:(BOOL)arg1 ;
-(BOOL)hasSwitchCount;
-(NSString *)switchFromInterfaceName;
-(NSString *)switchToInterfaceName;
-(int)switchCount;
@end

