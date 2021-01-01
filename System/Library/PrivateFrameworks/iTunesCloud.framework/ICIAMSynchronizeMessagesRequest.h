/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMSynchronizeMessagesRequest : PBRequest <NSCopying> {

	long long _commandSerialNumber;
	long long _dSID;
	NSString* _deviceID;
	BOOL _activeCommandsOnly;
	SCD_Struct_IC17 _has;

}

@property (assign,nonatomic) BOOL hasCommandSerialNumber; 
@property (assign,nonatomic) long long commandSerialNumber;              //@synthesize commandSerialNumber=_commandSerialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasDSID; 
@property (assign,nonatomic) long long dSID;                             //@synthesize dSID=_dSID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                        //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL hasActiveCommandsOnly; 
@property (assign,nonatomic) BOOL activeCommandsOnly;                    //@synthesize activeCommandsOnly=_activeCommandsOnly - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDSID:(long long)arg1 ;
-(long long)commandSerialNumber;
-(void)setHasDSID:(BOOL)arg1 ;
-(BOOL)hasDSID;
-(BOOL)hasDeviceID;
-(long long)dSID;
-(void)setCommandSerialNumber:(long long)arg1 ;
-(void)setHasCommandSerialNumber:(BOOL)arg1 ;
-(BOOL)hasCommandSerialNumber;
-(void)setActiveCommandsOnly:(BOOL)arg1 ;
-(void)setHasActiveCommandsOnly:(BOOL)arg1 ;
-(BOOL)hasActiveCommandsOnly;
-(BOOL)activeCommandsOnly;
@end

