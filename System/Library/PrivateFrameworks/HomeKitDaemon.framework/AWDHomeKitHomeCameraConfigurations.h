/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitHomeCameraConfigurations : PBCodable <NSCopying> {

	unsigned _enabledResidentsDeviceCapabilities;
	NSMutableArray* _homeKitCameraSettings;
	NSMutableArray* _homeKitCameraUserSettings;
	BOOL _isFaceClassificationEnabled;
	BOOL _isOwner;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,retain) NSMutableArray * homeKitCameraUserSettings;               //@synthesize homeKitCameraUserSettings=_homeKitCameraUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeKitCameraSettings;                   //@synthesize homeKitCameraSettings=_homeKitCameraSettings - In the implementation block
@property (assign,nonatomic) BOOL hasEnabledResidentsDeviceCapabilities; 
@property (assign,nonatomic) unsigned enabledResidentsDeviceCapabilities;              //@synthesize enabledResidentsDeviceCapabilities=_enabledResidentsDeviceCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasIsFaceClassificationEnabled; 
@property (assign,nonatomic) BOOL isFaceClassificationEnabled;                         //@synthesize isFaceClassificationEnabled=_isFaceClassificationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsOwner; 
@property (assign,nonatomic) BOOL isOwner;                                             //@synthesize isOwner=_isOwner - In the implementation block
+(Class)homeKitCameraUserSettingsType;
+(Class)homeKitCameraSettingsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isOwner;
-(void)setIsOwner:(BOOL)arg1 ;
-(BOOL)isFaceClassificationEnabled;
-(void)setHasIsOwner:(BOOL)arg1 ;
-(BOOL)hasIsOwner;
-(unsigned)enabledResidentsDeviceCapabilities;
-(void)setEnabledResidentsDeviceCapabilities:(unsigned)arg1 ;
-(void)setHasEnabledResidentsDeviceCapabilities:(BOOL)arg1 ;
-(BOOL)hasEnabledResidentsDeviceCapabilities;
-(void)addHomeKitCameraUserSettings:(id)arg1 ;
-(void)addHomeKitCameraSettings:(id)arg1 ;
-(unsigned long long)homeKitCameraUserSettingsCount;
-(void)clearHomeKitCameraUserSettings;
-(id)homeKitCameraUserSettingsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)homeKitCameraSettingsCount;
-(void)clearHomeKitCameraSettings;
-(id)homeKitCameraSettingsAtIndex:(unsigned long long)arg1 ;
-(void)setIsFaceClassificationEnabled:(BOOL)arg1 ;
-(void)setHasIsFaceClassificationEnabled:(BOOL)arg1 ;
-(BOOL)hasIsFaceClassificationEnabled;
-(NSMutableArray *)homeKitCameraUserSettings;
-(void)setHomeKitCameraUserSettings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)homeKitCameraSettings;
-(void)setHomeKitCameraSettings:(NSMutableArray *)arg1 ;
@end

