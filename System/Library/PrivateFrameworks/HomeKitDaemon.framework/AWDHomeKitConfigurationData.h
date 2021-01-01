/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitConfigurationData : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _databaseSize;
	NSMutableArray* _homeConfigurations;
	unsigned _metadataVersion;
	BOOL _hasActiveWatchDevice;
	BOOL _hasWatchDevice;
	BOOL _isDemoConfiguration;
	BOOL _isResidentCapable;
	BOOL _isResidentEnabled;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDatabaseSize; 
@property (assign,nonatomic) unsigned databaseSize;                            //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign,nonatomic) BOOL hasMetadataVersion; 
@property (assign,nonatomic) unsigned metadataVersion;                         //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (assign,nonatomic) BOOL hasIsResidentCapable; 
@property (assign,nonatomic) BOOL isResidentCapable;                           //@synthesize isResidentCapable=_isResidentCapable - In the implementation block
@property (assign,nonatomic) BOOL hasIsResidentEnabled; 
@property (assign,nonatomic) BOOL isResidentEnabled;                           //@synthesize isResidentEnabled=_isResidentEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeConfigurations;              //@synthesize homeConfigurations=_homeConfigurations - In the implementation block
@property (assign,nonatomic) BOOL hasIsDemoConfiguration; 
@property (assign,nonatomic) BOOL isDemoConfiguration;                         //@synthesize isDemoConfiguration=_isDemoConfiguration - In the implementation block
@property (assign,nonatomic) BOOL hasHasWatchDevice; 
@property (assign,nonatomic) BOOL hasWatchDevice;                              //@synthesize hasWatchDevice=_hasWatchDevice - In the implementation block
@property (assign,nonatomic) BOOL hasHasActiveWatchDevice; 
@property (assign,nonatomic) BOOL hasActiveWatchDevice;                        //@synthesize hasActiveWatchDevice=_hasActiveWatchDevice - In the implementation block
+(Class)homeConfigurationsType;
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
-(unsigned)databaseSize;
-(unsigned)metadataVersion;
-(void)setMetadataVersion:(unsigned)arg1 ;
-(BOOL)isResidentCapable;
-(NSMutableArray *)homeConfigurations;
-(void)addHomeConfigurations:(id)arg1 ;
-(unsigned long long)homeConfigurationsCount;
-(void)clearHomeConfigurations;
-(id)homeConfigurationsAtIndex:(unsigned long long)arg1 ;
-(void)setDatabaseSize:(unsigned)arg1 ;
-(void)setHasDatabaseSize:(BOOL)arg1 ;
-(BOOL)hasDatabaseSize;
-(void)setHasMetadataVersion:(BOOL)arg1 ;
-(BOOL)hasMetadataVersion;
-(void)setIsResidentCapable:(BOOL)arg1 ;
-(void)setHasIsResidentCapable:(BOOL)arg1 ;
-(BOOL)hasIsResidentCapable;
-(void)setIsResidentEnabled:(BOOL)arg1 ;
-(void)setHasIsResidentEnabled:(BOOL)arg1 ;
-(BOOL)hasIsResidentEnabled;
-(void)setIsDemoConfiguration:(BOOL)arg1 ;
-(void)setHasIsDemoConfiguration:(BOOL)arg1 ;
-(BOOL)hasIsDemoConfiguration;
-(void)setHasWatchDevice:(BOOL)arg1 ;
-(void)setHasHasWatchDevice:(BOOL)arg1 ;
-(BOOL)hasHasWatchDevice;
-(void)setHasActiveWatchDevice:(BOOL)arg1 ;
-(void)setHasHasActiveWatchDevice:(BOOL)arg1 ;
-(BOOL)hasHasActiveWatchDevice;
-(BOOL)isResidentEnabled;
-(void)setHomeConfigurations:(NSMutableArray *)arg1 ;
-(BOOL)isDemoConfiguration;
-(BOOL)hasWatchDevice;
-(BOOL)hasActiveWatchDevice;
@end

