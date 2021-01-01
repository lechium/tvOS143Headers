/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ACProtobufDataclassAction : PBCodable <NSCopying> {

	NSMutableArray* _affectedContainers;
	int _type;
	NSString* _undoAlertMessage;
	NSString* _undoAlertTitle;
	BOOL _destructive;

}

@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL destructive;                                 //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) NSMutableArray * affectedContainers;              //@synthesize affectedContainers=_affectedContainers - In the implementation block
@property (nonatomic,readonly) BOOL hasUndoAlertTitle; 
@property (nonatomic,retain) NSString * undoAlertTitle;                        //@synthesize undoAlertTitle=_undoAlertTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasUndoAlertMessage; 
@property (nonatomic,retain) NSString * undoAlertMessage;                      //@synthesize undoAlertMessage=_undoAlertMessage - In the implementation block
+(Class)affectedContainersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addAffectedContainers:(id)arg1 ;
-(unsigned long long)affectedContainersCount;
-(void)clearAffectedContainers;
-(id)affectedContainersAtIndex:(unsigned long long)arg1 ;
-(void)setUndoAlertTitle:(NSString *)arg1 ;
-(void)setUndoAlertMessage:(NSString *)arg1 ;
-(BOOL)hasUndoAlertTitle;
-(BOOL)hasUndoAlertMessage;
-(BOOL)destructive;
-(void)setDestructive:(BOOL)arg1 ;
-(NSMutableArray *)affectedContainers;
-(void)setAffectedContainers:(NSMutableArray *)arg1 ;
-(NSString *)undoAlertTitle;
-(NSString *)undoAlertMessage;
@end

