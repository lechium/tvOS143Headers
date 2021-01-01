/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMMessagePresentationTrigger : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	int _kind;
	NSString* _triggerName;
	SCD_Struct_IC7 _has;

}

@property (nonatomic,readonly) BOOL hasTriggerName; 
@property (nonatomic,retain) NSString * triggerName;                   //@synthesize triggerName=_triggerName - In the implementation block
@property (assign,nonatomic) BOOL hasKind; 
@property (assign,nonatomic) int kind;                                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(int)kind;
-(void)setKind:(int)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleIdentifier;
-(void)setHasKind:(BOOL)arg1 ;
-(BOOL)hasKind;
-(id)kindAsString:(int)arg1 ;
-(int)StringAsKind:(id)arg1 ;
-(void)setTriggerName:(NSString *)arg1 ;
-(BOOL)hasTriggerName;
-(NSString *)triggerName;
@end

