/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventAuthenticationMessage.h>

@interface BKSMutableHIDEventAuthenticationMessage : BKSHIDEventAuthenticationMessage

@property (assign,nonatomic) long long versionedPID; 
@property (assign,nonatomic) unsigned eventType; 
@property (assign,nonatomic) unsigned long long originIdentifier; 
@property (assign,nonatomic) unsigned long long context; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setVersionedPID:(long long)arg1 ;
-(void)setDestinationAuditToken:(id)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
-(void)setOriginIdentifier:(unsigned long long)arg1 ;
@end

