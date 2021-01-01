/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASSuspendClientEndpointer : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * audioProcessedMs; 
@property (nonatomic,copy) NSNumber * suspendDurationMs; 
+(id)suspendClientEndpointer;
+(id)suspendClientEndpointerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)audioProcessedMs;
-(void)setAudioProcessedMs:(NSNumber *)arg1 ;
-(NSNumber *)suspendDurationMs;
-(void)setSuspendDurationMs:(NSNumber *)arg1 ;
@end

