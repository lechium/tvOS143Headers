/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:22:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFPBError, NSString;

@interface WFPBAlertRequestResponse : PBCodable <NSCopying> {

	WFPBError* _error;
	NSString* _requestIdentifier;
	NSString* _selectedButton;

}

@property (nonatomic,retain) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedButton; 
@property (nonatomic,retain) NSString * selectedButton;                 //@synthesize selectedButton=_selectedButton - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) WFPBError * error;                         //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(WFPBError *)error;
-(void)setError:(WFPBError *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasError;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)requestIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)selectedButton;
-(void)setSelectedButton:(NSString *)arg1 ;
-(BOOL)hasSelectedButton;
@end

